/* --- Generated the 18/7/2018 at 10:59 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system.h"

void System__ilumination_reset(System__ilumination_mem* self) {
  self->pnr = false;
  self->v_271 = false;
  self->v_272 = false;
  self->v_273 = true;
}

void System__ilumination_step(int c1, int c2, int c_up, int c_down, int up,
                              int down, int ar_fail, int shift,
                              System__ilumination_out* _out,
                              System__ilumination_mem* self) {
  
  int v_270;
  int v_269;
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
  int v_238;
  int v_237;
  int v_236;
  int ns_St_Max_Up_2_0;
  int ns_St_Max_Up_3_0_0;
  int ns_St_Max_Up_3_0_1;
  int ns_St_Max_Up_2_1;
  int ns_St_Max_Up_3_1_0;
  int ns_St_Max_Up_3_1_1;
  int ns_St_Max_2_0;
  int ns_St_Max_3_0_0;
  int ns_St_Max_3_0_1;
  int ns_St_Max_2_1;
  int ns_St_Max_3_1_0;
  int ns_St_Max_3_1_1;
  int ns_St_Min_2_0;
  int ns_St_Min_3_0_0;
  int ns_St_Min_3_0_1;
  int ns_St_Min_2_1;
  int ns_St_Min_3_1_0;
  int ns_St_Min_3_1_1;
  int ns_St_Off_Up_2_0;
  int ns_St_Off_Up_3_0_0;
  int ns_St_Off_Up_3_0_1;
  int ns_St_Off_Up_2_1;
  int ns_St_Off_Up_3_1_0;
  int ns_St_Off_Up_3_1_1;
  int ns_St_Off_2_0;
  int ns_St_Off_3_0_0;
  int ns_St_Off_3_0_1;
  int ns_St_Off_2_1;
  int ns_St_Off_3_1_0;
  int ns_St_Off_3_1_1;
  int ck_1_2_0;
  int ck_1_3_0_0;
  int ck_1_3_0_1;
  int ck_1_2_1;
  int ck_1_3_1_0;
  int ck_1_3_1_1;
  int nr_St_Max_Up;
  int ns_St_Max_Up_3;
  int ns_St_Max_Up_2;
  int ns_St_Max_Up_1;
  int policy_St_Max_Up;
  int pers_St_Max_Up;
  int lamp_St_Max_Up;
  int nr_St_Max;
  int ns_St_Max_3;
  int ns_St_Max_2;
  int ns_St_Max_1;
  int policy_St_Max;
  int pers_St_Max;
  int lamp_St_Max;
  int nr_St_Min;
  int ns_St_Min_3;
  int ns_St_Min_2;
  int ns_St_Min_1;
  int policy_St_Min;
  int pers_St_Min;
  int lamp_St_Min;
  int nr_St_Off_Up;
  int ns_St_Off_Up_3;
  int ns_St_Off_Up_2;
  int ns_St_Off_Up_1;
  int policy_St_Off_Up;
  int pers_St_Off_Up;
  int lamp_St_Off_Up;
  int nr_St_Off;
  int ns_St_Off_3;
  int ns_St_Off_2;
  int ns_St_Off_1;
  int policy_St_Off;
  int pers_St_Off;
  int lamp_St_Off;
  int ck_1_3;
  int ck_1_2;
  int ck_1_1;
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
  int v_32;
  int v_31;
  int v_30;
  int v_28_2_0;
  int v_28_3_0_0;
  int v_28_3_0_1;
  int v_28_2_1;
  int v_28_3_1_0;
  int v_28_3_1_1;
  int v_29;
  int v_28_3;
  int v_28_2;
  int v_28_1;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_21_2_0;
  int v_21_3_0_0;
  int v_21_3_0_1;
  int v_21_2_1;
  int v_21_3_1_0;
  int v_21_3_1_1;
  int v_22;
  int v_21_3;
  int v_21_2;
  int v_21_1;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_13_2_0;
  int v_13_3_0_0;
  int v_13_3_0_1;
  int v_13_2_1;
  int v_13_3_1_0;
  int v_13_3_1_1;
  int v_11_2_0;
  int v_11_3_0_0;
  int v_11_3_0_1;
  int v_11_2_1;
  int v_11_3_1_0;
  int v_11_3_1_1;
  int v_14;
  int v_13_3;
  int v_13_2;
  int v_13_1;
  int v_12;
  int v_11_3;
  int v_11_2;
  int v_11_1;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_5_2_0;
  int v_5_3_0_0;
  int v_5_3_0_1;
  int v_5_2_1;
  int v_5_3_1_0;
  int v_5_3_1_1;
  int v_6;
  int v_5_3;
  int v_5_2;
  int v_5_1;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int v_293;
  int v_292;
  int v_291;
  int v_290;
  int v_289;
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
  int v_278;
  int v_277;
  int v_276;
  int v_275;
  int v_274;
  int s_St_Max_Up_2_0;
  int s_St_Max_Up_3_0_0;
  int s_St_Max_Up_3_0_1;
  int s_St_Max_Up_2_1;
  int s_St_Max_Up_3_1_0;
  int s_St_Max_Up_3_1_1;
  int s_St_Max_2_0;
  int s_St_Max_3_0_0;
  int s_St_Max_3_0_1;
  int s_St_Max_2_1;
  int s_St_Max_3_1_0;
  int s_St_Max_3_1_1;
  int s_St_Min_2_0;
  int s_St_Min_3_0_0;
  int s_St_Min_3_0_1;
  int s_St_Min_2_1;
  int s_St_Min_3_1_0;
  int s_St_Min_3_1_1;
  int s_St_Off_Up_2_0;
  int s_St_Off_Up_3_0_0;
  int s_St_Off_Up_3_0_1;
  int s_St_Off_Up_2_1;
  int s_St_Off_Up_3_1_0;
  int s_St_Off_Up_3_1_1;
  int s_St_Off_2_0;
  int s_St_Off_3_0_0;
  int s_St_Off_3_0_1;
  int s_St_Off_2_1;
  int s_St_Off_3_1_0;
  int s_St_Off_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_Max_Up;
  int s_St_Max_Up_3;
  int s_St_Max_Up_2;
  int s_St_Max_Up_1;
  int r_St_Max;
  int s_St_Max_3;
  int s_St_Max_2;
  int s_St_Max_1;
  int r_St_Min;
  int s_St_Min_3;
  int s_St_Min_2;
  int s_St_Min_1;
  int r_St_Off_Up;
  int s_St_Off_Up_3;
  int s_St_Off_Up_2;
  int s_St_Off_Up_1;
  int r_St_Off;
  int s_St_Off_3;
  int s_St_Off_2;
  int s_St_Off_1;
  int ck_3;
  int ck_2;
  int ck_1_4;
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
  ck_1_4 = self->v_271;
  ck_2 = self->v_272;
  ck_3 = self->v_273;
  if (ck_1_4) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (ar_fail) {
          v_12 = true;
          v_11_1 = false;
          v_11_2 = false;
          v_11_3 = false;
        } else {
          v_12 = self->pnr;
          v_11_1 = true;
          v_11_2 = true;
          v_11_3 = true;
        };
        v_10 = !(c2);
        if (v_10) {
          v_14 = true;
          v_13_1 = false;
          v_13_2 = false;
          v_13_3 = true;
        } else {
          v_14 = v_12;
          v_13_1 = v_11_1;
          v_13_2 = v_11_2;
          v_13_3 = v_11_3;
        };
        v_8 = (down&&c_down);
        v_7 = !(c1);
        v_9 = (v_7||v_8);
        if (v_9) {
          r_St_Max = true;
          s_St_Max_1 = true;
          s_St_Max_2 = false;
          s_St_Max_3 = false;
        } else {
          r_St_Max = v_14;
          s_St_Max_1 = v_13_1;
          s_St_Max_2 = v_13_2;
          s_St_Max_3 = v_13_3;
        };
        v_289 = r_St_Max;
        v_274 = s_St_Max_1;
        v_275 = s_St_Max_2;
        v_276 = s_St_Max_3;
      } else {
        v_3 = !(shift);
        v_2 = !(ar_fail);
        v_4 = (v_2&&v_3);
        if (v_4) {
          v_6 = true;
          v_5_1 = false;
          v_5_2 = false;
          v_5_3 = true;
        } else {
          v_6 = self->pnr;
          v_5_1 = true;
          v_5_2 = true;
          v_5_3 = false;
        };
        v = !(ar_fail);
        v_1 = (v&&shift);
        if (v_1) {
          r_St_Max_Up = true;
        } else {
          r_St_Max_Up = v_6;
        };
        v_289 = r_St_Max_Up;
        if (v_1) {
          s_St_Max_Up_1 = false;
        } else {
          s_St_Max_Up_1 = v_5_1;
        };
        v_274 = s_St_Max_Up_1;
        if (v_1) {
          s_St_Max_Up_2 = false;
        } else {
          s_St_Max_Up_2 = v_5_2;
        };
        v_275 = s_St_Max_Up_2;
        if (v_1) {
          s_St_Max_Up_3 = true;
        } else {
          s_St_Max_Up_3 = v_5_3;
        };
        v_276 = s_St_Max_Up_3;
      };
      v_283 = v_274;
      v_284 = v_275;
      v_285 = v_276;
      v_291 = v_289;
      if (ck_3_1_1) {
        if (v_11_1) {
          v_11_2_1 = v_11_2;
          if (v_11_2_1) {
            v_11_3_1_1 = v_11_3;
          } else {
            v_11_3_1_0 = v_11_3;
          };
        } else {
          v_11_2_0 = v_11_2;
          if (v_11_2_0) {
            v_11_3_0_1 = v_11_3;
          } else {
            v_11_3_0_0 = v_11_3;
          };
        };
        if (v_13_1) {
          v_13_2_1 = v_13_2;
          if (v_13_2_1) {
            v_13_3_1_1 = v_13_3;
          } else {
            v_13_3_1_0 = v_13_3;
          };
        } else {
          v_13_2_0 = v_13_2;
          if (v_13_2_0) {
            v_13_3_0_1 = v_13_3;
          } else {
            v_13_3_0_0 = v_13_3;
          };
        };
        if (s_St_Max_1) {
          s_St_Max_2_1 = s_St_Max_2;
          if (s_St_Max_2_1) {
            s_St_Max_3_1_1 = s_St_Max_3;
          } else {
            s_St_Max_3_1_0 = s_St_Max_3;
          };
        } else {
          s_St_Max_2_0 = s_St_Max_2;
          if (s_St_Max_2_0) {
            s_St_Max_3_0_1 = s_St_Max_3;
          } else {
            s_St_Max_3_0_0 = s_St_Max_3;
          };
        };
      } else {
        if (v_5_1) {
          v_5_2_1 = v_5_2;
          if (v_5_2_1) {
            v_5_3_1_1 = v_5_3;
          } else {
            v_5_3_1_0 = v_5_3;
          };
        } else {
          v_5_2_0 = v_5_2;
          if (v_5_2_0) {
            v_5_3_0_1 = v_5_3;
          } else {
            v_5_3_0_0 = v_5_3;
          };
        };
        if (s_St_Max_Up_1) {
          s_St_Max_Up_2_1 = s_St_Max_Up_2;
          if (s_St_Max_Up_2_1) {
            s_St_Max_Up_3_1_1 = s_St_Max_Up_3;
          } else {
            s_St_Max_Up_3_1_0 = s_St_Max_Up_3;
          };
        } else {
          s_St_Max_Up_2_0 = s_St_Max_Up_2;
          if (s_St_Max_Up_2_0) {
            s_St_Max_Up_3_0_1 = s_St_Max_Up_3;
          } else {
            s_St_Max_Up_3_0_0 = s_St_Max_Up_3;
          };
        };
      };
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_290 = true;
        v_277 = true;
        v_278 = true;
        v_279 = true;
      } else {
        v_19 = (up&&c_up);
        v_18 = !(c2);
        v_20 = (v_18||v_19);
        if (v_20) {
          v_22 = true;
          v_21_1 = true;
          v_21_2 = true;
          v_21_3 = true;
        } else {
          v_22 = self->pnr;
          v_21_1 = true;
          v_21_2 = false;
          v_21_3 = false;
        };
        v_16 = (down&&c_down);
        v_15 = !(c1);
        v_17 = (v_15||v_16);
        if (v_17) {
          r_St_Min = true;
        } else {
          r_St_Min = v_22;
        };
        v_290 = r_St_Min;
        if (v_17) {
          s_St_Min_1 = false;
        } else {
          s_St_Min_1 = v_21_1;
        };
        v_277 = s_St_Min_1;
        if (v_17) {
          s_St_Min_2 = false;
        } else {
          s_St_Min_2 = v_21_2;
        };
        v_278 = s_St_Min_2;
        if (v_17) {
          s_St_Min_3 = true;
        } else {
          s_St_Min_3 = v_21_3;
        };
        v_279 = s_St_Min_3;
        if (v_21_1) {
          v_21_2_1 = v_21_2;
          if (v_21_2_1) {
            v_21_3_1_1 = v_21_3;
          } else {
            v_21_3_1_0 = v_21_3;
          };
        } else {
          v_21_2_0 = v_21_2;
          if (v_21_2_0) {
            v_21_3_0_1 = v_21_3;
          } else {
            v_21_3_0_0 = v_21_3;
          };
        };
        if (s_St_Min_1) {
          s_St_Min_2_1 = s_St_Min_2;
          if (s_St_Min_2_1) {
            s_St_Min_3_1_1 = s_St_Min_3;
          } else {
            s_St_Min_3_1_0 = s_St_Min_3;
          };
        } else {
          s_St_Min_2_0 = s_St_Min_2;
          if (s_St_Min_2_0) {
            s_St_Min_3_0_1 = s_St_Min_3;
          } else {
            s_St_Min_3_0_0 = s_St_Min_3;
          };
        };
      };
      v_283 = v_277;
      v_284 = v_278;
      v_285 = v_279;
      v_291 = v_290;
    };
    s_1 = v_283;
    s_2 = v_284;
    s_3 = v_285;
    r = v_291;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_286 = true;
      v_287 = true;
      v_288 = true;
      v_293 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_33 = !(c2);
        if (v_33) {
          v_35 = true;
          v_34_1 = true;
          v_34_2 = true;
          v_34_3 = true;
        } else {
          v_35 = self->pnr;
          v_34_1 = false;
          v_34_2 = false;
          v_34_3 = true;
        };
        v_31 = (up&&c_up);
        v_30 = !(c1);
        v_32 = (v_30||v_31);
        if (v_32) {
          r_St_Off = true;
          s_St_Off_1 = true;
          s_St_Off_2 = false;
          s_St_Off_3 = false;
        } else {
          r_St_Off = v_35;
          s_St_Off_1 = v_34_1;
          s_St_Off_2 = v_34_2;
          s_St_Off_3 = v_34_3;
        };
        v_292 = r_St_Off;
        v_280 = s_St_Off_1;
        v_281 = s_St_Off_2;
        v_282 = s_St_Off_3;
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
      } else {
        v_26 = !(shift);
        v_25 = !(ar_fail);
        v_27 = (v_25&&v_26);
        if (v_27) {
          v_29 = true;
          v_28_1 = true;
          v_28_2 = true;
          v_28_3 = true;
        } else {
          v_29 = self->pnr;
          v_28_1 = false;
          v_28_2 = false;
          v_28_3 = false;
        };
        v_23 = !(ar_fail);
        v_24 = (v_23&&shift);
        if (v_24) {
          r_St_Off_Up = true;
        } else {
          r_St_Off_Up = v_29;
        };
        v_292 = r_St_Off_Up;
        if (v_24) {
          s_St_Off_Up_1 = false;
        } else {
          s_St_Off_Up_1 = v_28_1;
        };
        v_280 = s_St_Off_Up_1;
        if (v_24) {
          s_St_Off_Up_2 = false;
        } else {
          s_St_Off_Up_2 = v_28_2;
        };
        v_281 = s_St_Off_Up_2;
        if (v_24) {
          s_St_Off_Up_3 = true;
        } else {
          s_St_Off_Up_3 = v_28_3;
        };
        v_282 = s_St_Off_Up_3;
        if (v_28_1) {
          v_28_2_1 = v_28_2;
          if (v_28_2_1) {
            v_28_3_1_1 = v_28_3;
          } else {
            v_28_3_1_0 = v_28_3;
          };
        } else {
          v_28_2_0 = v_28_2;
          if (v_28_2_0) {
            v_28_3_0_1 = v_28_3;
          } else {
            v_28_3_0_0 = v_28_3;
          };
        };
      };
      v_286 = v_280;
      v_287 = v_281;
      v_288 = v_282;
      v_293 = v_292;
    };
    s_1 = v_286;
    s_2 = v_287;
    s_3 = v_288;
    r = v_293;
  };
  ck_1_1 = s_1;
  ck_1_2 = s_2;
  ck_1_3 = s_3;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      ck_1_3_1_1 = ck_1_3;
      if (ck_1_3_1_1) {
        lamp_St_Max = 2;
        pers_St_Max = 2;
        policy_St_Max = 2;
        nr_St_Max = false;
        ns_St_Max_1 = true;
        ns_St_Max_2 = true;
        ns_St_Max_3 = true;
        v_236 = lamp_St_Max;
        v_241 = pers_St_Max;
        v_246 = policy_St_Max;
        v_266 = nr_St_Max;
        v_251 = ns_St_Max_1;
        v_252 = ns_St_Max_2;
        v_253 = ns_St_Max_3;
      } else {
        lamp_St_Max_Up = 0;
        v_236 = lamp_St_Max_Up;
        pers_St_Max_Up = 0;
        v_241 = pers_St_Max_Up;
        policy_St_Max_Up = 5;
        v_246 = policy_St_Max_Up;
        nr_St_Max_Up = false;
        v_266 = nr_St_Max_Up;
        ns_St_Max_Up_1 = true;
        v_251 = ns_St_Max_Up_1;
        ns_St_Max_Up_2 = true;
        v_252 = ns_St_Max_Up_2;
        ns_St_Max_Up_3 = false;
        v_253 = ns_St_Max_Up_3;
      };
      v_238 = v_236;
      v_243 = v_241;
      v_248 = v_246;
      v_260 = v_251;
      v_261 = v_252;
      v_262 = v_253;
      v_268 = v_266;
      if (ck_1_3_1_1) {
        if (ns_St_Max_1) {
          ns_St_Max_2_1 = ns_St_Max_2;
          if (ns_St_Max_2_1) {
            ns_St_Max_3_1_1 = ns_St_Max_3;
          } else {
            ns_St_Max_3_1_0 = ns_St_Max_3;
          };
        } else {
          ns_St_Max_2_0 = ns_St_Max_2;
          if (ns_St_Max_2_0) {
            ns_St_Max_3_0_1 = ns_St_Max_3;
          } else {
            ns_St_Max_3_0_0 = ns_St_Max_3;
          };
        };
      } else {
        if (ns_St_Max_Up_1) {
          ns_St_Max_Up_2_1 = ns_St_Max_Up_2;
          if (ns_St_Max_Up_2_1) {
            ns_St_Max_Up_3_1_1 = ns_St_Max_Up_3;
          } else {
            ns_St_Max_Up_3_1_0 = ns_St_Max_Up_3;
          };
        } else {
          ns_St_Max_Up_2_0 = ns_St_Max_Up_2;
          if (ns_St_Max_Up_2_0) {
            ns_St_Max_Up_3_0_1 = ns_St_Max_Up_3;
          } else {
            ns_St_Max_Up_3_0_0 = ns_St_Max_Up_3;
          };
        };
      };
    } else {
      ck_1_3_1_0 = ck_1_3;
      if (ck_1_3_1_0) {
        v_237 = 0;
        v_242 = 0;
        v_247 = 0;
        v_267 = true;
        v_254 = true;
        v_255 = true;
        v_256 = true;
      } else {
        lamp_St_Min = 1;
        v_237 = lamp_St_Min;
        pers_St_Min = 1;
        v_242 = pers_St_Min;
        policy_St_Min = 1;
        v_247 = policy_St_Min;
        nr_St_Min = false;
        v_267 = nr_St_Min;
        ns_St_Min_1 = true;
        v_254 = ns_St_Min_1;
        ns_St_Min_2 = false;
        v_255 = ns_St_Min_2;
        ns_St_Min_3 = false;
        v_256 = ns_St_Min_3;
        if (ns_St_Min_1) {
          ns_St_Min_2_1 = ns_St_Min_2;
          if (ns_St_Min_2_1) {
            ns_St_Min_3_1_1 = ns_St_Min_3;
          } else {
            ns_St_Min_3_1_0 = ns_St_Min_3;
          };
        } else {
          ns_St_Min_2_0 = ns_St_Min_2;
          if (ns_St_Min_2_0) {
            ns_St_Min_3_0_1 = ns_St_Min_3;
          } else {
            ns_St_Min_3_0_0 = ns_St_Min_3;
          };
        };
      };
      v_238 = v_237;
      v_243 = v_242;
      v_248 = v_247;
      v_260 = v_254;
      v_261 = v_255;
      v_262 = v_256;
      v_268 = v_267;
    };
    _out->lamp = v_238;
    _out->pers = v_243;
    _out->policy = v_248;
    ns_1 = v_260;
    ns_2 = v_261;
    ns_3 = v_262;
    nr = v_268;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      ck_1_3_0_1 = ck_1_3;
      v_240 = 0;
      v_245 = 0;
      v_250 = 0;
      v_263 = true;
      v_264 = true;
      v_265 = true;
      v_270 = true;
    } else {
      ck_1_3_0_0 = ck_1_3;
      if (ck_1_3_0_0) {
        lamp_St_Off = 0;
        pers_St_Off = 0;
        policy_St_Off = 0;
        nr_St_Off = false;
        ns_St_Off_1 = false;
        ns_St_Off_2 = false;
        ns_St_Off_3 = true;
        v_239 = lamp_St_Off;
        v_244 = pers_St_Off;
        v_249 = policy_St_Off;
        v_269 = nr_St_Off;
        v_257 = ns_St_Off_1;
        v_258 = ns_St_Off_2;
        v_259 = ns_St_Off_3;
      } else {
        lamp_St_Off_Up = 2;
        v_239 = lamp_St_Off_Up;
        pers_St_Off_Up = 0;
        v_244 = pers_St_Off_Up;
        policy_St_Off_Up = 4;
        v_249 = policy_St_Off_Up;
        nr_St_Off_Up = false;
        v_269 = nr_St_Off_Up;
        ns_St_Off_Up_1 = false;
        v_257 = ns_St_Off_Up_1;
        ns_St_Off_Up_2 = false;
        v_258 = ns_St_Off_Up_2;
        ns_St_Off_Up_3 = false;
        v_259 = ns_St_Off_Up_3;
      };
      v_240 = v_239;
      v_245 = v_244;
      v_250 = v_249;
      v_263 = v_257;
      v_264 = v_258;
      v_265 = v_259;
      v_270 = v_269;
    };
    _out->lamp = v_240;
    _out->pers = v_245;
    _out->policy = v_250;
    ns_1 = v_263;
    ns_2 = v_264;
    ns_3 = v_265;
    nr = v_270;
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
  if (!(ck_1_1)) {
    if (!(ck_1_2_0)) {
      if (ck_1_3_0_0) {
        if (ns_St_Off_1) {
          ns_St_Off_2_1 = ns_St_Off_2;
          if (ns_St_Off_2_1) {
            ns_St_Off_3_1_1 = ns_St_Off_3;
          } else {
            ns_St_Off_3_1_0 = ns_St_Off_3;
          };
        } else {
          ns_St_Off_2_0 = ns_St_Off_2;
          if (ns_St_Off_2_0) {
            ns_St_Off_3_0_1 = ns_St_Off_3;
          } else {
            ns_St_Off_3_0_0 = ns_St_Off_3;
          };
        };
      } else {
        if (ns_St_Off_Up_1) {
          ns_St_Off_Up_2_1 = ns_St_Off_Up_2;
          if (ns_St_Off_Up_2_1) {
            ns_St_Off_Up_3_1_1 = ns_St_Off_Up_3;
          } else {
            ns_St_Off_Up_3_1_0 = ns_St_Off_Up_3;
          };
        } else {
          ns_St_Off_Up_2_0 = ns_St_Off_Up_2;
          if (ns_St_Off_Up_2_0) {
            ns_St_Off_Up_3_0_1 = ns_St_Off_Up_3;
          } else {
            ns_St_Off_Up_3_0_0 = ns_St_Off_Up_3;
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
  if (!(ck_1_4)) {
    if (!(ck_2_0)) {
      if (ck_3_0_0) {
        if (s_St_Off_1) {
          s_St_Off_2_1 = s_St_Off_2;
          if (s_St_Off_2_1) {
            s_St_Off_3_1_1 = s_St_Off_3;
          } else {
            s_St_Off_3_1_0 = s_St_Off_3;
          };
        } else {
          s_St_Off_2_0 = s_St_Off_2;
          if (s_St_Off_2_0) {
            s_St_Off_3_0_1 = s_St_Off_3;
          } else {
            s_St_Off_3_0_0 = s_St_Off_3;
          };
        };
      } else {
        if (s_St_Off_Up_1) {
          s_St_Off_Up_2_1 = s_St_Off_Up_2;
          if (s_St_Off_Up_2_1) {
            s_St_Off_Up_3_1_1 = s_St_Off_Up_3;
          } else {
            s_St_Off_Up_3_1_0 = s_St_Off_Up_3;
          };
        } else {
          s_St_Off_Up_2_0 = s_St_Off_Up_2;
          if (s_St_Off_Up_2_0) {
            s_St_Off_Up_3_0_1 = s_St_Off_Up_3;
          } else {
            s_St_Off_Up_3_0_0 = s_St_Off_Up_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_271 = ns_1;
  self->v_272 = ns_2;
  self->v_273 = ns_3;;
}

void System__lamp_reset(System__lamp_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__lamp_step(int c1, int c2, int sw, System__lamp_out* _out,
                       System__lamp_mem* self) {
  
  int nr_St_1_On;
  int ns_St_1_On_1;
  int lamp_on_St_1_On;
  int nr_St_1_Off;
  int ns_St_1_Off_1;
  int lamp_on_St_1_Off;
  int ck_2_1;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v;
  int r_St_1_On;
  int s_St_1_On_1;
  int r_St_1_Off;
  int s_St_1_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_39 = !(c2);
    v_38 = (c1&&sw);
    v_40 = (v_38||v_39);
    if (v_40) {
      r_St_1_Off = true;
      s_St_1_Off_1 = false;
    } else {
      r_St_1_Off = self->pnr;
      s_St_1_Off_1 = true;
    };
    r = r_St_1_Off;
    s_1 = s_St_1_Off_1;
  } else {
    v_36 = !(c2);
    v = (c1&&sw);
    v_37 = (v||v_36);
    if (v_37) {
      r_St_1_On = true;
    } else {
      r_St_1_On = self->pnr;
    };
    r = r_St_1_On;
    if (v_37) {
      s_St_1_On_1 = true;
    } else {
      s_St_1_On_1 = false;
    };
    s_1 = s_St_1_On_1;
  };
  ck_2_1 = s_1;
  if (ck_2_1) {
    lamp_on_St_1_Off = 0;
    nr_St_1_Off = false;
    ns_St_1_Off_1 = true;
    _out->lamp_on = lamp_on_St_1_Off;
    nr = nr_St_1_Off;
    ns_1 = ns_St_1_Off_1;
  } else {
    lamp_on_St_1_On = 1;
    _out->lamp_on = lamp_on_St_1_On;
    nr_St_1_On = false;
    nr = nr_St_1_On;
    ns_St_1_On_1 = false;
    ns_1 = ns_St_1_On_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__blind_reset(System__blind_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__blind_step(int c1, int c2, int sw, System__blind_out* _out,
                        System__blind_mem* self) {
  
  int nr_St_2_Up;
  int ns_St_2_Up_1;
  int blind_open_St_2_Up;
  int nr_St_2_Down;
  int ns_St_2_Down_1;
  int blind_open_St_2_Down;
  int ck_3_1;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v;
  int r_St_2_Up;
  int s_St_2_Up_1;
  int r_St_2_Down;
  int s_St_2_Down_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_44 = !(c2);
    v_43 = (c1&&sw);
    v_45 = (v_43||v_44);
    if (v_45) {
      r_St_2_Down = true;
      s_St_2_Down_1 = false;
    } else {
      r_St_2_Down = self->pnr;
      s_St_2_Down_1 = true;
    };
    r = r_St_2_Down;
    s_1 = s_St_2_Down_1;
  } else {
    v_41 = !(c2);
    v = (c1&&sw);
    v_42 = (v||v_41);
    if (v_42) {
      r_St_2_Up = true;
    } else {
      r_St_2_Up = self->pnr;
    };
    r = r_St_2_Up;
    if (v_42) {
      s_St_2_Up_1 = true;
    } else {
      s_St_2_Up_1 = false;
    };
    s_1 = s_St_2_Up_1;
  };
  ck_3_1 = s_1;
  if (ck_3_1) {
    blind_open_St_2_Down = false;
    nr_St_2_Down = false;
    ns_St_2_Down_1 = true;
    _out->blind_open = blind_open_St_2_Down;
    nr = nr_St_2_Down;
    ns_1 = ns_St_2_Down_1;
  } else {
    blind_open_St_2_Up = true;
    _out->blind_open = blind_open_St_2_Up;
    nr_St_2_Up = false;
    nr = nr_St_2_Up;
    ns_St_2_Up_1 = false;
    ns_1 = ns_St_2_Up_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__door_reset(System__door_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__door_step(int push, int c1, int c2, System__door_out* _out,
                       System__door_mem* self) {
  
  int nr_St_3_Open;
  int ns_St_3_Open_1;
  int door_open_St_3_Open;
  int nr_St_3_Closed;
  int ns_St_3_Closed_1;
  int door_open_St_3_Closed;
  int ck_4_1;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
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
    v_49 = !(c1);
    v_48 = (push&&c2);
    v_50 = (v_48||v_49);
    if (v_50) {
      r_St_3_Closed = true;
      s_St_3_Closed_1 = false;
    } else {
      r_St_3_Closed = self->pnr;
      s_St_3_Closed_1 = true;
    };
    r = r_St_3_Closed;
    s_1 = s_St_3_Closed_1;
  } else {
    v_46 = !(c1);
    v = (push&&c2);
    v_47 = (v||v_46);
    if (v_47) {
      r_St_3_Open = true;
    } else {
      r_St_3_Open = self->pnr;
    };
    r = r_St_3_Open;
    if (v_47) {
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

void System__closet_reset(System__closet_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__closet_step(int c, System__closet_out* _out,
                         System__closet_mem* self) {
  
  int nr_St_4_Open;
  int ns_St_4_Open_1;
  int closet_open_St_4_Open;
  int nr_St_4_Locked;
  int ns_St_4_Locked_1;
  int closet_open_St_4_Locked;
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
    closet_open_St_4_Locked = false;
    nr_St_4_Locked = false;
    ns_St_4_Locked_1 = true;
    _out->closet_open = closet_open_St_4_Locked;
    nr = nr_St_4_Locked;
    ns_1 = ns_St_4_Locked_1;
  } else {
    closet_open_St_4_Open = true;
    _out->closet_open = closet_open_St_4_Open;
    nr_St_4_Open = false;
    nr = nr_St_4_Open;
    ns_St_4_Open_1 = false;
    ns_1 = ns_St_4_Open_1;
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
  
  int nr_St_5_Present;
  int ns_St_5_Present_1;
  int presence_St_5_Present;
  int nr_St_5_Not_Present;
  int ns_St_5_Not_Present_1;
  int presence_St_5_Not_Present;
  int ck_6_1;
  int r_St_5_Present;
  int s_St_5_Present_1;
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
      r_St_5_Present = true;
    } else {
      r_St_5_Present = self->pnr;
    };
    r = r_St_5_Present;
    if (arrived) {
      s_St_5_Present_1 = true;
    } else {
      s_St_5_Present_1 = false;
    };
    s_1 = s_St_5_Present_1;
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
    presence_St_5_Present = true;
    _out->presence = presence_St_5_Present;
    nr_St_5_Present = false;
    nr = nr_St_5_Present;
    ns_St_5_Present_1 = false;
    ns_1 = ns_St_5_Present_1;
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
  
  int nr_St_6_On;
  int ns_St_6_On_1;
  int computer_on_St_6_On;
  int nr_St_6_Off;
  int ns_St_6_Off_1;
  int computer_on_St_6_Off;
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
    computer_on_St_6_Off = false;
    nr_St_6_Off = false;
    ns_St_6_Off_1 = true;
    _out->computer_on = computer_on_St_6_Off;
    nr = nr_St_6_Off;
    ns_1 = ns_St_6_Off_1;
  } else {
    computer_on_St_6_On = true;
    _out->computer_on = computer_on_St_6_On;
    nr_St_6_On = false;
    nr = nr_St_6_On;
    ns_St_6_On_1 = false;
    ns_1 = ns_St_6_On_1;
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
  
  int nr_St_7_Open;
  int ns_St_7_Open_1;
  int window_open_St_7_Open;
  int nr_St_7_Closed;
  int ns_St_7_Closed_1;
  int window_open_St_7_Closed;
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
    v = !(c);
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
    if (c) {
      r_St_7_Open = true;
    } else {
      r_St_7_Open = self->pnr;
    };
    r = r_St_7_Open;
    if (c) {
      s_St_7_Open_1 = true;
    } else {
      s_St_7_Open_1 = false;
    };
    s_1 = s_St_7_Open_1;
  };
  ck_8_1 = s_1;
  if (ck_8_1) {
    window_open_St_7_Closed = false;
    nr_St_7_Closed = false;
    ns_St_7_Closed_1 = true;
    _out->window_open = window_open_St_7_Closed;
    nr = nr_St_7_Closed;
    ns_1 = ns_St_7_Closed_1;
  } else {
    window_open_St_7_Open = true;
    _out->window_open = window_open_St_7_Open;
    nr_St_7_Open = false;
    nr = nr_St_7_Open;
    ns_St_7_Open_1 = false;
    ns_1 = ns_St_7_Open_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__air_conditioner_reset(System__air_conditioner_mem* self) {
  self->pnr = false;
  self->v_302 = false;
  self->v_303 = false;
}

void System__air_conditioner_step(int c1, int c2,
                                  System__air_conditioner_out* _out,
                                  System__air_conditioner_mem* self) {
  
  int v_301;
  int v_300;
  int v_299;
  int v_298;
  int v_297;
  int v_296;
  int v_295;
  int v_294;
  int ns_St_8_Max_2_0;
  int ns_St_8_Max_2_1;
  int ns_St_8_Min_2_0;
  int ns_St_8_Min_2_1;
  int ns_St_8_Off_2_0;
  int ns_St_8_Off_2_1;
  int ck_9_2_0;
  int ck_9_2_1;
  int nr_St_8_Max;
  int ns_St_8_Max_2;
  int ns_St_8_Max_1;
  int air_state_St_8_Max;
  int nr_St_8_Min;
  int ns_St_8_Min_2;
  int ns_St_8_Min_1;
  int air_state_St_8_Min;
  int nr_St_8_Off;
  int ns_St_8_Off_2;
  int ns_St_8_Off_1;
  int air_state_St_8_Off;
  int ck_9_2;
  int ck_9_1;
  int v_59_2_0;
  int v_59_2_1;
  int v_60;
  int v_59_2;
  int v_59_1;
  int v_58;
  int v_56_2_0;
  int v_56_2_1;
  int v_57;
  int v_56_2;
  int v_56_1;
  int v_55;
  int v_54;
  int v_52_2_0;
  int v_52_2_1;
  int v_53;
  int v_52_2;
  int v_52_1;
  int v_51;
  int v;
  int v_309;
  int v_308;
  int v_307;
  int v_306;
  int v_305;
  int v_304;
  int s_St_8_Max_2_0;
  int s_St_8_Max_2_1;
  int s_St_8_Min_2_0;
  int s_St_8_Min_2_1;
  int s_St_8_Off_2_0;
  int s_St_8_Off_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_8_Max;
  int s_St_8_Max_2;
  int s_St_8_Max_1;
  int r_St_8_Min;
  int s_St_8_Min_2;
  int s_St_8_Min_1;
  int r_St_8_Off;
  int s_St_8_Off_2;
  int s_St_8_Off_1;
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
  ck_1 = self->v_302;
  ck_2 = self->v_303;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_51 = !(c2);
      if (v_51) {
        v_53 = true;
        v_52_1 = false;
        v_52_2 = false;
      } else {
        v_53 = self->pnr;
        v_52_1 = true;
        v_52_2 = true;
      };
      v = !(c1);
      if (v) {
        r_St_8_Max = true;
      } else {
        r_St_8_Max = v_53;
      };
      v_308 = r_St_8_Max;
      if (v) {
        s_St_8_Max_1 = true;
      } else {
        s_St_8_Max_1 = v_52_1;
      };
      v_304 = s_St_8_Max_1;
      if (v) {
        s_St_8_Max_2 = false;
      } else {
        s_St_8_Max_2 = v_52_2;
      };
      v_305 = s_St_8_Max_2;
    } else {
      v_55 = !(c2);
      if (v_55) {
        v_57 = true;
        v_56_1 = true;
        v_56_2 = true;
      } else {
        v_57 = self->pnr;
        v_56_1 = true;
        v_56_2 = false;
      };
      v_54 = !(c1);
      if (v_54) {
        r_St_8_Min = true;
        s_St_8_Min_1 = false;
        s_St_8_Min_2 = false;
      } else {
        r_St_8_Min = v_57;
        s_St_8_Min_1 = v_56_1;
        s_St_8_Min_2 = v_56_2;
      };
      v_308 = r_St_8_Min;
      v_304 = s_St_8_Min_1;
      v_305 = s_St_8_Min_2;
    };
    s_1 = v_304;
    s_2 = v_305;
    r = v_308;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_309 = true;
      v_306 = true;
      v_307 = true;
    } else {
      v_58 = !(c2);
      if (v_58) {
        v_60 = true;
      } else {
        v_60 = self->pnr;
      };
      if (c1) {
        r_St_8_Off = true;
      } else {
        r_St_8_Off = v_60;
      };
      v_309 = r_St_8_Off;
      if (v_58) {
        v_59_1 = true;
      } else {
        v_59_1 = false;
      };
      if (c1) {
        s_St_8_Off_1 = true;
      } else {
        s_St_8_Off_1 = v_59_1;
      };
      v_306 = s_St_8_Off_1;
      if (v_58) {
        v_59_2 = true;
      } else {
        v_59_2 = false;
      };
      if (c1) {
        s_St_8_Off_2 = false;
      } else {
        s_St_8_Off_2 = v_59_2;
      };
      v_307 = s_St_8_Off_2;
      if (v_59_1) {
        v_59_2_1 = v_59_2;
      } else {
        v_59_2_0 = v_59_2;
      };
      if (s_St_8_Off_1) {
        s_St_8_Off_2_1 = s_St_8_Off_2;
      } else {
        s_St_8_Off_2_0 = s_St_8_Off_2;
      };
    };
    s_1 = v_306;
    s_2 = v_307;
    r = v_309;
  };
  ck_9_1 = s_1;
  ck_9_2 = s_2;
  if (ck_9_1) {
    ck_9_2_1 = ck_9_2;
    if (ck_9_2_1) {
      air_state_St_8_Max = 2;
      v_294 = air_state_St_8_Max;
      nr_St_8_Max = false;
      v_300 = nr_St_8_Max;
      ns_St_8_Max_1 = true;
      v_296 = ns_St_8_Max_1;
      ns_St_8_Max_2 = true;
      v_297 = ns_St_8_Max_2;
    } else {
      air_state_St_8_Min = 1;
      nr_St_8_Min = false;
      ns_St_8_Min_1 = true;
      ns_St_8_Min_2 = false;
      v_294 = air_state_St_8_Min;
      v_300 = nr_St_8_Min;
      v_296 = ns_St_8_Min_1;
      v_297 = ns_St_8_Min_2;
    };
    _out->air_state = v_294;
    ns_1 = v_296;
    ns_2 = v_297;
    nr = v_300;
  } else {
    ck_9_2_0 = ck_9_2;
    if (ck_9_2_0) {
      v_295 = 0;
      v_301 = true;
      v_298 = true;
      v_299 = true;
    } else {
      air_state_St_8_Off = 0;
      v_295 = air_state_St_8_Off;
      nr_St_8_Off = false;
      v_301 = nr_St_8_Off;
      ns_St_8_Off_1 = false;
      v_298 = ns_St_8_Off_1;
      ns_St_8_Off_2 = false;
      v_299 = ns_St_8_Off_2;
      if (ns_St_8_Off_1) {
        ns_St_8_Off_2_1 = ns_St_8_Off_2;
      } else {
        ns_St_8_Off_2_0 = ns_St_8_Off_2;
      };
    };
    _out->air_state = v_295;
    ns_1 = v_298;
    ns_2 = v_299;
    nr = v_301;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_9_1) {
    if (ck_9_2_1) {
      if (ns_St_8_Max_1) {
        ns_St_8_Max_2_1 = ns_St_8_Max_2;
      } else {
        ns_St_8_Max_2_0 = ns_St_8_Max_2;
      };
    } else {
      if (ns_St_8_Min_1) {
        ns_St_8_Min_2_1 = ns_St_8_Min_2;
      } else {
        ns_St_8_Min_2_0 = ns_St_8_Min_2;
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
      if (v_52_1) {
        v_52_2_1 = v_52_2;
      } else {
        v_52_2_0 = v_52_2;
      };
      if (s_St_8_Max_1) {
        s_St_8_Max_2_1 = s_St_8_Max_2;
      } else {
        s_St_8_Max_2_0 = s_St_8_Max_2;
      };
    } else {
      if (v_56_1) {
        v_56_2_1 = v_56_2;
      } else {
        v_56_2_0 = v_56_2;
      };
      if (s_St_8_Min_1) {
        s_St_8_Min_2_1 = s_St_8_Min_2;
      } else {
        s_St_8_Min_2_0 = s_St_8_Min_2;
      };
    };
  };
  self->pnr = nr;
  self->v_302 = ns_1;
  self->v_303 = ns_2;;
}

void System__day_shift_reset(System__day_shift_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__day_shift_step(int change, System__day_shift_out* _out,
                            System__day_shift_mem* self) {
  
  int nr_St_9_Noite;
  int ns_St_9_Noite_1;
  int night_St_9_Noite;
  int nr_St_9_Dia;
  int ns_St_9_Dia_1;
  int night_St_9_Dia;
  int ck_10_1;
  int r_St_9_Noite;
  int s_St_9_Noite_1;
  int r_St_9_Dia;
  int s_St_9_Dia_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (change) {
      r_St_9_Dia = true;
      s_St_9_Dia_1 = false;
    } else {
      r_St_9_Dia = self->pnr;
      s_St_9_Dia_1 = true;
    };
    r = r_St_9_Dia;
    s_1 = s_St_9_Dia_1;
  } else {
    if (change) {
      r_St_9_Noite = true;
    } else {
      r_St_9_Noite = self->pnr;
    };
    r = r_St_9_Noite;
    if (change) {
      s_St_9_Noite_1 = true;
    } else {
      s_St_9_Noite_1 = false;
    };
    s_1 = s_St_9_Noite_1;
  };
  ck_10_1 = s_1;
  if (ck_10_1) {
    night_St_9_Dia = false;
    nr_St_9_Dia = false;
    ns_St_9_Dia_1 = true;
    _out->night = night_St_9_Dia;
    nr = nr_St_9_Dia;
    ns_1 = ns_St_9_Dia_1;
  } else {
    night_St_9_Noite = true;
    _out->night = night_St_9_Noite;
    nr_St_9_Noite = false;
    nr = nr_St_9_Noite;
    ns_St_9_Noite_1 = false;
    ns_1 = ns_St_9_Noite_1;
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
  
  int nr_St_10_Falha;
  int ns_St_10_Falha_1;
  int failed_St_10_Falha;
  int nr_St_10_Funcionando;
  int ns_St_10_Funcionando_1;
  int failed_St_10_Funcionando;
  int ck_11_1;
  int r_St_10_Falha;
  int s_St_10_Falha_1;
  int r_St_10_Funcionando;
  int s_St_10_Funcionando_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (failed_recovered) {
      r_St_10_Falha = true;
    } else {
      r_St_10_Falha = self->pnr;
    };
    r = r_St_10_Falha;
    if (failed_recovered) {
      s_St_10_Falha_1 = false;
    } else {
      s_St_10_Falha_1 = true;
    };
    s_1 = s_St_10_Falha_1;
  } else {
    if (failed_recovered) {
      r_St_10_Funcionando = true;
      s_St_10_Funcionando_1 = true;
    } else {
      r_St_10_Funcionando = self->pnr;
      s_St_10_Funcionando_1 = false;
    };
    r = r_St_10_Funcionando;
    s_1 = s_St_10_Funcionando_1;
  };
  ck_11_1 = s_1;
  if (ck_11_1) {
    failed_St_10_Falha = true;
    _out->failed = failed_St_10_Falha;
    nr_St_10_Falha = false;
    nr = nr_St_10_Falha;
    ns_St_10_Falha_1 = true;
    ns_1 = ns_St_10_Falha_1;
  } else {
    failed_St_10_Funcionando = false;
    nr_St_10_Funcionando = false;
    ns_St_10_Funcionando_1 = false;
    _out->failed = failed_St_10_Funcionando;
    nr = nr_St_10_Funcionando;
    ns_1 = ns_St_10_Funcionando_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__air_fail_reset(System__air_fail_mem* self) {
  self->pnr = false;
  self->ck_14_1 = false;
  self->pnr_1 = false;
  self->v_318 = false;
  self->v_319 = false;
}

void System__air_fail_step(int c1, int c2, int failed_recovered,
                           System__air_fail_out* _out,
                           System__air_fail_mem* self) {
  
  int nr_St_11_Falha;
  int ns_St_11_Falha_1;
  int failed_1_St_11_Falha;
  int nr_St_11_Funcionando;
  int ns_St_11_Funcionando_1;
  int failed_1_St_11_Funcionando;
  int ck_15_1;
  int r_St_11_Falha;
  int s_St_11_Falha_1;
  int r_St_11_Funcionando;
  int s_St_11_Funcionando_1;
  int v_317;
  int v_316;
  int v_315;
  int v_314;
  int v_313;
  int v_312;
  int v_311;
  int v_310;
  int ns_1_St_12_Max_2_0;
  int ns_1_St_12_Max_2_1;
  int ns_1_St_12_Min_2_0;
  int ns_1_St_12_Min_2_1;
  int ns_1_St_12_Off_2_0;
  int ns_1_St_12_Off_2_1;
  int ck_13_2_0;
  int ck_13_2_1;
  int nr_1_St_12_Max;
  int ns_1_St_12_Max_2;
  int ns_1_St_12_Max_1;
  int air_state_1_St_12_Max;
  int nr_1_St_12_Min;
  int ns_1_St_12_Min_2;
  int ns_1_St_12_Min_1;
  int air_state_1_St_12_Min;
  int nr_1_St_12_Off;
  int ns_1_St_12_Off_2;
  int ns_1_St_12_Off_1;
  int air_state_1_St_12_Off;
  int ck_13_2;
  int ck_13_1;
  int v_69_2_0;
  int v_69_2_1;
  int v_70;
  int v_69_2;
  int v_69_1;
  int v_68;
  int v_66_2_0;
  int v_66_2_1;
  int v_67;
  int v_66_2;
  int v_66_1;
  int v_65;
  int v_64;
  int v_62_2_0;
  int v_62_2_1;
  int v_63;
  int v_62_2;
  int v_62_1;
  int v_61;
  int v;
  int v_325;
  int v_324;
  int v_323;
  int v_322;
  int v_321;
  int v_320;
  int s_1_St_12_Max_2_0;
  int s_1_St_12_Max_2_1;
  int s_1_St_12_Min_2_0;
  int s_1_St_12_Min_2_1;
  int s_1_St_12_Off_2_0;
  int s_1_St_12_Off_2_1;
  int ck_12_2_0;
  int ck_12_2_1;
  int r_1_St_12_Max;
  int s_1_St_12_Max_2;
  int s_1_St_12_Max_1;
  int r_1_St_12_Min;
  int s_1_St_12_Min_2;
  int s_1_St_12_Min_1;
  int r_1_St_12_Off;
  int s_1_St_12_Off_2;
  int s_1_St_12_Off_1;
  int ck_12_2;
  int ck_12_1;
  int out_false;
  int out_true;
  int ck;
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
  int air_state;
  int failed;
  failed_recovered_1 = failed_recovered;
  c1_1 = c1;
  c2_1 = c2;
  ck_12_1 = self->v_318;
  ck_12_2 = self->v_319;
  if (self->ck_14_1) {
    if (failed_recovered_1) {
      r_St_11_Falha = true;
    } else {
      r_St_11_Falha = self->pnr;
    };
    r = r_St_11_Falha;
    if (failed_recovered_1) {
      s_St_11_Falha_1 = false;
    } else {
      s_St_11_Falha_1 = true;
    };
    s_1_3 = s_St_11_Falha_1;
  } else {
    if (failed_recovered_1) {
      r_St_11_Funcionando = true;
      s_St_11_Funcionando_1 = true;
    } else {
      r_St_11_Funcionando = self->pnr;
      s_St_11_Funcionando_1 = false;
    };
    r = r_St_11_Funcionando;
    s_1_3 = s_St_11_Funcionando_1;
  };
  ck_15_1 = s_1_3;
  if (ck_15_1) {
    failed_1_St_11_Falha = true;
    failed_1 = failed_1_St_11_Falha;
    nr_St_11_Falha = false;
    nr = nr_St_11_Falha;
    ns_St_11_Falha_1 = true;
    ns_1_3 = ns_St_11_Falha_1;
  } else {
    failed_1_St_11_Funcionando = false;
    nr_St_11_Funcionando = false;
    ns_St_11_Funcionando_1 = false;
    failed_1 = failed_1_St_11_Funcionando;
    nr = nr_St_11_Funcionando;
    ns_1_3 = ns_St_11_Funcionando_1;
  };
  failed = failed_1;
  ck = failed;
  if (ck_12_1) {
    ck_12_2_1 = ck_12_2;
    if (ck_12_2_1) {
      v_61 = !(c2_1);
      if (v_61) {
        v_63 = true;
        v_62_1 = false;
        v_62_2 = false;
      } else {
        v_63 = self->pnr_1;
        v_62_1 = true;
        v_62_2 = true;
      };
      v = !(c1_1);
      if (v) {
        r_1_St_12_Max = true;
      } else {
        r_1_St_12_Max = v_63;
      };
      v_324 = r_1_St_12_Max;
      if (v) {
        s_1_St_12_Max_1 = true;
      } else {
        s_1_St_12_Max_1 = v_62_1;
      };
      v_320 = s_1_St_12_Max_1;
      if (v) {
        s_1_St_12_Max_2 = false;
      } else {
        s_1_St_12_Max_2 = v_62_2;
      };
      v_321 = s_1_St_12_Max_2;
    } else {
      v_65 = !(c2_1);
      if (v_65) {
        v_67 = true;
        v_66_1 = true;
        v_66_2 = true;
      } else {
        v_67 = self->pnr_1;
        v_66_1 = true;
        v_66_2 = false;
      };
      v_64 = !(c1_1);
      if (v_64) {
        r_1_St_12_Min = true;
        s_1_St_12_Min_1 = false;
        s_1_St_12_Min_2 = false;
      } else {
        r_1_St_12_Min = v_67;
        s_1_St_12_Min_1 = v_66_1;
        s_1_St_12_Min_2 = v_66_2;
      };
      v_324 = r_1_St_12_Min;
      v_320 = s_1_St_12_Min_1;
      v_321 = s_1_St_12_Min_2;
    };
    s_1_1 = v_320;
    s_1_2 = v_321;
    r_1 = v_324;
  } else {
    ck_12_2_0 = ck_12_2;
    if (ck_12_2_0) {
      v_325 = true;
      v_322 = true;
      v_323 = true;
    } else {
      v_68 = !(c2_1);
      if (v_68) {
        v_70 = true;
      } else {
        v_70 = self->pnr_1;
      };
      if (c1_1) {
        r_1_St_12_Off = true;
      } else {
        r_1_St_12_Off = v_70;
      };
      v_325 = r_1_St_12_Off;
      if (v_68) {
        v_69_1 = true;
      } else {
        v_69_1 = false;
      };
      if (c1_1) {
        s_1_St_12_Off_1 = true;
      } else {
        s_1_St_12_Off_1 = v_69_1;
      };
      v_322 = s_1_St_12_Off_1;
      if (v_68) {
        v_69_2 = true;
      } else {
        v_69_2 = false;
      };
      if (c1_1) {
        s_1_St_12_Off_2 = false;
      } else {
        s_1_St_12_Off_2 = v_69_2;
      };
      v_323 = s_1_St_12_Off_2;
      if (v_69_1) {
        v_69_2_1 = v_69_2;
      } else {
        v_69_2_0 = v_69_2;
      };
      if (s_1_St_12_Off_1) {
        s_1_St_12_Off_2_1 = s_1_St_12_Off_2;
      } else {
        s_1_St_12_Off_2_0 = s_1_St_12_Off_2;
      };
    };
    s_1_1 = v_322;
    s_1_2 = v_323;
    r_1 = v_325;
  };
  ck_13_1 = s_1_1;
  ck_13_2 = s_1_2;
  if (ck_13_1) {
    ck_13_2_1 = ck_13_2;
    if (ck_13_2_1) {
      air_state_1_St_12_Max = 2;
      v_310 = air_state_1_St_12_Max;
      nr_1_St_12_Max = false;
      v_316 = nr_1_St_12_Max;
      ns_1_St_12_Max_1 = true;
      v_312 = ns_1_St_12_Max_1;
      ns_1_St_12_Max_2 = true;
      v_313 = ns_1_St_12_Max_2;
    } else {
      air_state_1_St_12_Min = 1;
      nr_1_St_12_Min = false;
      ns_1_St_12_Min_1 = true;
      ns_1_St_12_Min_2 = false;
      v_310 = air_state_1_St_12_Min;
      v_316 = nr_1_St_12_Min;
      v_312 = ns_1_St_12_Min_1;
      v_313 = ns_1_St_12_Min_2;
    };
    air_state_1 = v_310;
    ns_1_1 = v_312;
    ns_1_2 = v_313;
    nr_1 = v_316;
  } else {
    ck_13_2_0 = ck_13_2;
    if (ck_13_2_0) {
      v_311 = 0;
      v_317 = true;
      v_314 = true;
      v_315 = true;
    } else {
      air_state_1_St_12_Off = 0;
      v_311 = air_state_1_St_12_Off;
      nr_1_St_12_Off = false;
      v_317 = nr_1_St_12_Off;
      ns_1_St_12_Off_1 = false;
      v_314 = ns_1_St_12_Off_1;
      ns_1_St_12_Off_2 = false;
      v_315 = ns_1_St_12_Off_2;
      if (ns_1_St_12_Off_1) {
        ns_1_St_12_Off_2_1 = ns_1_St_12_Off_2;
      } else {
        ns_1_St_12_Off_2_0 = ns_1_St_12_Off_2;
      };
    };
    air_state_1 = v_311;
    ns_1_1 = v_314;
    ns_1_2 = v_315;
    nr_1 = v_317;
  };
  air_state = air_state_1;
  if (ck) {
    out_true = (air_state+3);
    _out->out = out_true;
  } else {
    out_false = air_state;
    _out->out = out_false;
  };
  if (ns_1_1) {
    ns_1_2_1 = ns_1_2;
  } else {
    ns_1_2_0 = ns_1_2;
  };
  if (ck_13_1) {
    if (ck_13_2_1) {
      if (ns_1_St_12_Max_1) {
        ns_1_St_12_Max_2_1 = ns_1_St_12_Max_2;
      } else {
        ns_1_St_12_Max_2_0 = ns_1_St_12_Max_2;
      };
    } else {
      if (ns_1_St_12_Min_1) {
        ns_1_St_12_Min_2_1 = ns_1_St_12_Min_2;
      } else {
        ns_1_St_12_Min_2_0 = ns_1_St_12_Min_2;
      };
    };
  };
  if (s_1_1) {
    s_1_2_1 = s_1_2;
  } else {
    s_1_2_0 = s_1_2;
  };
  if (ck_12_1) {
    if (ck_12_2_1) {
      if (v_62_1) {
        v_62_2_1 = v_62_2;
      } else {
        v_62_2_0 = v_62_2;
      };
      if (s_1_St_12_Max_1) {
        s_1_St_12_Max_2_1 = s_1_St_12_Max_2;
      } else {
        s_1_St_12_Max_2_0 = s_1_St_12_Max_2;
      };
    } else {
      if (v_66_1) {
        v_66_2_1 = v_66_2;
      } else {
        v_66_2_0 = v_66_2;
      };
      if (s_1_St_12_Min_1) {
        s_1_St_12_Min_2_1 = s_1_St_12_Min_2;
      } else {
        s_1_St_12_Min_2_0 = s_1_St_12_Min_2;
      };
    };
  };
  self->pnr = nr;
  self->ck_14_1 = ns_1_3;
  self->pnr_1 = nr_1;
  self->v_318 = ns_1_1;
  self->v_319 = ns_1_2;;
}

void System__lamp_fail_reset(System__lamp_fail_mem* self) {
  self->pnr = false;
  self->ck_18_1 = false;
  self->pnr_2 = false;
  self->ck_16_1 = true;
}

void System__lamp_fail_step(int sw, int c1, int c2, int failed_recovered,
                            System__lamp_fail_out* _out,
                            System__lamp_fail_mem* self) {
  
  int nr_St_13_Falha;
  int ns_St_13_Falha_1;
  int failed_2_St_13_Falha;
  int nr_St_13_Funcionando;
  int ns_St_13_Funcionando_1;
  int failed_2_St_13_Funcionando;
  int ck_19_1;
  int r_St_13_Falha;
  int s_St_13_Falha_1;
  int r_St_13_Funcionando;
  int s_St_13_Funcionando_1;
  int nr_2_St_14_On;
  int ns_2_St_14_On_1;
  int lamp_on_St_14_On;
  int nr_2_St_14_Off;
  int ns_2_St_14_Off_1;
  int lamp_on_St_14_Off;
  int ck_17_1;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int v;
  int r_2_St_14_On;
  int s_2_St_14_On_1;
  int r_2_St_14_Off;
  int s_2_St_14_Off_1;
  int out_false;
  int out_true;
  int ck;
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
  int lamp;
  int failed;
  failed_recovered_2 = failed_recovered;
  c1_2 = sw;
  c2_2 = c1;
  sw_1 = c2;
  if (self->ck_18_1) {
    if (failed_recovered_2) {
      r_St_13_Falha = true;
    } else {
      r_St_13_Falha = self->pnr;
    };
    r = r_St_13_Falha;
    if (failed_recovered_2) {
      s_St_13_Falha_1 = false;
    } else {
      s_St_13_Falha_1 = true;
    };
    s_1 = s_St_13_Falha_1;
  } else {
    if (failed_recovered_2) {
      r_St_13_Funcionando = true;
      s_St_13_Funcionando_1 = true;
    } else {
      r_St_13_Funcionando = self->pnr;
      s_St_13_Funcionando_1 = false;
    };
    r = r_St_13_Funcionando;
    s_1 = s_St_13_Funcionando_1;
  };
  ck_19_1 = s_1;
  if (ck_19_1) {
    failed_2_St_13_Falha = true;
    failed_2 = failed_2_St_13_Falha;
    nr_St_13_Falha = false;
    nr = nr_St_13_Falha;
    ns_St_13_Falha_1 = true;
    ns_1 = ns_St_13_Falha_1;
  } else {
    failed_2_St_13_Funcionando = false;
    nr_St_13_Funcionando = false;
    ns_St_13_Funcionando_1 = false;
    failed_2 = failed_2_St_13_Funcionando;
    nr = nr_St_13_Funcionando;
    ns_1 = ns_St_13_Funcionando_1;
  };
  failed = failed_2;
  ck = failed;
  if (self->ck_16_1) {
    v_74 = !(c2_2);
    v_73 = (c1_2&&sw_1);
    v_75 = (v_73||v_74);
    if (v_75) {
      r_2_St_14_Off = true;
      s_2_St_14_Off_1 = false;
    } else {
      r_2_St_14_Off = self->pnr_2;
      s_2_St_14_Off_1 = true;
    };
    r_2 = r_2_St_14_Off;
    s_2_1 = s_2_St_14_Off_1;
  } else {
    v_71 = !(c2_2);
    v = (c1_2&&sw_1);
    v_72 = (v||v_71);
    if (v_72) {
      r_2_St_14_On = true;
    } else {
      r_2_St_14_On = self->pnr_2;
    };
    r_2 = r_2_St_14_On;
    if (v_72) {
      s_2_St_14_On_1 = true;
    } else {
      s_2_St_14_On_1 = false;
    };
    s_2_1 = s_2_St_14_On_1;
  };
  ck_17_1 = s_2_1;
  if (ck_17_1) {
    lamp_on_St_14_Off = 0;
    nr_2_St_14_Off = false;
    ns_2_St_14_Off_1 = true;
    lamp_on = lamp_on_St_14_Off;
    nr_2 = nr_2_St_14_Off;
    ns_2_1 = ns_2_St_14_Off_1;
  } else {
    lamp_on_St_14_On = 1;
    lamp_on = lamp_on_St_14_On;
    nr_2_St_14_On = false;
    nr_2 = nr_2_St_14_On;
    ns_2_St_14_On_1 = false;
    ns_2_1 = ns_2_St_14_On_1;
  };
  lamp = lamp_on;
  if (ck) {
    out_true = (lamp+2);
    _out->out = out_true;
  } else {
    out_false = lamp;
    _out->out = out_false;
  };
  self->pnr = nr;
  self->ck_18_1 = ns_1;
  self->pnr_2 = nr_2;
  self->ck_16_1 = ns_2_1;;
}

void System__blind_fail_reset(System__blind_fail_mem* self) {
  self->pnr = false;
  self->ck_21_1 = false;
  self->pnr_3 = false;
  self->ck_1 = true;
}

void System__blind_fail_step(int sw, int c1, int c2, int failed_recovered,
                             System__blind_fail_out* _out,
                             System__blind_fail_mem* self) {
  
  int nr_St_15_Falha;
  int ns_St_15_Falha_1;
  int failed_3_St_15_Falha;
  int nr_St_15_Funcionando;
  int ns_St_15_Funcionando_1;
  int failed_3_St_15_Funcionando;
  int ck_22_1;
  int r_St_15_Falha;
  int s_St_15_Falha_1;
  int r_St_15_Funcionando;
  int s_St_15_Funcionando_1;
  int nr_3_St_16_Up;
  int ns_3_St_16_Up_1;
  int blind_open_St_16_Up;
  int nr_3_St_16_Down;
  int ns_3_St_16_Down_1;
  int blind_open_St_16_Down;
  int ck_20_1;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v;
  int r_3_St_16_Up;
  int s_3_St_16_Up_1;
  int r_3_St_16_Down;
  int s_3_St_16_Down_1;
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
  if (self->ck_21_1) {
    if (failed_recovered_3) {
      r_St_15_Falha = true;
    } else {
      r_St_15_Falha = self->pnr;
    };
    r = r_St_15_Falha;
    if (failed_recovered_3) {
      s_St_15_Falha_1 = false;
    } else {
      s_St_15_Falha_1 = true;
    };
    s_1 = s_St_15_Falha_1;
  } else {
    if (failed_recovered_3) {
      r_St_15_Funcionando = true;
      s_St_15_Funcionando_1 = true;
    } else {
      r_St_15_Funcionando = self->pnr;
      s_St_15_Funcionando_1 = false;
    };
    r = r_St_15_Funcionando;
    s_1 = s_St_15_Funcionando_1;
  };
  ck_22_1 = s_1;
  if (ck_22_1) {
    failed_3_St_15_Falha = true;
    failed_3 = failed_3_St_15_Falha;
    nr_St_15_Falha = false;
    nr = nr_St_15_Falha;
    ns_St_15_Falha_1 = true;
    ns_1 = ns_St_15_Falha_1;
  } else {
    failed_3_St_15_Funcionando = false;
    nr_St_15_Funcionando = false;
    ns_St_15_Funcionando_1 = false;
    failed_3 = failed_3_St_15_Funcionando;
    nr = nr_St_15_Funcionando;
    ns_1 = ns_St_15_Funcionando_1;
  };
  _out->failed = failed_3;
  if (self->ck_1) {
    v_79 = !(c2_3);
    v_78 = (c1_3&&sw_2);
    v_80 = (v_78||v_79);
    if (v_80) {
      r_3_St_16_Down = true;
      s_3_St_16_Down_1 = false;
    } else {
      r_3_St_16_Down = self->pnr_3;
      s_3_St_16_Down_1 = true;
    };
    r_3 = r_3_St_16_Down;
    s_3_1 = s_3_St_16_Down_1;
  } else {
    v_76 = !(c2_3);
    v = (c1_3&&sw_2);
    v_77 = (v||v_76);
    if (v_77) {
      r_3_St_16_Up = true;
    } else {
      r_3_St_16_Up = self->pnr_3;
    };
    r_3 = r_3_St_16_Up;
    if (v_77) {
      s_3_St_16_Up_1 = true;
    } else {
      s_3_St_16_Up_1 = false;
    };
    s_3_1 = s_3_St_16_Up_1;
  };
  ck_20_1 = s_3_1;
  if (ck_20_1) {
    blind_open_St_16_Down = false;
    nr_3_St_16_Down = false;
    ns_3_St_16_Down_1 = true;
    blind_open = blind_open_St_16_Down;
    nr_3 = nr_3_St_16_Down;
    ns_3_1 = ns_3_St_16_Down_1;
  } else {
    blind_open_St_16_Up = true;
    blind_open = blind_open_St_16_Up;
    nr_3_St_16_Up = false;
    nr_3 = nr_3_St_16_Up;
    ns_3_St_16_Up_1 = false;
    ns_3_1 = ns_3_St_16_Up_1;
  };
  _out->blind = blind_open;
  self->pnr = nr;
  self->ck_21_1 = ns_1;
  self->pnr_3 = nr_3;
  self->ck_1 = ns_3_1;;
}

void System__controller_reset(System__controller_mem* self) {
  self->pnr = false;
  self->ck_48_1 = false;
  self->pnr_4 = false;
  self->ck_46_1 = true;
  self->pnr_5 = false;
  self->ck_44_1 = false;
  self->pnr_6 = false;
  self->ck_42_1 = true;
  self->pnr_7 = false;
  self->ck_39_1 = false;
  self->pnr_8 = false;
  self->v_334 = false;
  self->v_335 = false;
  self->pnr_9 = false;
  self->ck_34_1 = true;
  self->pnr_10 = false;
  self->ck_32_1 = true;
  self->pnr_11 = false;
  self->ck_30_1 = true;
  self->pnr_12 = false;
  self->ck_28_1 = true;
  self->pnr_13 = false;
  self->ck_26_1 = true;
  self->pnr_14 = false;
  self->ck_24_1 = true;
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
  
  int nr_St_17_Falha;
  int ns_St_17_Falha_1;
  int failed_3_St_17_Falha;
  int nr_St_17_Funcionando;
  int ns_St_17_Funcionando_1;
  int failed_3_St_17_Funcionando;
  int ck_49_1;
  int r_St_17_Falha;
  int s_St_17_Falha_1;
  int r_St_17_Funcionando;
  int s_St_17_Funcionando_1;
  int nr_4_St_18_Up;
  int ns_4_St_18_Up_1;
  int blind_open_St_18_Up;
  int nr_4_St_18_Down;
  int ns_4_St_18_Down_1;
  int blind_open_St_18_Down;
  int ck_47_1;
  int v_235;
  int v_234;
  int v_233;
  int v_232;
  int v_231;
  int v_230;
  int r_4_St_18_Up;
  int s_4_St_18_Up_1;
  int r_4_St_18_Down;
  int s_4_St_18_Down_1;
  int nr_5_St_19_Falha;
  int ns_5_St_19_Falha_1;
  int failed_2_St_19_Falha;
  int nr_5_St_19_Funcionando;
  int ns_5_St_19_Funcionando_1;
  int failed_2_St_19_Funcionando;
  int ck_45_1;
  int r_5_St_19_Falha;
  int s_5_St_19_Falha_1;
  int r_5_St_19_Funcionando;
  int s_5_St_19_Funcionando_1;
  int nr_6_St_20_On;
  int ns_6_St_20_On_1;
  int lamp_on_St_20_On;
  int nr_6_St_20_Off;
  int ns_6_St_20_Off_1;
  int lamp_on_St_20_Off;
  int ck_43_1;
  int v_229;
  int v_228;
  int v_227;
  int v_226;
  int v_225;
  int v_224;
  int r_6_St_20_On;
  int s_6_St_20_On_1;
  int r_6_St_20_Off;
  int s_6_St_20_Off_1;
  int out_1_false;
  int out_1_true;
  int ck_41;
  int nr_7_St_21_Falha;
  int ns_7_St_21_Falha_1;
  int failed_1_St_21_Falha;
  int nr_7_St_21_Funcionando;
  int ns_7_St_21_Funcionando_1;
  int failed_1_St_21_Funcionando;
  int ck_40_1;
  int r_7_St_21_Falha;
  int s_7_St_21_Falha_1;
  int r_7_St_21_Funcionando;
  int s_7_St_21_Funcionando_1;
  int v_333;
  int v_332;
  int v_331;
  int v_330;
  int v_329;
  int v_328;
  int v_327;
  int v_326;
  int ns_8_St_22_Max_2_0;
  int ns_8_St_22_Max_2_1;
  int ns_8_St_22_Min_2_0;
  int ns_8_St_22_Min_2_1;
  int ns_8_St_22_Off_2_0;
  int ns_8_St_22_Off_2_1;
  int ck_38_2_0;
  int ck_38_2_1;
  int nr_8_St_22_Max;
  int ns_8_St_22_Max_2;
  int ns_8_St_22_Max_1;
  int air_state_1_St_22_Max;
  int nr_8_St_22_Min;
  int ns_8_St_22_Min_2;
  int ns_8_St_22_Min_1;
  int air_state_1_St_22_Min;
  int nr_8_St_22_Off;
  int ns_8_St_22_Off_2;
  int ns_8_St_22_Off_1;
  int air_state_1_St_22_Off;
  int ck_38_2;
  int ck_38_1;
  int v_222_2_0;
  int v_222_2_1;
  int v_223;
  int v_222_2;
  int v_222_1;
  int v_221;
  int v_219_2_0;
  int v_219_2_1;
  int v_220;
  int v_219_2;
  int v_219_1;
  int v_218;
  int v_217;
  int v_215_2_0;
  int v_215_2_1;
  int v_216;
  int v_215_2;
  int v_215_1;
  int v_214;
  int v_213;
  int v_341;
  int v_340;
  int v_339;
  int v_338;
  int v_337;
  int v_336;
  int s_8_St_22_Max_2_0;
  int s_8_St_22_Max_2_1;
  int s_8_St_22_Min_2_0;
  int s_8_St_22_Min_2_1;
  int s_8_St_22_Off_2_0;
  int s_8_St_22_Off_2_1;
  int ck_37_2_0;
  int ck_37_2_1;
  int r_8_St_22_Max;
  int s_8_St_22_Max_2;
  int s_8_St_22_Max_1;
  int r_8_St_22_Min;
  int s_8_St_22_Min_2;
  int s_8_St_22_Min_1;
  int r_8_St_22_Off;
  int s_8_St_22_Off_2;
  int s_8_St_22_Off_1;
  int ck_37_2;
  int ck_37_1;
  int out_false;
  int out_true;
  int ck_36;
  int nr_9_St_23_Open;
  int ns_9_St_23_Open_1;
  int window_open_1_St_23_Open;
  int nr_9_St_23_Closed;
  int ns_9_St_23_Closed_1;
  int window_open_1_St_23_Closed;
  int ck_35_1;
  int v_212;
  int r_9_St_23_Open;
  int s_9_St_23_Open_1;
  int r_9_St_23_Closed;
  int s_9_St_23_Closed_1;
  int nr_10_St_24_On;
  int ns_10_St_24_On_1;
  int computer_on_St_24_On;
  int nr_10_St_24_Off;
  int ns_10_St_24_Off_1;
  int computer_on_St_24_Off;
  int ck_33_1;
  int v_211;
  int r_10_St_24_On;
  int s_10_St_24_On_1;
  int r_10_St_24_Off;
  int s_10_St_24_Off_1;
  int nr_11_St_25_Present;
  int ns_11_St_25_Present_1;
  int presence_1_St_25_Present;
  int nr_11_St_25_Not_Present;
  int ns_11_St_25_Not_Present_1;
  int presence_1_St_25_Not_Present;
  int ck_31_1;
  int r_11_St_25_Present;
  int s_11_St_25_Present_1;
  int r_11_St_25_Not_Present;
  int s_11_St_25_Not_Present_1;
  int nr_12_St_26_Present;
  int ns_12_St_26_Present_1;
  int presence_St_26_Present;
  int nr_12_St_26_Not_Present;
  int ns_12_St_26_Not_Present_1;
  int presence_St_26_Not_Present;
  int ck_29_1;
  int r_12_St_26_Present;
  int s_12_St_26_Present_1;
  int r_12_St_26_Not_Present;
  int s_12_St_26_Not_Present_1;
  int nr_13_St_27_Open;
  int ns_13_St_27_Open_1;
  int closet_open_1_St_27_Open;
  int nr_13_St_27_Locked;
  int ns_13_St_27_Locked_1;
  int closet_open_1_St_27_Locked;
  int ck_27_1;
  int v_210;
  int r_13_St_27_Open;
  int s_13_St_27_Open_1;
  int r_13_St_27_Locked;
  int s_13_St_27_Locked_1;
  int nr_14_St_28_Open;
  int ns_14_St_28_Open_1;
  int door_open_1_St_28_Open;
  int nr_14_St_28_Closed;
  int ns_14_St_28_Closed_1;
  int door_open_1_St_28_Closed;
  int ck_25_1;
  int v_209;
  int v_208;
  int v_207;
  int v_206;
  int v_205;
  int v_204;
  int r_14_St_28_Open;
  int s_14_St_28_Open_1;
  int r_14_St_28_Closed;
  int s_14_St_28_Closed_1;
  int nr_15_St_29_Noite;
  int ns_15_St_29_Noite_1;
  int night_1_St_29_Noite;
  int nr_15_St_29_Dia;
  int ns_15_St_29_Dia_1;
  int night_1_St_29_Dia;
  int ck_23_1;
  int r_15_St_29_Noite;
  int s_15_St_29_Noite_1;
  int r_15_St_29_Dia;
  int s_15_St_29_Dia_1;
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
  int c1_6;
  int c2_6;
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
  int c1_5;
  int c2_5;
  int failed_recovered_4;
  int failed_recovered_2;
  int failed_2;
  int c1_2;
  int c2_2;
  int sw_1;
  int lamp_on;
  int lamp;
  int failed_4;
  int out_1;
  int c1_4;
  int c2_4;
  int failed_recovered;
  int failed_recovered_1;
  int failed_1;
  int c1_1;
  int c2_1;
  int air_state_1;
  int air_state;
  int failed;
  int out;
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
  int push;
  int c1;
  int c2;
  int door_open_1;
  int change;
  int night_1;
  int rule9;
  int rule8;
  int rule7;
  int rule6;
  int rule5_5;
  int rule5;
  int rule4;
  int rule3;
  int rule2_5;
  int rule2;
  int rule1_5;
  int rule1;
  int v;
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
  int v_150;
  int v_151;
  int v_152;
  int v_153;
  int v_154;
  int v_155;
  int v_156;
  int v_157;
  int v_158;
  int v_159;
  int v_160;
  int v_161;
  int v_162;
  int v_163;
  int v_164;
  int v_165;
  int v_166;
  int v_167;
  int v_168;
  int v_169;
  int v_170;
  int v_171;
  int v_172;
  int v_173;
  int v_174;
  int v_175;
  int v_176;
  int v_177;
  int v_178;
  int v_179;
  int v_180;
  int v_181;
  int v_182;
  int v_183;
  int v_184;
  int v_185;
  int v_186;
  int v_187;
  int v_188;
  int v_189;
  int v_190;
  int v_191;
  int v_192;
  int v_193;
  int v_194;
  int v_195;
  int v_196;
  int v_197;
  int v_198;
  int v_199;
  int v_200;
  int v_201;
  int v_202;
  int v_203;
  int c_blind_2;
  int c_blind_1;
  int c_light_2;
  int c_light_1;
  int c_closet;
  int c_air_2;
  int c_air_1;
  int c_window;
  int c_pc;
  int c_door_2;
  int c_door_1;
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
  ck_37_1 = self->v_334;
  ck_37_2 = self->v_335;
  arrived_1 = cleaner;
  arrived = worker;
  push = false;
  change = change_shift;
  Controller_controller__controller_controller_step(change_shift, worker,
                                                    cleaner,
                                                    air_failed_recovered,
                                                    light_switch,
                                                    light_failed_recovered,
                                                    blind_switch,
                                                    blind_failed_recovered,
                                                    self->ck_1, self->pnr_15,
                                                    self->ck_24_1,
                                                    self->pnr_14,
                                                    self->ck_26_1,
                                                    self->pnr_13,
                                                    self->ck_28_1,
                                                    self->pnr_12,
                                                    self->ck_30_1,
                                                    self->pnr_11,
                                                    self->ck_32_1,
                                                    self->pnr_10,
                                                    self->ck_34_1,
                                                    self->pnr_9, self->v_335,
                                                    self->v_334, self->pnr_8,
                                                    self->ck_39_1,
                                                    self->pnr_7,
                                                    self->ck_42_1,
                                                    self->pnr_6,
                                                    self->ck_44_1,
                                                    self->pnr_5,
                                                    self->ck_46_1,
                                                    self->pnr_4,
                                                    self->ck_48_1, self->pnr,
                                                    true, true, true, true,
                                                    true, true, true, true,
                                                    true, true, true,
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
  c_door_2 = Controller_controller__controller_controller_out_st.controller_c_door_2;
  c_door_1 = Controller_controller__controller_controller_out_st.controller_c_door_1;
  c1_6 = c_blind_1;
  c2_3 = c1_6;
  c2_6 = c_blind_2;
  sw_2 = c2_6;
  c1_5 = c_light_1;
  c2_2 = c1_5;
  c2_5 = c_light_2;
  sw_1 = c2_5;
  c1_4 = c_air_1;
  c1_1 = c1_4;
  c2_4 = c_air_2;
  c2_1 = c2_4;
  c_2 = c_window;
  c_1 = c_pc;
  c = c_closet;
  c1 = c_door_1;
  c2 = c_door_2;
  if (self->ck_48_1) {
    if (failed_recovered_3) {
      r_St_17_Falha = true;
    } else {
      r_St_17_Falha = self->pnr;
    };
    r = r_St_17_Falha;
    if (failed_recovered_3) {
      s_St_17_Falha_1 = false;
    } else {
      s_St_17_Falha_1 = true;
    };
    s_1 = s_St_17_Falha_1;
  } else {
    if (failed_recovered_3) {
      r_St_17_Funcionando = true;
      s_St_17_Funcionando_1 = true;
    } else {
      r_St_17_Funcionando = self->pnr;
      s_St_17_Funcionando_1 = false;
    };
    r = r_St_17_Funcionando;
    s_1 = s_St_17_Funcionando_1;
  };
  ck_49_1 = s_1;
  if (ck_49_1) {
    failed_3_St_17_Falha = true;
    failed_3 = failed_3_St_17_Falha;
    nr_St_17_Falha = false;
    nr = nr_St_17_Falha;
    ns_St_17_Falha_1 = true;
    ns_1 = ns_St_17_Falha_1;
  } else {
    failed_3_St_17_Funcionando = false;
    nr_St_17_Funcionando = false;
    ns_St_17_Funcionando_1 = false;
    failed_3 = failed_3_St_17_Funcionando;
    nr = nr_St_17_Funcionando;
    ns_1 = ns_St_17_Funcionando_1;
  };
  failed_5 = failed_3;
  _out->blind_failed = failed_5;
  if (self->ck_46_1) {
    v_234 = !(c2_3);
    v_233 = (c1_3&&sw_2);
    v_235 = (v_233||v_234);
    if (v_235) {
      r_4_St_18_Down = true;
      s_4_St_18_Down_1 = false;
    } else {
      r_4_St_18_Down = self->pnr_4;
      s_4_St_18_Down_1 = true;
    };
    r_4 = r_4_St_18_Down;
    s_4_1 = s_4_St_18_Down_1;
  } else {
    v_231 = !(c2_3);
    v_230 = (c1_3&&sw_2);
    v_232 = (v_230||v_231);
    if (v_232) {
      r_4_St_18_Up = true;
    } else {
      r_4_St_18_Up = self->pnr_4;
    };
    r_4 = r_4_St_18_Up;
    if (v_232) {
      s_4_St_18_Up_1 = true;
    } else {
      s_4_St_18_Up_1 = false;
    };
    s_4_1 = s_4_St_18_Up_1;
  };
  ck_47_1 = s_4_1;
  if (ck_47_1) {
    blind_open_St_18_Down = false;
    nr_4_St_18_Down = false;
    ns_4_St_18_Down_1 = true;
    blind_open = blind_open_St_18_Down;
    nr_4 = nr_4_St_18_Down;
    ns_4_1 = ns_4_St_18_Down_1;
  } else {
    blind_open_St_18_Up = true;
    blind_open = blind_open_St_18_Up;
    nr_4_St_18_Up = false;
    nr_4 = nr_4_St_18_Up;
    ns_4_St_18_Up_1 = false;
    ns_4_1 = ns_4_St_18_Up_1;
  };
  blind = blind_open;
  _out->blind_up = blind;
  v_141 = !(_out->blind_up);
  v_154 = !(_out->blind_up);
  if (self->ck_44_1) {
    if (failed_recovered_2) {
      r_5_St_19_Falha = true;
    } else {
      r_5_St_19_Falha = self->pnr_5;
    };
    r_5 = r_5_St_19_Falha;
    if (failed_recovered_2) {
      s_5_St_19_Falha_1 = false;
    } else {
      s_5_St_19_Falha_1 = true;
    };
    s_5_1 = s_5_St_19_Falha_1;
  } else {
    if (failed_recovered_2) {
      r_5_St_19_Funcionando = true;
      s_5_St_19_Funcionando_1 = true;
    } else {
      r_5_St_19_Funcionando = self->pnr_5;
      s_5_St_19_Funcionando_1 = false;
    };
    r_5 = r_5_St_19_Funcionando;
    s_5_1 = s_5_St_19_Funcionando_1;
  };
  ck_45_1 = s_5_1;
  if (ck_45_1) {
    failed_2_St_19_Falha = true;
    failed_2 = failed_2_St_19_Falha;
    nr_5_St_19_Falha = false;
    nr_5 = nr_5_St_19_Falha;
    ns_5_St_19_Falha_1 = true;
    ns_5_1 = ns_5_St_19_Falha_1;
  } else {
    failed_2_St_19_Funcionando = false;
    nr_5_St_19_Funcionando = false;
    ns_5_St_19_Funcionando_1 = false;
    failed_2 = failed_2_St_19_Funcionando;
    nr_5 = nr_5_St_19_Funcionando;
    ns_5_1 = ns_5_St_19_Funcionando_1;
  };
  failed_4 = failed_2;
  ck_41 = failed_4;
  if (self->ck_42_1) {
    v_228 = !(c2_2);
    v_227 = (c1_2&&sw_1);
    v_229 = (v_227||v_228);
    if (v_229) {
      r_6_St_20_Off = true;
      s_6_St_20_Off_1 = false;
    } else {
      r_6_St_20_Off = self->pnr_6;
      s_6_St_20_Off_1 = true;
    };
    r_6 = r_6_St_20_Off;
    s_6_1 = s_6_St_20_Off_1;
  } else {
    v_225 = !(c2_2);
    v_224 = (c1_2&&sw_1);
    v_226 = (v_224||v_225);
    if (v_226) {
      r_6_St_20_On = true;
    } else {
      r_6_St_20_On = self->pnr_6;
    };
    r_6 = r_6_St_20_On;
    if (v_226) {
      s_6_St_20_On_1 = true;
    } else {
      s_6_St_20_On_1 = false;
    };
    s_6_1 = s_6_St_20_On_1;
  };
  ck_43_1 = s_6_1;
  if (ck_43_1) {
    lamp_on_St_20_Off = 0;
    nr_6_St_20_Off = false;
    ns_6_St_20_Off_1 = true;
    lamp_on = lamp_on_St_20_Off;
    nr_6 = nr_6_St_20_Off;
    ns_6_1 = ns_6_St_20_Off_1;
  } else {
    lamp_on_St_20_On = 1;
    lamp_on = lamp_on_St_20_On;
    nr_6_St_20_On = false;
    nr_6 = nr_6_St_20_On;
    ns_6_St_20_On_1 = false;
    ns_6_1 = ns_6_St_20_On_1;
  };
  lamp = lamp_on;
  if (ck_41) {
    out_1_true = (lamp+2);
    out_1 = out_1_true;
  } else {
    out_1_false = lamp;
    out_1 = out_1_false;
  };
  _out->light_out = out_1;
  v_84 = (_out->light_out==1);
  v_85 = (v_84||_out->blind_up);
  v_97 = (_out->light_out<2);
  v_100 = (_out->light_out==1);
  v_110 = (_out->light_out==1);
  v_111 = !(v_110);
  v_121 = (_out->light_out==1);
  v_138 = (_out->light_out==1);
  v_139 = !(v_138);
  v_151 = (_out->light_out==1);
  v_152 = !(v_151);
  v_158 = (_out->light_out>1);
  v_167 = (_out->light_out>1);
  v_176 = (_out->light_out<2);
  v_185 = (_out->light_out<2);
  v_190 = (_out->light_out==1);
  if (self->ck_39_1) {
    if (failed_recovered_1) {
      r_7_St_21_Falha = true;
    } else {
      r_7_St_21_Falha = self->pnr_7;
    };
    r_7 = r_7_St_21_Falha;
    if (failed_recovered_1) {
      s_7_St_21_Falha_1 = false;
    } else {
      s_7_St_21_Falha_1 = true;
    };
    s_7_1 = s_7_St_21_Falha_1;
  } else {
    if (failed_recovered_1) {
      r_7_St_21_Funcionando = true;
      s_7_St_21_Funcionando_1 = true;
    } else {
      r_7_St_21_Funcionando = self->pnr_7;
      s_7_St_21_Funcionando_1 = false;
    };
    r_7 = r_7_St_21_Funcionando;
    s_7_1 = s_7_St_21_Funcionando_1;
  };
  ck_40_1 = s_7_1;
  if (ck_40_1) {
    failed_1_St_21_Falha = true;
    failed_1 = failed_1_St_21_Falha;
    nr_7_St_21_Falha = false;
    nr_7 = nr_7_St_21_Falha;
    ns_7_St_21_Falha_1 = true;
    ns_7_1 = ns_7_St_21_Falha_1;
  } else {
    failed_1_St_21_Funcionando = false;
    nr_7_St_21_Funcionando = false;
    ns_7_St_21_Funcionando_1 = false;
    failed_1 = failed_1_St_21_Funcionando;
    nr_7 = nr_7_St_21_Funcionando;
    ns_7_1 = ns_7_St_21_Funcionando_1;
  };
  failed = failed_1;
  ck_36 = failed;
  if (ck_37_1) {
    ck_37_2_1 = ck_37_2;
    if (ck_37_2_1) {
      v_214 = !(c2_1);
      if (v_214) {
        v_216 = true;
        v_215_1 = false;
        v_215_2 = false;
      } else {
        v_216 = self->pnr_8;
        v_215_1 = true;
        v_215_2 = true;
      };
      v_213 = !(c1_1);
      if (v_213) {
        r_8_St_22_Max = true;
      } else {
        r_8_St_22_Max = v_216;
      };
      v_340 = r_8_St_22_Max;
      if (v_213) {
        s_8_St_22_Max_1 = true;
      } else {
        s_8_St_22_Max_1 = v_215_1;
      };
      v_336 = s_8_St_22_Max_1;
      if (v_213) {
        s_8_St_22_Max_2 = false;
      } else {
        s_8_St_22_Max_2 = v_215_2;
      };
      v_337 = s_8_St_22_Max_2;
    } else {
      v_218 = !(c2_1);
      if (v_218) {
        v_220 = true;
        v_219_1 = true;
        v_219_2 = true;
      } else {
        v_220 = self->pnr_8;
        v_219_1 = true;
        v_219_2 = false;
      };
      v_217 = !(c1_1);
      if (v_217) {
        r_8_St_22_Min = true;
        s_8_St_22_Min_1 = false;
        s_8_St_22_Min_2 = false;
      } else {
        r_8_St_22_Min = v_220;
        s_8_St_22_Min_1 = v_219_1;
        s_8_St_22_Min_2 = v_219_2;
      };
      v_340 = r_8_St_22_Min;
      v_336 = s_8_St_22_Min_1;
      v_337 = s_8_St_22_Min_2;
    };
    s_8_1 = v_336;
    s_8_2 = v_337;
    r_8 = v_340;
  } else {
    ck_37_2_0 = ck_37_2;
    if (ck_37_2_0) {
      v_341 = true;
      v_338 = true;
      v_339 = true;
    } else {
      v_221 = !(c2_1);
      if (v_221) {
        v_223 = true;
      } else {
        v_223 = self->pnr_8;
      };
      if (c1_1) {
        r_8_St_22_Off = true;
      } else {
        r_8_St_22_Off = v_223;
      };
      v_341 = r_8_St_22_Off;
      if (v_221) {
        v_222_1 = true;
      } else {
        v_222_1 = false;
      };
      if (c1_1) {
        s_8_St_22_Off_1 = true;
      } else {
        s_8_St_22_Off_1 = v_222_1;
      };
      v_338 = s_8_St_22_Off_1;
      if (v_221) {
        v_222_2 = true;
      } else {
        v_222_2 = false;
      };
      if (c1_1) {
        s_8_St_22_Off_2 = false;
      } else {
        s_8_St_22_Off_2 = v_222_2;
      };
      v_339 = s_8_St_22_Off_2;
      if (v_222_1) {
        v_222_2_1 = v_222_2;
      } else {
        v_222_2_0 = v_222_2;
      };
      if (s_8_St_22_Off_1) {
        s_8_St_22_Off_2_1 = s_8_St_22_Off_2;
      } else {
        s_8_St_22_Off_2_0 = s_8_St_22_Off_2;
      };
    };
    s_8_1 = v_338;
    s_8_2 = v_339;
    r_8 = v_341;
  };
  ck_38_1 = s_8_1;
  ck_38_2 = s_8_2;
  if (ck_38_1) {
    ck_38_2_1 = ck_38_2;
    if (ck_38_2_1) {
      air_state_1_St_22_Max = 2;
      v_326 = air_state_1_St_22_Max;
      nr_8_St_22_Max = false;
      v_332 = nr_8_St_22_Max;
      ns_8_St_22_Max_1 = true;
      v_328 = ns_8_St_22_Max_1;
      ns_8_St_22_Max_2 = true;
      v_329 = ns_8_St_22_Max_2;
    } else {
      air_state_1_St_22_Min = 1;
      nr_8_St_22_Min = false;
      ns_8_St_22_Min_1 = true;
      ns_8_St_22_Min_2 = false;
      v_326 = air_state_1_St_22_Min;
      v_332 = nr_8_St_22_Min;
      v_328 = ns_8_St_22_Min_1;
      v_329 = ns_8_St_22_Min_2;
    };
    air_state_1 = v_326;
    ns_8_1 = v_328;
    ns_8_2 = v_329;
    nr_8 = v_332;
  } else {
    ck_38_2_0 = ck_38_2;
    if (ck_38_2_0) {
      v_327 = 0;
      v_333 = true;
      v_330 = true;
      v_331 = true;
    } else {
      air_state_1_St_22_Off = 0;
      v_327 = air_state_1_St_22_Off;
      nr_8_St_22_Off = false;
      v_333 = nr_8_St_22_Off;
      ns_8_St_22_Off_1 = false;
      v_330 = ns_8_St_22_Off_1;
      ns_8_St_22_Off_2 = false;
      v_331 = ns_8_St_22_Off_2;
      if (ns_8_St_22_Off_1) {
        ns_8_St_22_Off_2_1 = ns_8_St_22_Off_2;
      } else {
        ns_8_St_22_Off_2_0 = ns_8_St_22_Off_2;
      };
    };
    air_state_1 = v_327;
    ns_8_1 = v_330;
    ns_8_2 = v_331;
    nr_8 = v_333;
  };
  air_state = air_state_1;
  if (ck_36) {
    out_true = (air_state+3);
    out = out_true;
  } else {
    out_false = air_state;
    out = out_false;
  };
  _out->air_out = out;
  v_89 = (_out->air_out>2);
  v_101 = (_out->air_out<3);
  v_106 = (_out->air_out==1);
  v_115 = (_out->air_out<3);
  v_118 = (_out->air_out==1);
  v_125 = (_out->air_out<3);
  v_128 = (_out->air_out==2);
  v_160 = (_out->air_out>2);
  v_169 = (_out->air_out<3);
  v_172 = (_out->air_out==1);
  v_173 = (_out->blind_up&&v_172);
  v_178 = (_out->air_out>2);
  v_187 = (_out->air_out<3);
  v_191 = (_out->air_out==1);
  v_192 = (v_190&&v_191);
  if (ns_8_1) {
    ns_8_2_1 = ns_8_2;
  } else {
    ns_8_2_0 = ns_8_2;
  };
  if (ck_38_1) {
    if (ck_38_2_1) {
      if (ns_8_St_22_Max_1) {
        ns_8_St_22_Max_2_1 = ns_8_St_22_Max_2;
      } else {
        ns_8_St_22_Max_2_0 = ns_8_St_22_Max_2;
      };
    } else {
      if (ns_8_St_22_Min_1) {
        ns_8_St_22_Min_2_1 = ns_8_St_22_Min_2;
      } else {
        ns_8_St_22_Min_2_0 = ns_8_St_22_Min_2;
      };
    };
  };
  if (s_8_1) {
    s_8_2_1 = s_8_2;
  } else {
    s_8_2_0 = s_8_2;
  };
  if (ck_37_1) {
    if (ck_37_2_1) {
      if (v_215_1) {
        v_215_2_1 = v_215_2;
      } else {
        v_215_2_0 = v_215_2;
      };
      if (s_8_St_22_Max_1) {
        s_8_St_22_Max_2_1 = s_8_St_22_Max_2;
      } else {
        s_8_St_22_Max_2_0 = s_8_St_22_Max_2;
      };
    } else {
      if (v_219_1) {
        v_219_2_1 = v_219_2;
      } else {
        v_219_2_0 = v_219_2;
      };
      if (s_8_St_22_Min_1) {
        s_8_St_22_Min_2_1 = s_8_St_22_Min_2;
      } else {
        s_8_St_22_Min_2_0 = s_8_St_22_Min_2;
      };
    };
  };
  if (self->ck_34_1) {
    v_212 = !(c_2);
    if (v_212) {
      r_9_St_23_Closed = true;
      s_9_St_23_Closed_1 = false;
    } else {
      r_9_St_23_Closed = self->pnr_9;
      s_9_St_23_Closed_1 = true;
    };
    r_9 = r_9_St_23_Closed;
    s_9_1 = s_9_St_23_Closed_1;
  } else {
    if (c_2) {
      r_9_St_23_Open = true;
    } else {
      r_9_St_23_Open = self->pnr_9;
    };
    r_9 = r_9_St_23_Open;
    if (c_2) {
      s_9_St_23_Open_1 = true;
    } else {
      s_9_St_23_Open_1 = false;
    };
    s_9_1 = s_9_St_23_Open_1;
  };
  ck_35_1 = s_9_1;
  if (ck_35_1) {
    window_open_1_St_23_Closed = false;
    nr_9_St_23_Closed = false;
    ns_9_St_23_Closed_1 = true;
    window_open_1 = window_open_1_St_23_Closed;
    nr_9 = nr_9_St_23_Closed;
    ns_9_1 = ns_9_St_23_Closed_1;
  } else {
    window_open_1_St_23_Open = true;
    window_open_1 = window_open_1_St_23_Open;
    nr_9_St_23_Open = false;
    nr_9 = nr_9_St_23_Open;
    ns_9_St_23_Open_1 = false;
    ns_9_1 = ns_9_St_23_Open_1;
  };
  _out->window_open = window_open_1;
  v_92 = (_out->window_open&&_out->blind_up);
  v_113 = !(_out->window_open);
  v_123 = !(_out->window_open);
  v_136 = !(_out->window_open);
  v_149 = !(_out->window_open);
  v_163 = (_out->window_open&&_out->blind_up);
  v_181 = (_out->window_open&&_out->blind_up);
  if (self->ck_32_1) {
    if (c_1) {
      r_10_St_24_Off = true;
      s_10_St_24_Off_1 = false;
    } else {
      r_10_St_24_Off = self->pnr_10;
      s_10_St_24_Off_1 = true;
    };
    r_10 = r_10_St_24_Off;
    s_10_1 = s_10_St_24_Off_1;
  } else {
    v_211 = !(c_1);
    if (v_211) {
      r_10_St_24_On = true;
    } else {
      r_10_St_24_On = self->pnr_10;
    };
    r_10 = r_10_St_24_On;
    if (v_211) {
      s_10_St_24_On_1 = true;
    } else {
      s_10_St_24_On_1 = false;
    };
    s_10_1 = s_10_St_24_On_1;
  };
  ck_33_1 = s_10_1;
  if (ck_33_1) {
    computer_on_St_24_Off = false;
    nr_10_St_24_Off = false;
    ns_10_St_24_Off_1 = true;
    computer_on = computer_on_St_24_Off;
    nr_10 = nr_10_St_24_Off;
    ns_10_1 = ns_10_St_24_Off_1;
  } else {
    computer_on_St_24_On = true;
    computer_on = computer_on_St_24_On;
    nr_10_St_24_On = false;
    nr_10 = nr_10_St_24_On;
    ns_10_St_24_On_1 = false;
    ns_10_1 = ns_10_St_24_On_1;
  };
  _out->pc_on = computer_on;
  v_104 = !(_out->pc_on);
  v_135 = !(_out->pc_on);
  v_137 = (v_135&&v_136);
  v_140 = (v_137&&v_139);
  v_142 = (v_140&&v_141);
  v_148 = !(_out->pc_on);
  v_150 = (v_148&&v_149);
  v_153 = (v_150&&v_152);
  v_155 = (v_153&&v_154);
  if (self->ck_30_1) {
    if (arrived_1) {
      r_11_St_25_Not_Present = true;
      s_11_St_25_Not_Present_1 = false;
    } else {
      r_11_St_25_Not_Present = self->pnr_11;
      s_11_St_25_Not_Present_1 = true;
    };
    r_11 = r_11_St_25_Not_Present;
    s_11_1 = s_11_St_25_Not_Present_1;
  } else {
    if (arrived_1) {
      r_11_St_25_Present = true;
    } else {
      r_11_St_25_Present = self->pnr_11;
    };
    r_11 = r_11_St_25_Present;
    if (arrived_1) {
      s_11_St_25_Present_1 = true;
    } else {
      s_11_St_25_Present_1 = false;
    };
    s_11_1 = s_11_St_25_Present_1;
  };
  ck_31_1 = s_11_1;
  if (ck_31_1) {
    presence_1_St_25_Not_Present = false;
    nr_11_St_25_Not_Present = false;
    ns_11_St_25_Not_Present_1 = true;
    presence_1 = presence_1_St_25_Not_Present;
    nr_11 = nr_11_St_25_Not_Present;
    ns_11_1 = ns_11_St_25_Not_Present_1;
  } else {
    presence_1_St_25_Present = true;
    presence_1 = presence_1_St_25_Present;
    nr_11_St_25_Present = false;
    nr_11 = nr_11_St_25_Present;
    ns_11_St_25_Present_1 = false;
    ns_11_1 = ns_11_St_25_Present_1;
  };
  _out->cleaner_presence = presence_1;
  v_102 = (_out->cleaner_presence&&v_101);
  v_103 = !(v_102);
  v_130 = !(_out->cleaner_presence);
  v_144 = !(_out->cleaner_presence);
  if (self->ck_28_1) {
    if (arrived) {
      r_12_St_26_Not_Present = true;
      s_12_St_26_Not_Present_1 = false;
    } else {
      r_12_St_26_Not_Present = self->pnr_12;
      s_12_St_26_Not_Present_1 = true;
    };
    r_12 = r_12_St_26_Not_Present;
    s_12_1 = s_12_St_26_Not_Present_1;
  } else {
    if (arrived) {
      r_12_St_26_Present = true;
    } else {
      r_12_St_26_Present = self->pnr_12;
    };
    r_12 = r_12_St_26_Present;
    if (arrived) {
      s_12_St_26_Present_1 = true;
    } else {
      s_12_St_26_Present_1 = false;
    };
    s_12_1 = s_12_St_26_Present_1;
  };
  ck_29_1 = s_12_1;
  if (ck_29_1) {
    presence_St_26_Not_Present = false;
    nr_12_St_26_Not_Present = false;
    ns_12_St_26_Not_Present_1 = true;
    presence = presence_St_26_Not_Present;
    nr_12 = nr_12_St_26_Not_Present;
    ns_12_1 = ns_12_St_26_Not_Present_1;
  } else {
    presence_St_26_Present = true;
    presence = presence_St_26_Present;
    nr_12_St_26_Present = false;
    nr_12 = nr_12_St_26_Present;
    ns_12_St_26_Present_1 = false;
    ns_12_1 = ns_12_St_26_Present_1;
  };
  _out->worker_presence = presence;
  v = (_out->worker_presence||_out->cleaner_presence);
  v_86 = (_out->worker_presence||_out->cleaner_presence);
  v_94 = (_out->worker_presence||_out->cleaner_presence);
  v_129 = !(_out->worker_presence);
  v_131 = (v_129&&v_130);
  v_143 = !(_out->worker_presence);
  v_145 = (v_143&&v_144);
  v_156 = (_out->worker_presence||_out->cleaner_presence);
  v_165 = (_out->worker_presence||_out->cleaner_presence);
  v_174 = (_out->worker_presence||_out->cleaner_presence);
  v_183 = (_out->worker_presence||_out->cleaner_presence);
  if (self->ck_26_1) {
    v_210 = !(c);
    if (v_210) {
      r_13_St_27_Locked = true;
      s_13_St_27_Locked_1 = false;
    } else {
      r_13_St_27_Locked = self->pnr_13;
      s_13_St_27_Locked_1 = true;
    };
    r_13 = r_13_St_27_Locked;
    s_13_1 = s_13_St_27_Locked_1;
  } else {
    if (c) {
      r_13_St_27_Open = true;
    } else {
      r_13_St_27_Open = self->pnr_13;
    };
    r_13 = r_13_St_27_Open;
    if (c) {
      s_13_St_27_Open_1 = true;
    } else {
      s_13_St_27_Open_1 = false;
    };
    s_13_1 = s_13_St_27_Open_1;
  };
  ck_27_1 = s_13_1;
  if (ck_27_1) {
    closet_open_1_St_27_Locked = false;
    nr_13_St_27_Locked = false;
    ns_13_St_27_Locked_1 = true;
    closet_open_1 = closet_open_1_St_27_Locked;
    nr_13 = nr_13_St_27_Locked;
    ns_13_1 = ns_13_St_27_Locked_1;
  } else {
    closet_open_1_St_27_Open = true;
    closet_open_1 = closet_open_1_St_27_Open;
    nr_13_St_27_Open = false;
    nr_13 = nr_13_St_27_Open;
    ns_13_St_27_Open_1 = false;
    ns_13_1 = ns_13_St_27_Open_1;
  };
  _out->closet_open = closet_open_1;
  v_105 = (v_104&&_out->closet_open);
  v_107 = (v_105&&v_106);
  rule6 = (v_103||v_107);
  if (self->ck_24_1) {
    v_208 = !(c1);
    v_207 = (push&&c2);
    v_209 = (v_207||v_208);
    if (v_209) {
      r_14_St_28_Closed = true;
      s_14_St_28_Closed_1 = false;
    } else {
      r_14_St_28_Closed = self->pnr_14;
      s_14_St_28_Closed_1 = true;
    };
    r_14 = r_14_St_28_Closed;
    s_14_1 = s_14_St_28_Closed_1;
  } else {
    v_205 = !(c1);
    v_204 = (push&&c2);
    v_206 = (v_204||v_205);
    if (v_206) {
      r_14_St_28_Open = true;
    } else {
      r_14_St_28_Open = self->pnr_14;
    };
    r_14 = r_14_St_28_Open;
    if (v_206) {
      s_14_St_28_Open_1 = true;
    } else {
      s_14_St_28_Open_1 = false;
    };
    s_14_1 = s_14_St_28_Open_1;
  };
  ck_25_1 = s_14_1;
  if (ck_25_1) {
    door_open_1_St_28_Closed = false;
    nr_14_St_28_Closed = false;
    ns_14_St_28_Closed_1 = true;
    door_open_1 = door_open_1_St_28_Closed;
    nr_14 = nr_14_St_28_Closed;
    ns_14_1 = ns_14_St_28_Closed_1;
  } else {
    door_open_1_St_28_Open = true;
    door_open_1 = door_open_1_St_28_Open;
    nr_14_St_28_Open = false;
    nr_14 = nr_14_St_28_Open;
    ns_14_St_28_Open_1 = false;
    ns_14_1 = ns_14_St_28_Open_1;
  };
  _out->door_open = door_open_1;
  v_93 = (v_92&&_out->door_open);
  v_164 = (v_163&&_out->door_open);
  v_182 = (v_181&&_out->door_open);
  if (self->ck_1) {
    if (change) {
      r_15_St_29_Dia = true;
      s_15_St_29_Dia_1 = false;
    } else {
      r_15_St_29_Dia = self->pnr_15;
      s_15_St_29_Dia_1 = true;
    };
    r_15 = r_15_St_29_Dia;
    s_15_1 = s_15_St_29_Dia_1;
  } else {
    if (change) {
      r_15_St_29_Noite = true;
    } else {
      r_15_St_29_Noite = self->pnr_15;
    };
    r_15 = r_15_St_29_Noite;
    if (change) {
      s_15_St_29_Noite_1 = true;
    } else {
      s_15_St_29_Noite_1 = false;
    };
    s_15_1 = s_15_St_29_Noite_1;
  };
  ck_23_1 = s_15_1;
  if (ck_23_1) {
    night_1_St_29_Dia = false;
    nr_15_St_29_Dia = false;
    ns_15_St_29_Dia_1 = true;
    night_1 = night_1_St_29_Dia;
    nr_15 = nr_15_St_29_Dia;
    ns_15_1 = ns_15_St_29_Dia_1;
  } else {
    night_1_St_29_Noite = true;
    night_1 = night_1_St_29_Noite;
    nr_15_St_29_Noite = false;
    nr_15 = nr_15_St_29_Noite;
    ns_15_St_29_Noite_1 = false;
    ns_15_1 = ns_15_St_29_Noite_1;
  };
  _out->night = night_1;
  v_81 = !(_out->night);
  v_82 = (v&&v_81);
  v_83 = !(v_82);
  rule9 = (v_83||v_85);
  v_87 = !(_out->night);
  v_88 = (v_86&&v_87);
  v_90 = (v_88&&v_89);
  v_91 = !(v_90);
  rule8 = (v_91||v_93);
  v_95 = !(_out->night);
  v_96 = (v_94&&v_95);
  v_98 = (v_96&&v_97);
  v_99 = !(v_98);
  rule7 = (v_99||v_100);
  v_108 = !(_out->night);
  v_109 = (v_108&&_out->pc_on);
  v_112 = (v_109&&v_111);
  v_114 = (v_112&&v_113);
  v_116 = (v_114&&v_115);
  v_117 = !(v_116);
  rule5_5 = (v_117||v_118);
  v_119 = !(_out->night);
  v_120 = (v_119&&_out->pc_on);
  v_122 = (v_120&&v_121);
  v_124 = (v_122&&v_123);
  v_126 = (v_124&&v_125);
  v_127 = !(v_126);
  rule5 = (v_127||v_128);
  v_132 = !(_out->night);
  v_133 = (v_131&&v_132);
  v_134 = !(v_133);
  rule4 = (v_134||v_142);
  v_146 = (v_145&&_out->night);
  v_147 = !(v_146);
  rule3 = (v_147||v_155);
  v_157 = (v_156&&_out->night);
  v_159 = (v_157&&v_158);
  v_161 = (v_159&&v_160);
  v_162 = !(v_161);
  rule2_5 = (v_162||v_164);
  v_166 = (v_165&&_out->night);
  v_168 = (v_166&&v_167);
  v_170 = (v_168&&v_169);
  v_171 = !(v_170);
  rule2 = (v_171||v_173);
  v_175 = (v_174&&_out->night);
  v_177 = (v_175&&v_176);
  v_179 = (v_177&&v_178);
  v_180 = !(v_179);
  rule1_5 = (v_180||v_182);
  v_184 = (v_183&&_out->night);
  v_186 = (v_184&&v_185);
  v_188 = (v_186&&v_187);
  v_189 = !(v_188);
  rule1 = (v_189||v_192);
  v_193 = (rule1&&rule1_5);
  v_194 = (v_193&&rule2);
  v_195 = (v_194&&rule2_5);
  v_196 = (v_195&&rule3);
  v_197 = (v_196&&rule4);
  v_198 = (v_197&&rule5);
  v_199 = (v_198&&rule5_5);
  v_200 = (v_199&&rule6);
  v_201 = (v_200&&rule7);
  v_202 = (v_201&&rule8);
  v_203 = (v_202&&rule9);
  self->pnr = nr;
  self->ck_48_1 = ns_1;
  self->pnr_4 = nr_4;
  self->ck_46_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->ck_44_1 = ns_5_1;
  self->pnr_6 = nr_6;
  self->ck_42_1 = ns_6_1;
  self->pnr_7 = nr_7;
  self->ck_39_1 = ns_7_1;
  self->pnr_8 = nr_8;
  self->v_334 = ns_8_1;
  self->v_335 = ns_8_2;
  self->pnr_9 = nr_9;
  self->ck_34_1 = ns_9_1;
  self->pnr_10 = nr_10;
  self->ck_32_1 = ns_10_1;
  self->pnr_11 = nr_11;
  self->ck_30_1 = ns_11_1;
  self->pnr_12 = nr_12;
  self->ck_28_1 = ns_12_1;
  self->pnr_13 = nr_13;
  self->ck_26_1 = ns_13_1;
  self->pnr_14 = nr_14;
  self->ck_24_1 = ns_14_1;
  self->pnr_15 = nr_15;
  self->ck_1 = ns_15_1;;
}

