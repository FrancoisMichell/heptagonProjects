/* --- Generated the 8/7/2018 at 14:29 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system.h"

void System__ilumination_reset(System__ilumination_mem* self) {
  self->pnr = false;
  self->v_251 = false;
  self->v_252 = false;
  self->v_253 = true;
}

void System__ilumination_step(int c1, int c2, int c_up, int c_down, int up,
                              int down, int ar_fail, int shift,
                              System__ilumination_out* _out,
                              System__ilumination_mem* self) {
  
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
  int v_32_2_0;
  int v_32_3_0_0;
  int v_32_3_0_1;
  int v_32_2_1;
  int v_32_3_1_0;
  int v_32_3_1_1;
  int v_33;
  int v_32_3;
  int v_32_2;
  int v_32_1;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_26_2_0;
  int v_26_3_0_0;
  int v_26_3_0_1;
  int v_26_2_1;
  int v_26_3_1_0;
  int v_26_3_1_1;
  int v_27;
  int v_26_3;
  int v_26_2;
  int v_26_1;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_19_2_0;
  int v_19_3_0_0;
  int v_19_3_0_1;
  int v_19_2_1;
  int v_19_3_1_0;
  int v_19_3_1_1;
  int v_20;
  int v_19_3;
  int v_19_2;
  int v_19_1;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_11_2_0;
  int v_11_3_0_0;
  int v_11_3_0_1;
  int v_11_2_1;
  int v_11_3_1_0;
  int v_11_3_1_1;
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
  int v_273;
  int v_272;
  int v_271;
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
  ck_1_4 = self->v_251;
  ck_2 = self->v_252;
  ck_3 = self->v_253;
  if (ck_1_4) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        v_10 = !(c2);
        if (v_10) {
          v_12 = true;
          v_11_1 = false;
          v_11_2 = false;
          v_11_3 = true;
        } else {
          v_12 = self->pnr;
          v_11_1 = true;
          v_11_2 = true;
          v_11_3 = true;
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
          r_St_Max = v_12;
          s_St_Max_1 = v_11_1;
          s_St_Max_2 = v_11_2;
          s_St_Max_3 = v_11_3;
        };
        v_269 = r_St_Max;
        v_254 = s_St_Max_1;
        v_255 = s_St_Max_2;
        v_256 = s_St_Max_3;
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
        v_269 = r_St_Max_Up;
        if (v_1) {
          s_St_Max_Up_1 = false;
        } else {
          s_St_Max_Up_1 = v_5_1;
        };
        v_254 = s_St_Max_Up_1;
        if (v_1) {
          s_St_Max_Up_2 = false;
        } else {
          s_St_Max_Up_2 = v_5_2;
        };
        v_255 = s_St_Max_Up_2;
        if (v_1) {
          s_St_Max_Up_3 = true;
        } else {
          s_St_Max_Up_3 = v_5_3;
        };
        v_256 = s_St_Max_Up_3;
      };
      v_263 = v_254;
      v_264 = v_255;
      v_265 = v_256;
      v_271 = v_269;
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
        v_270 = true;
        v_257 = true;
        v_258 = true;
        v_259 = true;
      } else {
        v_17 = (up&&c_up);
        v_16 = !(c2);
        v_18 = (v_16||v_17);
        if (v_18) {
          v_20 = true;
          v_19_1 = true;
          v_19_2 = true;
          v_19_3 = true;
        } else {
          v_20 = self->pnr;
          v_19_1 = true;
          v_19_2 = false;
          v_19_3 = false;
        };
        v_14 = (down&&c_down);
        v_13 = !(c1);
        v_15 = (v_13||v_14);
        if (v_15) {
          r_St_Min = true;
        } else {
          r_St_Min = v_20;
        };
        v_270 = r_St_Min;
        if (v_15) {
          s_St_Min_1 = false;
        } else {
          s_St_Min_1 = v_19_1;
        };
        v_257 = s_St_Min_1;
        if (v_15) {
          s_St_Min_2 = false;
        } else {
          s_St_Min_2 = v_19_2;
        };
        v_258 = s_St_Min_2;
        if (v_15) {
          s_St_Min_3 = true;
        } else {
          s_St_Min_3 = v_19_3;
        };
        v_259 = s_St_Min_3;
        if (v_19_1) {
          v_19_2_1 = v_19_2;
          if (v_19_2_1) {
            v_19_3_1_1 = v_19_3;
          } else {
            v_19_3_1_0 = v_19_3;
          };
        } else {
          v_19_2_0 = v_19_2;
          if (v_19_2_0) {
            v_19_3_0_1 = v_19_3;
          } else {
            v_19_3_0_0 = v_19_3;
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
      v_263 = v_257;
      v_264 = v_258;
      v_265 = v_259;
      v_271 = v_270;
    };
    s_1 = v_263;
    s_2 = v_264;
    s_3 = v_265;
    r = v_271;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_266 = true;
      v_267 = true;
      v_268 = true;
      v_273 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_31 = !(c2);
        if (v_31) {
          v_33 = true;
          v_32_1 = true;
          v_32_2 = true;
          v_32_3 = true;
        } else {
          v_33 = self->pnr;
          v_32_1 = false;
          v_32_2 = false;
          v_32_3 = true;
        };
        v_29 = (up&&c_up);
        v_28 = !(c1);
        v_30 = (v_28||v_29);
        if (v_30) {
          r_St_Off = true;
          s_St_Off_1 = true;
          s_St_Off_2 = false;
          s_St_Off_3 = false;
        } else {
          r_St_Off = v_33;
          s_St_Off_1 = v_32_1;
          s_St_Off_2 = v_32_2;
          s_St_Off_3 = v_32_3;
        };
        v_272 = r_St_Off;
        v_260 = s_St_Off_1;
        v_261 = s_St_Off_2;
        v_262 = s_St_Off_3;
        if (v_32_1) {
          v_32_2_1 = v_32_2;
          if (v_32_2_1) {
            v_32_3_1_1 = v_32_3;
          } else {
            v_32_3_1_0 = v_32_3;
          };
        } else {
          v_32_2_0 = v_32_2;
          if (v_32_2_0) {
            v_32_3_0_1 = v_32_3;
          } else {
            v_32_3_0_0 = v_32_3;
          };
        };
      } else {
        v_24 = !(shift);
        v_23 = !(ar_fail);
        v_25 = (v_23&&v_24);
        if (v_25) {
          v_27 = true;
          v_26_1 = false;
          v_26_2 = false;
          v_26_3 = true;
        } else {
          v_27 = self->pnr;
          v_26_1 = false;
          v_26_2 = false;
          v_26_3 = false;
        };
        v_21 = !(ar_fail);
        v_22 = (v_21&&shift);
        if (v_22) {
          r_St_Off_Up = true;
        } else {
          r_St_Off_Up = v_27;
        };
        v_272 = r_St_Off_Up;
        if (v_22) {
          s_St_Off_Up_1 = false;
        } else {
          s_St_Off_Up_1 = v_26_1;
        };
        v_260 = s_St_Off_Up_1;
        if (v_22) {
          s_St_Off_Up_2 = false;
        } else {
          s_St_Off_Up_2 = v_26_2;
        };
        v_261 = s_St_Off_Up_2;
        if (v_22) {
          s_St_Off_Up_3 = true;
        } else {
          s_St_Off_Up_3 = v_26_3;
        };
        v_262 = s_St_Off_Up_3;
        if (v_26_1) {
          v_26_2_1 = v_26_2;
          if (v_26_2_1) {
            v_26_3_1_1 = v_26_3;
          } else {
            v_26_3_1_0 = v_26_3;
          };
        } else {
          v_26_2_0 = v_26_2;
          if (v_26_2_0) {
            v_26_3_0_1 = v_26_3;
          } else {
            v_26_3_0_0 = v_26_3;
          };
        };
      };
      v_266 = v_260;
      v_267 = v_261;
      v_268 = v_262;
      v_273 = v_272;
    };
    s_1 = v_266;
    s_2 = v_267;
    s_3 = v_268;
    r = v_273;
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
        v_216 = lamp_St_Max;
        v_221 = pers_St_Max;
        v_226 = policy_St_Max;
        v_246 = nr_St_Max;
        v_231 = ns_St_Max_1;
        v_232 = ns_St_Max_2;
        v_233 = ns_St_Max_3;
      } else {
        lamp_St_Max_Up = 0;
        v_216 = lamp_St_Max_Up;
        pers_St_Max_Up = 0;
        v_221 = pers_St_Max_Up;
        policy_St_Max_Up = 5;
        v_226 = policy_St_Max_Up;
        nr_St_Max_Up = false;
        v_246 = nr_St_Max_Up;
        ns_St_Max_Up_1 = true;
        v_231 = ns_St_Max_Up_1;
        ns_St_Max_Up_2 = true;
        v_232 = ns_St_Max_Up_2;
        ns_St_Max_Up_3 = false;
        v_233 = ns_St_Max_Up_3;
      };
      v_218 = v_216;
      v_223 = v_221;
      v_228 = v_226;
      v_240 = v_231;
      v_241 = v_232;
      v_242 = v_233;
      v_248 = v_246;
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
        v_217 = 0;
        v_222 = 0;
        v_227 = 0;
        v_247 = true;
        v_234 = true;
        v_235 = true;
        v_236 = true;
      } else {
        lamp_St_Min = 1;
        v_217 = lamp_St_Min;
        pers_St_Min = 1;
        v_222 = pers_St_Min;
        policy_St_Min = 1;
        v_227 = policy_St_Min;
        nr_St_Min = false;
        v_247 = nr_St_Min;
        ns_St_Min_1 = true;
        v_234 = ns_St_Min_1;
        ns_St_Min_2 = false;
        v_235 = ns_St_Min_2;
        ns_St_Min_3 = false;
        v_236 = ns_St_Min_3;
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
      v_218 = v_217;
      v_223 = v_222;
      v_228 = v_227;
      v_240 = v_234;
      v_241 = v_235;
      v_242 = v_236;
      v_248 = v_247;
    };
    _out->lamp = v_218;
    _out->pers = v_223;
    _out->policy = v_228;
    ns_1 = v_240;
    ns_2 = v_241;
    ns_3 = v_242;
    nr = v_248;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      ck_1_3_0_1 = ck_1_3;
      v_220 = 0;
      v_225 = 0;
      v_230 = 0;
      v_243 = true;
      v_244 = true;
      v_245 = true;
      v_250 = true;
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
        v_219 = lamp_St_Off;
        v_224 = pers_St_Off;
        v_229 = policy_St_Off;
        v_249 = nr_St_Off;
        v_237 = ns_St_Off_1;
        v_238 = ns_St_Off_2;
        v_239 = ns_St_Off_3;
      } else {
        lamp_St_Off_Up = 0;
        v_219 = lamp_St_Off_Up;
        pers_St_Off_Up = 0;
        v_224 = pers_St_Off_Up;
        policy_St_Off_Up = 4;
        v_229 = policy_St_Off_Up;
        nr_St_Off_Up = false;
        v_249 = nr_St_Off_Up;
        ns_St_Off_Up_1 = false;
        v_237 = ns_St_Off_Up_1;
        ns_St_Off_Up_2 = false;
        v_238 = ns_St_Off_Up_2;
        ns_St_Off_Up_3 = false;
        v_239 = ns_St_Off_Up_3;
      };
      v_220 = v_219;
      v_225 = v_224;
      v_230 = v_229;
      v_243 = v_237;
      v_244 = v_238;
      v_245 = v_239;
      v_250 = v_249;
    };
    _out->lamp = v_220;
    _out->pers = v_225;
    _out->policy = v_230;
    ns_1 = v_243;
    ns_2 = v_244;
    ns_3 = v_245;
    nr = v_250;
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
  self->v_251 = ns_1;
  self->v_252 = ns_2;
  self->v_253 = ns_3;;
}

void System__porta_reset(System__porta_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__porta_step(int push, int c_porta, System__porta_out* _out,
                        System__porta_mem* self) {
  
  int nr_St_1_Open;
  int ns_St_1_Open_1;
  int porta_open_St_1_Open;
  int nr_St_1_Closed;
  int ns_St_1_Closed_1;
  int porta_open_St_1_Closed;
  int ck_2_1;
  int v;
  int r_St_1_Open;
  int s_St_1_Open_1;
  int r_St_1_Closed;
  int s_St_1_Closed_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v = !(c_porta);
    if (v) {
      r_St_1_Closed = true;
      s_St_1_Closed_1 = false;
    } else {
      r_St_1_Closed = self->pnr;
      s_St_1_Closed_1 = true;
    };
    r = r_St_1_Closed;
    s_1 = s_St_1_Closed_1;
  } else {
    if (c_porta) {
      r_St_1_Open = true;
    } else {
      r_St_1_Open = self->pnr;
    };
    r = r_St_1_Open;
    if (c_porta) {
      s_St_1_Open_1 = true;
    } else {
      s_St_1_Open_1 = false;
    };
    s_1 = s_St_1_Open_1;
  };
  ck_2_1 = s_1;
  if (ck_2_1) {
    porta_open_St_1_Closed = false;
    nr_St_1_Closed = false;
    ns_St_1_Closed_1 = true;
    _out->porta_open = porta_open_St_1_Closed;
    nr = nr_St_1_Closed;
    ns_1 = ns_St_1_Closed_1;
  } else {
    porta_open_St_1_Open = true;
    _out->porta_open = porta_open_St_1_Open;
    nr_St_1_Open = false;
    nr = nr_St_1_Open;
    ns_St_1_Open_1 = false;
    ns_1 = ns_St_1_Open_1;
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
  
  int nr_St_2_On;
  int ns_St_2_On_1;
  int r_on_St_2_On;
  int nr_St_2_Off;
  int ns_St_2_Off_1;
  int r_on_St_2_Off;
  int ck_3_1;
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
    if (c) {
      r_St_2_Off = true;
      s_St_2_Off_1 = false;
    } else {
      r_St_2_Off = self->pnr;
      s_St_2_Off_1 = true;
    };
    r = r_St_2_Off;
    s_1 = s_St_2_Off_1;
  } else {
    v = !(c);
    if (v) {
      r_St_2_On = true;
    } else {
      r_St_2_On = self->pnr;
    };
    r = r_St_2_On;
    if (v) {
      s_St_2_On_1 = true;
    } else {
      s_St_2_On_1 = false;
    };
    s_1 = s_St_2_On_1;
  };
  ck_3_1 = s_1;
  if (ck_3_1) {
    r_on_St_2_Off = false;
    nr_St_2_Off = false;
    ns_St_2_Off_1 = true;
    _out->r_on = r_on_St_2_Off;
    nr = nr_St_2_Off;
    ns_1 = ns_St_2_Off_1;
  } else {
    r_on_St_2_On = true;
    _out->r_on = r_on_St_2_On;
    nr_St_2_On = false;
    nr = nr_St_2_On;
    ns_St_2_On_1 = false;
    ns_1 = ns_St_2_On_1;
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
  
  int nr_St_3_Open;
  int ns_St_3_Open_1;
  int arm_open_St_3_Open;
  int nr_St_3_Locked;
  int ns_St_3_Locked_1;
  int arm_open_St_3_Locked;
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
    arm_open_St_3_Locked = false;
    nr_St_3_Locked = false;
    ns_St_3_Locked_1 = true;
    _out->arm_open = arm_open_St_3_Locked;
    nr = nr_St_3_Locked;
    ns_1 = ns_St_3_Locked_1;
  } else {
    arm_open_St_3_Open = true;
    _out->arm_open = arm_open_St_3_Open;
    nr_St_3_Open = false;
    nr = nr_St_3_Open;
    ns_St_3_Open_1 = false;
    ns_1 = ns_St_3_Open_1;
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
  
  int nr_St_4_Preent;
  int ns_St_4_Preent_1;
  int presence_St_4_Preent;
  int nr_St_4_Not_Present;
  int ns_St_4_Not_Present_1;
  int presence_St_4_Not_Present;
  int ck_5_1;
  int r_St_4_Preent;
  int s_St_4_Preent_1;
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
      r_St_4_Preent = true;
    } else {
      r_St_4_Preent = self->pnr;
    };
    r = r_St_4_Preent;
    if (arrived) {
      s_St_4_Preent_1 = true;
    } else {
      s_St_4_Preent_1 = false;
    };
    s_1 = s_St_4_Preent_1;
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
    presence_St_4_Preent = true;
    _out->presence = presence_St_4_Preent;
    nr_St_4_Preent = false;
    nr = nr_St_4_Preent;
    ns_St_4_Preent_1 = false;
    ns_1 = ns_St_4_Preent_1;
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
  
  int nr_St_5_On;
  int ns_St_5_On_1;
  int pc_on_St_5_On;
  int nr_St_5_Off;
  int ns_St_5_Off_1;
  int pc_on_St_5_Off;
  int ck_6_1;
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
    if (c) {
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
    pc_on_St_5_Off = false;
    nr_St_5_Off = false;
    ns_St_5_Off_1 = true;
    _out->pc_on = pc_on_St_5_Off;
    nr = nr_St_5_Off;
    ns_1 = ns_St_5_Off_1;
  } else {
    pc_on_St_5_On = true;
    _out->pc_on = pc_on_St_5_On;
    nr_St_5_On = false;
    nr = nr_St_5_On;
    ns_St_5_On_1 = false;
    ns_1 = ns_St_5_On_1;
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
  
  int nr_St_6_Open;
  int ns_St_6_Open_1;
  int w_open_St_6_Open;
  int nr_St_6_Closed;
  int ns_St_6_Closed_1;
  int w_open_St_6_Closed;
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
    w_open_St_6_Closed = false;
    nr_St_6_Closed = false;
    ns_St_6_Closed_1 = true;
    _out->w_open = w_open_St_6_Closed;
    nr = nr_St_6_Closed;
    ns_1 = ns_St_6_Closed_1;
  } else {
    w_open_St_6_Open = true;
    _out->w_open = w_open_St_6_Open;
    nr_St_6_Open = false;
    nr = nr_St_6_Open;
    ns_St_6_Open_1 = false;
    ns_1 = ns_St_6_Open_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__ar_condicionado_reset(System__ar_condicionado_mem* self) {
  self->pnr = false;
  self->v_282 = false;
  self->v_283 = false;
}

void System__ar_condicionado_step(int c1, int c2,
                                  System__ar_condicionado_out* _out,
                                  System__ar_condicionado_mem* self) {
  
  int v_281;
  int v_280;
  int v_279;
  int v_278;
  int v_277;
  int v_276;
  int v_275;
  int v_274;
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
  int ar_state_St_7_Max;
  int nr_St_7_Min;
  int ns_St_7_Min_2;
  int ns_St_7_Min_1;
  int ar_state_St_7_Min;
  int nr_St_7_Off;
  int ns_St_7_Off_2;
  int ns_St_7_Off_1;
  int ar_state_St_7_Off;
  int ck_8_2;
  int ck_8_1;
  int v_40_2_0;
  int v_40_2_1;
  int v_41;
  int v_40_2;
  int v_40_1;
  int v_38_2_0;
  int v_38_2_1;
  int v_39;
  int v_38_2;
  int v_38_1;
  int v_37;
  int v_35_2_0;
  int v_35_2_1;
  int v_36;
  int v_35_2;
  int v_35_1;
  int v_34;
  int v;
  int v_289;
  int v_288;
  int v_287;
  int v_286;
  int v_285;
  int v_284;
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
  ck_1 = self->v_282;
  ck_2 = self->v_283;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_34 = !(c2);
      if (v_34) {
        v_36 = true;
        v_35_1 = false;
        v_35_2 = false;
      } else {
        v_36 = self->pnr;
        v_35_1 = true;
        v_35_2 = true;
      };
      v = !(c1);
      if (v) {
        r_St_7_Max = true;
      } else {
        r_St_7_Max = v_36;
      };
      v_288 = r_St_7_Max;
      if (v) {
        s_St_7_Max_1 = true;
      } else {
        s_St_7_Max_1 = v_35_1;
      };
      v_284 = s_St_7_Max_1;
      if (v) {
        s_St_7_Max_2 = false;
      } else {
        s_St_7_Max_2 = v_35_2;
      };
      v_285 = s_St_7_Max_2;
    } else {
      if (c2) {
        v_39 = true;
        v_38_1 = true;
        v_38_2 = true;
      } else {
        v_39 = self->pnr;
        v_38_1 = true;
        v_38_2 = false;
      };
      v_37 = !(c1);
      if (v_37) {
        r_St_7_Min = true;
        s_St_7_Min_1 = false;
        s_St_7_Min_2 = false;
      } else {
        r_St_7_Min = v_39;
        s_St_7_Min_1 = v_38_1;
        s_St_7_Min_2 = v_38_2;
      };
      v_288 = r_St_7_Min;
      v_284 = s_St_7_Min_1;
      v_285 = s_St_7_Min_2;
    };
    s_1 = v_284;
    s_2 = v_285;
    r = v_288;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_289 = true;
      v_286 = true;
      v_287 = true;
    } else {
      if (c2) {
        v_41 = true;
      } else {
        v_41 = self->pnr;
      };
      if (c1) {
        r_St_7_Off = true;
      } else {
        r_St_7_Off = v_41;
      };
      v_289 = r_St_7_Off;
      if (c2) {
        v_40_1 = true;
      } else {
        v_40_1 = false;
      };
      if (c1) {
        s_St_7_Off_1 = true;
      } else {
        s_St_7_Off_1 = v_40_1;
      };
      v_286 = s_St_7_Off_1;
      if (c2) {
        v_40_2 = true;
      } else {
        v_40_2 = false;
      };
      if (c1) {
        s_St_7_Off_2 = false;
      } else {
        s_St_7_Off_2 = v_40_2;
      };
      v_287 = s_St_7_Off_2;
      if (v_40_1) {
        v_40_2_1 = v_40_2;
      } else {
        v_40_2_0 = v_40_2;
      };
      if (s_St_7_Off_1) {
        s_St_7_Off_2_1 = s_St_7_Off_2;
      } else {
        s_St_7_Off_2_0 = s_St_7_Off_2;
      };
    };
    s_1 = v_286;
    s_2 = v_287;
    r = v_289;
  };
  ck_8_1 = s_1;
  ck_8_2 = s_2;
  if (ck_8_1) {
    ck_8_2_1 = ck_8_2;
    if (ck_8_2_1) {
      ar_state_St_7_Max = 2;
      v_274 = ar_state_St_7_Max;
      nr_St_7_Max = false;
      v_280 = nr_St_7_Max;
      ns_St_7_Max_1 = true;
      v_276 = ns_St_7_Max_1;
      ns_St_7_Max_2 = true;
      v_277 = ns_St_7_Max_2;
    } else {
      ar_state_St_7_Min = 1;
      nr_St_7_Min = false;
      ns_St_7_Min_1 = true;
      ns_St_7_Min_2 = false;
      v_274 = ar_state_St_7_Min;
      v_280 = nr_St_7_Min;
      v_276 = ns_St_7_Min_1;
      v_277 = ns_St_7_Min_2;
    };
    _out->ar_state = v_274;
    ns_1 = v_276;
    ns_2 = v_277;
    nr = v_280;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      v_275 = 0;
      v_281 = true;
      v_278 = true;
      v_279 = true;
    } else {
      ar_state_St_7_Off = 0;
      v_275 = ar_state_St_7_Off;
      nr_St_7_Off = false;
      v_281 = nr_St_7_Off;
      ns_St_7_Off_1 = false;
      v_278 = ns_St_7_Off_1;
      ns_St_7_Off_2 = false;
      v_279 = ns_St_7_Off_2;
      if (ns_St_7_Off_1) {
        ns_St_7_Off_2_1 = ns_St_7_Off_2;
      } else {
        ns_St_7_Off_2_0 = ns_St_7_Off_2;
      };
    };
    _out->ar_state = v_275;
    ns_1 = v_278;
    ns_2 = v_279;
    nr = v_281;
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
      if (v_35_1) {
        v_35_2_1 = v_35_2;
      } else {
        v_35_2_0 = v_35_2;
      };
      if (s_St_7_Max_1) {
        s_St_7_Max_2_1 = s_St_7_Max_2;
      } else {
        s_St_7_Max_2_0 = s_St_7_Max_2;
      };
    } else {
      if (v_38_1) {
        v_38_2_1 = v_38_2;
      } else {
        v_38_2_0 = v_38_2;
      };
      if (s_St_7_Min_1) {
        s_St_7_Min_2_1 = s_St_7_Min_2;
      } else {
        s_St_7_Min_2_0 = s_St_7_Min_2;
      };
    };
  };
  self->pnr = nr;
  self->v_282 = ns_1;
  self->v_283 = ns_2;;
}

void System__turno_reset(System__turno_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__turno_step(int shift, System__turno_out* _out,
                        System__turno_mem* self) {
  
  int nr_St_8_Noite;
  int ns_St_8_Noite_1;
  int turno_St_8_Noite;
  int nr_St_8_Dia;
  int ns_St_8_Dia_1;
  int turno_St_8_Dia;
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
    if (shift) {
      r_St_8_Dia = true;
      s_St_8_Dia_1 = false;
    } else {
      r_St_8_Dia = self->pnr;
      s_St_8_Dia_1 = true;
    };
    r = r_St_8_Dia;
    s_1 = s_St_8_Dia_1;
  } else {
    if (shift) {
      r_St_8_Noite = true;
    } else {
      r_St_8_Noite = self->pnr;
    };
    r = r_St_8_Noite;
    if (shift) {
      s_St_8_Noite_1 = true;
    } else {
      s_St_8_Noite_1 = false;
    };
    s_1 = s_St_8_Noite_1;
  };
  ck_9_1 = s_1;
  if (ck_9_1) {
    turno_St_8_Dia = false;
    nr_St_8_Dia = false;
    ns_St_8_Dia_1 = true;
    _out->turno = turno_St_8_Dia;
    nr = nr_St_8_Dia;
    ns_1 = ns_St_8_Dia_1;
  } else {
    turno_St_8_Noite = true;
    _out->turno = turno_St_8_Noite;
    nr_St_8_Noite = false;
    nr = nr_St_8_Noite;
    ns_St_8_Noite_1 = false;
    ns_1 = ns_St_8_Noite_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__falha_reset(System__falha_mem* self) {
  self->pnr = false;
  self->ck_1 = false;
}

void System__falha_step(int falhou, int recuperou, System__falha_out* _out,
                        System__falha_mem* self) {
  
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
    if (recuperou) {
      r_St_9_Falha = true;
    } else {
      r_St_9_Falha = self->pnr;
    };
    r = r_St_9_Falha;
    if (recuperou) {
      s_St_9_Falha_1 = false;
    } else {
      s_St_9_Falha_1 = true;
    };
    s_1 = s_St_9_Falha_1;
  } else {
    if (falhou) {
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

void System__l_status_reset(System__l_status_mem* self) {
  self->pnr = false;
  self->ck_12_1 = false;
  self->pnr_1 = false;
  self->v_325 = false;
  self->v_326 = false;
  self->v_327 = true;
}

void System__l_status_step(int c1, int c2, int c_up, int c_down, int up,
                           int down, int falhou, int recuperou, int ar_fail,
                           int shift, System__l_status_out* _out,
                           System__l_status_mem* self) {
  
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
  int v_296;
  int v_295;
  int v_294;
  int v_293;
  int v_292;
  int v_291;
  int v_290;
  int ns_1_St_11_Max_Up_2_0;
  int ns_1_St_11_Max_Up_3_0_0;
  int ns_1_St_11_Max_Up_3_0_1;
  int ns_1_St_11_Max_Up_2_1;
  int ns_1_St_11_Max_Up_3_1_0;
  int ns_1_St_11_Max_Up_3_1_1;
  int ns_1_St_11_Max_2_0;
  int ns_1_St_11_Max_3_0_0;
  int ns_1_St_11_Max_3_0_1;
  int ns_1_St_11_Max_2_1;
  int ns_1_St_11_Max_3_1_0;
  int ns_1_St_11_Max_3_1_1;
  int ns_1_St_11_Min_2_0;
  int ns_1_St_11_Min_3_0_0;
  int ns_1_St_11_Min_3_0_1;
  int ns_1_St_11_Min_2_1;
  int ns_1_St_11_Min_3_1_0;
  int ns_1_St_11_Min_3_1_1;
  int ns_1_St_11_Off_Up_2_0;
  int ns_1_St_11_Off_Up_3_0_0;
  int ns_1_St_11_Off_Up_3_0_1;
  int ns_1_St_11_Off_Up_2_1;
  int ns_1_St_11_Off_Up_3_1_0;
  int ns_1_St_11_Off_Up_3_1_1;
  int ns_1_St_11_Off_2_0;
  int ns_1_St_11_Off_3_0_0;
  int ns_1_St_11_Off_3_0_1;
  int ns_1_St_11_Off_2_1;
  int ns_1_St_11_Off_3_1_0;
  int ns_1_St_11_Off_3_1_1;
  int ck_11_2_0;
  int ck_11_3_0_0;
  int ck_11_3_0_1;
  int ck_11_2_1;
  int ck_11_3_1_0;
  int ck_11_3_1_1;
  int nr_1_St_11_Max_Up;
  int ns_1_St_11_Max_Up_3;
  int ns_1_St_11_Max_Up_2;
  int ns_1_St_11_Max_Up_1;
  int policy_1_St_11_Max_Up;
  int pers_1_St_11_Max_Up;
  int lamp_1_St_11_Max_Up;
  int nr_1_St_11_Max;
  int ns_1_St_11_Max_3;
  int ns_1_St_11_Max_2;
  int ns_1_St_11_Max_1;
  int policy_1_St_11_Max;
  int pers_1_St_11_Max;
  int lamp_1_St_11_Max;
  int nr_1_St_11_Min;
  int ns_1_St_11_Min_3;
  int ns_1_St_11_Min_2;
  int ns_1_St_11_Min_1;
  int policy_1_St_11_Min;
  int pers_1_St_11_Min;
  int lamp_1_St_11_Min;
  int nr_1_St_11_Off_Up;
  int ns_1_St_11_Off_Up_3;
  int ns_1_St_11_Off_Up_2;
  int ns_1_St_11_Off_Up_1;
  int policy_1_St_11_Off_Up;
  int pers_1_St_11_Off_Up;
  int lamp_1_St_11_Off_Up;
  int nr_1_St_11_Off;
  int ns_1_St_11_Off_3;
  int ns_1_St_11_Off_2;
  int ns_1_St_11_Off_1;
  int policy_1_St_11_Off;
  int pers_1_St_11_Off;
  int lamp_1_St_11_Off;
  int ck_11_3;
  int ck_11_2;
  int ck_11_1;
  int v_73_2_0;
  int v_73_3_0_0;
  int v_73_3_0_1;
  int v_73_2_1;
  int v_73_3_1_0;
  int v_73_3_1_1;
  int v_74;
  int v_73_3;
  int v_73_2;
  int v_73_1;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_67_2_0;
  int v_67_3_0_0;
  int v_67_3_0_1;
  int v_67_2_1;
  int v_67_3_1_0;
  int v_67_3_1_1;
  int v_68;
  int v_67_3;
  int v_67_2;
  int v_67_1;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_60_2_0;
  int v_60_3_0_0;
  int v_60_3_0_1;
  int v_60_2_1;
  int v_60_3_1_0;
  int v_60_3_1_1;
  int v_61;
  int v_60_3;
  int v_60_2;
  int v_60_1;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_52_2_0;
  int v_52_3_0_0;
  int v_52_3_0_1;
  int v_52_2_1;
  int v_52_3_1_0;
  int v_52_3_1_1;
  int v_53;
  int v_52_3;
  int v_52_2;
  int v_52_1;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v_46_2_0;
  int v_46_3_0_0;
  int v_46_3_0_1;
  int v_46_2_1;
  int v_46_3_1_0;
  int v_46_3_1_1;
  int v_47;
  int v_46_3;
  int v_46_2;
  int v_46_1;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v;
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
  int v_329;
  int v_328;
  int s_1_St_11_Max_Up_2_0;
  int s_1_St_11_Max_Up_3_0_0;
  int s_1_St_11_Max_Up_3_0_1;
  int s_1_St_11_Max_Up_2_1;
  int s_1_St_11_Max_Up_3_1_0;
  int s_1_St_11_Max_Up_3_1_1;
  int s_1_St_11_Max_2_0;
  int s_1_St_11_Max_3_0_0;
  int s_1_St_11_Max_3_0_1;
  int s_1_St_11_Max_2_1;
  int s_1_St_11_Max_3_1_0;
  int s_1_St_11_Max_3_1_1;
  int s_1_St_11_Min_2_0;
  int s_1_St_11_Min_3_0_0;
  int s_1_St_11_Min_3_0_1;
  int s_1_St_11_Min_2_1;
  int s_1_St_11_Min_3_1_0;
  int s_1_St_11_Min_3_1_1;
  int s_1_St_11_Off_Up_2_0;
  int s_1_St_11_Off_Up_3_0_0;
  int s_1_St_11_Off_Up_3_0_1;
  int s_1_St_11_Off_Up_2_1;
  int s_1_St_11_Off_Up_3_1_0;
  int s_1_St_11_Off_Up_3_1_1;
  int s_1_St_11_Off_2_0;
  int s_1_St_11_Off_3_0_0;
  int s_1_St_11_Off_3_0_1;
  int s_1_St_11_Off_2_1;
  int s_1_St_11_Off_3_1_0;
  int s_1_St_11_Off_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_1_St_11_Max_Up;
  int s_1_St_11_Max_Up_3;
  int s_1_St_11_Max_Up_2;
  int s_1_St_11_Max_Up_1;
  int r_1_St_11_Max;
  int s_1_St_11_Max_3;
  int s_1_St_11_Max_2;
  int s_1_St_11_Max_1;
  int r_1_St_11_Min;
  int s_1_St_11_Min_3;
  int s_1_St_11_Min_2;
  int s_1_St_11_Min_1;
  int r_1_St_11_Off_Up;
  int s_1_St_11_Off_Up_3;
  int s_1_St_11_Off_Up_2;
  int s_1_St_11_Off_Up_1;
  int r_1_St_11_Off;
  int s_1_St_11_Off_3;
  int s_1_St_11_Off_2;
  int s_1_St_11_Off_1;
  int ck_3;
  int ck_2;
  int ck_1;
  int s_1_2_0;
  int s_1_3_0_0;
  int s_1_3_0_1;
  int s_1_2_1;
  int s_1_3_1_0;
  int s_1_3_1_1;
  int ns_1_2_0;
  int ns_1_3_0_0;
  int ns_1_3_0_1;
  int ns_1_2_1;
  int ns_1_3_1_0;
  int ns_1_3_1_1;
  int s_1_3;
  int s_1_2;
  int s_1_1;
  int ns_1_3;
  int ns_1_2;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_1_4;
  int ns_1_4;
  int r;
  int nr;
  int falhou_1;
  int recuperou_1;
  int failed_1;
  int c1_1;
  int c2_1;
  int c_up_1;
  int c_down_1;
  int up_1;
  int down_1;
  int ar_fail_1;
  int shift_1;
  int lamp_1;
  int pers_1;
  int policy_1;
  falhou_1 = falhou;
  recuperou_1 = recuperou;
  c1_1 = c1;
  c2_1 = c2;
  c_up_1 = c_up;
  c_down_1 = c_down;
  up_1 = up;
  down_1 = down;
  ar_fail_1 = ar_fail;
  shift_1 = shift;
  ck_1 = self->v_325;
  ck_2 = self->v_326;
  ck_3 = self->v_327;
  if (self->ck_12_1) {
    if (recuperou_1) {
      r_St_10_Falha = true;
    } else {
      r_St_10_Falha = self->pnr;
    };
    r = r_St_10_Falha;
    if (recuperou_1) {
      s_St_10_Falha_1 = false;
    } else {
      s_St_10_Falha_1 = true;
    };
    s_1_4 = s_St_10_Falha_1;
  } else {
    if (falhou_1) {
      r_St_10_Funcionando = true;
      s_St_10_Funcionando_1 = true;
    } else {
      r_St_10_Funcionando = self->pnr;
      s_St_10_Funcionando_1 = false;
    };
    r = r_St_10_Funcionando;
    s_1_4 = s_St_10_Funcionando_1;
  };
  ck_13_1 = s_1_4;
  if (ck_13_1) {
    failed_1_St_10_Falha = true;
    failed_1 = failed_1_St_10_Falha;
    nr_St_10_Falha = false;
    nr = nr_St_10_Falha;
    ns_St_10_Falha_1 = true;
    ns_1_4 = ns_St_10_Falha_1;
  } else {
    failed_1_St_10_Funcionando = false;
    nr_St_10_Funcionando = false;
    ns_St_10_Funcionando_1 = false;
    failed_1 = failed_1_St_10_Funcionando;
    nr = nr_St_10_Funcionando;
    ns_1_4 = ns_St_10_Funcionando_1;
  };
  _out->failed = failed_1;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        v_51 = !(c2_1);
        if (v_51) {
          v_53 = true;
          v_52_1 = false;
          v_52_2 = false;
          v_52_3 = true;
        } else {
          v_53 = self->pnr_1;
          v_52_1 = true;
          v_52_2 = true;
          v_52_3 = true;
        };
        v_49 = (down_1&&c_down_1);
        v_48 = !(c1_1);
        v_50 = (v_48||v_49);
        if (v_50) {
          r_1_St_11_Max = true;
          s_1_St_11_Max_1 = true;
          s_1_St_11_Max_2 = false;
          s_1_St_11_Max_3 = false;
        } else {
          r_1_St_11_Max = v_53;
          s_1_St_11_Max_1 = v_52_1;
          s_1_St_11_Max_2 = v_52_2;
          s_1_St_11_Max_3 = v_52_3;
        };
        v_343 = r_1_St_11_Max;
        v_328 = s_1_St_11_Max_1;
        v_329 = s_1_St_11_Max_2;
        v_330 = s_1_St_11_Max_3;
      } else {
        v_44 = !(shift_1);
        v_43 = !(ar_fail_1);
        v_45 = (v_43&&v_44);
        if (v_45) {
          v_47 = true;
          v_46_1 = false;
          v_46_2 = false;
          v_46_3 = true;
        } else {
          v_47 = self->pnr_1;
          v_46_1 = true;
          v_46_2 = true;
          v_46_3 = false;
        };
        v = !(ar_fail_1);
        v_42 = (v&&shift_1);
        if (v_42) {
          r_1_St_11_Max_Up = true;
        } else {
          r_1_St_11_Max_Up = v_47;
        };
        v_343 = r_1_St_11_Max_Up;
        if (v_42) {
          s_1_St_11_Max_Up_1 = false;
        } else {
          s_1_St_11_Max_Up_1 = v_46_1;
        };
        v_328 = s_1_St_11_Max_Up_1;
        if (v_42) {
          s_1_St_11_Max_Up_2 = false;
        } else {
          s_1_St_11_Max_Up_2 = v_46_2;
        };
        v_329 = s_1_St_11_Max_Up_2;
        if (v_42) {
          s_1_St_11_Max_Up_3 = true;
        } else {
          s_1_St_11_Max_Up_3 = v_46_3;
        };
        v_330 = s_1_St_11_Max_Up_3;
      };
      v_337 = v_328;
      v_338 = v_329;
      v_339 = v_330;
      v_345 = v_343;
      if (ck_3_1_1) {
        if (v_52_1) {
          v_52_2_1 = v_52_2;
          if (v_52_2_1) {
            v_52_3_1_1 = v_52_3;
          } else {
            v_52_3_1_0 = v_52_3;
          };
        } else {
          v_52_2_0 = v_52_2;
          if (v_52_2_0) {
            v_52_3_0_1 = v_52_3;
          } else {
            v_52_3_0_0 = v_52_3;
          };
        };
        if (s_1_St_11_Max_1) {
          s_1_St_11_Max_2_1 = s_1_St_11_Max_2;
          if (s_1_St_11_Max_2_1) {
            s_1_St_11_Max_3_1_1 = s_1_St_11_Max_3;
          } else {
            s_1_St_11_Max_3_1_0 = s_1_St_11_Max_3;
          };
        } else {
          s_1_St_11_Max_2_0 = s_1_St_11_Max_2;
          if (s_1_St_11_Max_2_0) {
            s_1_St_11_Max_3_0_1 = s_1_St_11_Max_3;
          } else {
            s_1_St_11_Max_3_0_0 = s_1_St_11_Max_3;
          };
        };
      } else {
        if (v_46_1) {
          v_46_2_1 = v_46_2;
          if (v_46_2_1) {
            v_46_3_1_1 = v_46_3;
          } else {
            v_46_3_1_0 = v_46_3;
          };
        } else {
          v_46_2_0 = v_46_2;
          if (v_46_2_0) {
            v_46_3_0_1 = v_46_3;
          } else {
            v_46_3_0_0 = v_46_3;
          };
        };
        if (s_1_St_11_Max_Up_1) {
          s_1_St_11_Max_Up_2_1 = s_1_St_11_Max_Up_2;
          if (s_1_St_11_Max_Up_2_1) {
            s_1_St_11_Max_Up_3_1_1 = s_1_St_11_Max_Up_3;
          } else {
            s_1_St_11_Max_Up_3_1_0 = s_1_St_11_Max_Up_3;
          };
        } else {
          s_1_St_11_Max_Up_2_0 = s_1_St_11_Max_Up_2;
          if (s_1_St_11_Max_Up_2_0) {
            s_1_St_11_Max_Up_3_0_1 = s_1_St_11_Max_Up_3;
          } else {
            s_1_St_11_Max_Up_3_0_0 = s_1_St_11_Max_Up_3;
          };
        };
      };
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_344 = true;
        v_331 = true;
        v_332 = true;
        v_333 = true;
      } else {
        v_58 = (up_1&&c_up_1);
        v_57 = !(c2_1);
        v_59 = (v_57||v_58);
        if (v_59) {
          v_61 = true;
          v_60_1 = true;
          v_60_2 = true;
          v_60_3 = true;
        } else {
          v_61 = self->pnr_1;
          v_60_1 = true;
          v_60_2 = false;
          v_60_3 = false;
        };
        v_55 = (down_1&&c_down_1);
        v_54 = !(c1_1);
        v_56 = (v_54||v_55);
        if (v_56) {
          r_1_St_11_Min = true;
        } else {
          r_1_St_11_Min = v_61;
        };
        v_344 = r_1_St_11_Min;
        if (v_56) {
          s_1_St_11_Min_1 = false;
        } else {
          s_1_St_11_Min_1 = v_60_1;
        };
        v_331 = s_1_St_11_Min_1;
        if (v_56) {
          s_1_St_11_Min_2 = false;
        } else {
          s_1_St_11_Min_2 = v_60_2;
        };
        v_332 = s_1_St_11_Min_2;
        if (v_56) {
          s_1_St_11_Min_3 = true;
        } else {
          s_1_St_11_Min_3 = v_60_3;
        };
        v_333 = s_1_St_11_Min_3;
        if (v_60_1) {
          v_60_2_1 = v_60_2;
          if (v_60_2_1) {
            v_60_3_1_1 = v_60_3;
          } else {
            v_60_3_1_0 = v_60_3;
          };
        } else {
          v_60_2_0 = v_60_2;
          if (v_60_2_0) {
            v_60_3_0_1 = v_60_3;
          } else {
            v_60_3_0_0 = v_60_3;
          };
        };
        if (s_1_St_11_Min_1) {
          s_1_St_11_Min_2_1 = s_1_St_11_Min_2;
          if (s_1_St_11_Min_2_1) {
            s_1_St_11_Min_3_1_1 = s_1_St_11_Min_3;
          } else {
            s_1_St_11_Min_3_1_0 = s_1_St_11_Min_3;
          };
        } else {
          s_1_St_11_Min_2_0 = s_1_St_11_Min_2;
          if (s_1_St_11_Min_2_0) {
            s_1_St_11_Min_3_0_1 = s_1_St_11_Min_3;
          } else {
            s_1_St_11_Min_3_0_0 = s_1_St_11_Min_3;
          };
        };
      };
      v_337 = v_331;
      v_338 = v_332;
      v_339 = v_333;
      v_345 = v_344;
    };
    s_1_1 = v_337;
    s_1_2 = v_338;
    s_1_3 = v_339;
    r_1 = v_345;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_340 = true;
      v_341 = true;
      v_342 = true;
      v_347 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_72 = !(c2_1);
        if (v_72) {
          v_74 = true;
          v_73_1 = true;
          v_73_2 = true;
          v_73_3 = true;
        } else {
          v_74 = self->pnr_1;
          v_73_1 = false;
          v_73_2 = false;
          v_73_3 = true;
        };
        v_70 = (up_1&&c_up_1);
        v_69 = !(c1_1);
        v_71 = (v_69||v_70);
        if (v_71) {
          r_1_St_11_Off = true;
          s_1_St_11_Off_1 = true;
          s_1_St_11_Off_2 = false;
          s_1_St_11_Off_3 = false;
        } else {
          r_1_St_11_Off = v_74;
          s_1_St_11_Off_1 = v_73_1;
          s_1_St_11_Off_2 = v_73_2;
          s_1_St_11_Off_3 = v_73_3;
        };
        v_346 = r_1_St_11_Off;
        v_334 = s_1_St_11_Off_1;
        v_335 = s_1_St_11_Off_2;
        v_336 = s_1_St_11_Off_3;
        if (v_73_1) {
          v_73_2_1 = v_73_2;
          if (v_73_2_1) {
            v_73_3_1_1 = v_73_3;
          } else {
            v_73_3_1_0 = v_73_3;
          };
        } else {
          v_73_2_0 = v_73_2;
          if (v_73_2_0) {
            v_73_3_0_1 = v_73_3;
          } else {
            v_73_3_0_0 = v_73_3;
          };
        };
      } else {
        v_65 = !(shift_1);
        v_64 = !(ar_fail_1);
        v_66 = (v_64&&v_65);
        if (v_66) {
          v_68 = true;
          v_67_1 = false;
          v_67_2 = false;
          v_67_3 = true;
        } else {
          v_68 = self->pnr_1;
          v_67_1 = false;
          v_67_2 = false;
          v_67_3 = false;
        };
        v_62 = !(ar_fail_1);
        v_63 = (v_62&&shift_1);
        if (v_63) {
          r_1_St_11_Off_Up = true;
        } else {
          r_1_St_11_Off_Up = v_68;
        };
        v_346 = r_1_St_11_Off_Up;
        if (v_63) {
          s_1_St_11_Off_Up_1 = false;
        } else {
          s_1_St_11_Off_Up_1 = v_67_1;
        };
        v_334 = s_1_St_11_Off_Up_1;
        if (v_63) {
          s_1_St_11_Off_Up_2 = false;
        } else {
          s_1_St_11_Off_Up_2 = v_67_2;
        };
        v_335 = s_1_St_11_Off_Up_2;
        if (v_63) {
          s_1_St_11_Off_Up_3 = true;
        } else {
          s_1_St_11_Off_Up_3 = v_67_3;
        };
        v_336 = s_1_St_11_Off_Up_3;
        if (v_67_1) {
          v_67_2_1 = v_67_2;
          if (v_67_2_1) {
            v_67_3_1_1 = v_67_3;
          } else {
            v_67_3_1_0 = v_67_3;
          };
        } else {
          v_67_2_0 = v_67_2;
          if (v_67_2_0) {
            v_67_3_0_1 = v_67_3;
          } else {
            v_67_3_0_0 = v_67_3;
          };
        };
      };
      v_340 = v_334;
      v_341 = v_335;
      v_342 = v_336;
      v_347 = v_346;
    };
    s_1_1 = v_340;
    s_1_2 = v_341;
    s_1_3 = v_342;
    r_1 = v_347;
  };
  ck_11_1 = s_1_1;
  ck_11_2 = s_1_2;
  ck_11_3 = s_1_3;
  if (ck_11_1) {
    ck_11_2_1 = ck_11_2;
    if (ck_11_2_1) {
      ck_11_3_1_1 = ck_11_3;
      if (ck_11_3_1_1) {
        lamp_1_St_11_Max = 2;
        pers_1_St_11_Max = 2;
        policy_1_St_11_Max = 2;
        nr_1_St_11_Max = false;
        ns_1_St_11_Max_1 = true;
        ns_1_St_11_Max_2 = true;
        ns_1_St_11_Max_3 = true;
        v_290 = lamp_1_St_11_Max;
        v_295 = pers_1_St_11_Max;
        v_300 = policy_1_St_11_Max;
        v_320 = nr_1_St_11_Max;
        v_305 = ns_1_St_11_Max_1;
        v_306 = ns_1_St_11_Max_2;
        v_307 = ns_1_St_11_Max_3;
      } else {
        lamp_1_St_11_Max_Up = 0;
        v_290 = lamp_1_St_11_Max_Up;
        pers_1_St_11_Max_Up = 0;
        v_295 = pers_1_St_11_Max_Up;
        policy_1_St_11_Max_Up = 5;
        v_300 = policy_1_St_11_Max_Up;
        nr_1_St_11_Max_Up = false;
        v_320 = nr_1_St_11_Max_Up;
        ns_1_St_11_Max_Up_1 = true;
        v_305 = ns_1_St_11_Max_Up_1;
        ns_1_St_11_Max_Up_2 = true;
        v_306 = ns_1_St_11_Max_Up_2;
        ns_1_St_11_Max_Up_3 = false;
        v_307 = ns_1_St_11_Max_Up_3;
      };
      v_292 = v_290;
      v_297 = v_295;
      v_302 = v_300;
      v_314 = v_305;
      v_315 = v_306;
      v_316 = v_307;
      v_322 = v_320;
      if (ck_11_3_1_1) {
        if (ns_1_St_11_Max_1) {
          ns_1_St_11_Max_2_1 = ns_1_St_11_Max_2;
          if (ns_1_St_11_Max_2_1) {
            ns_1_St_11_Max_3_1_1 = ns_1_St_11_Max_3;
          } else {
            ns_1_St_11_Max_3_1_0 = ns_1_St_11_Max_3;
          };
        } else {
          ns_1_St_11_Max_2_0 = ns_1_St_11_Max_2;
          if (ns_1_St_11_Max_2_0) {
            ns_1_St_11_Max_3_0_1 = ns_1_St_11_Max_3;
          } else {
            ns_1_St_11_Max_3_0_0 = ns_1_St_11_Max_3;
          };
        };
      } else {
        if (ns_1_St_11_Max_Up_1) {
          ns_1_St_11_Max_Up_2_1 = ns_1_St_11_Max_Up_2;
          if (ns_1_St_11_Max_Up_2_1) {
            ns_1_St_11_Max_Up_3_1_1 = ns_1_St_11_Max_Up_3;
          } else {
            ns_1_St_11_Max_Up_3_1_0 = ns_1_St_11_Max_Up_3;
          };
        } else {
          ns_1_St_11_Max_Up_2_0 = ns_1_St_11_Max_Up_2;
          if (ns_1_St_11_Max_Up_2_0) {
            ns_1_St_11_Max_Up_3_0_1 = ns_1_St_11_Max_Up_3;
          } else {
            ns_1_St_11_Max_Up_3_0_0 = ns_1_St_11_Max_Up_3;
          };
        };
      };
    } else {
      ck_11_3_1_0 = ck_11_3;
      if (ck_11_3_1_0) {
        v_291 = 0;
        v_296 = 0;
        v_301 = 0;
        v_321 = true;
        v_308 = true;
        v_309 = true;
        v_310 = true;
      } else {
        lamp_1_St_11_Min = 1;
        v_291 = lamp_1_St_11_Min;
        pers_1_St_11_Min = 1;
        v_296 = pers_1_St_11_Min;
        policy_1_St_11_Min = 1;
        v_301 = policy_1_St_11_Min;
        nr_1_St_11_Min = false;
        v_321 = nr_1_St_11_Min;
        ns_1_St_11_Min_1 = true;
        v_308 = ns_1_St_11_Min_1;
        ns_1_St_11_Min_2 = false;
        v_309 = ns_1_St_11_Min_2;
        ns_1_St_11_Min_3 = false;
        v_310 = ns_1_St_11_Min_3;
        if (ns_1_St_11_Min_1) {
          ns_1_St_11_Min_2_1 = ns_1_St_11_Min_2;
          if (ns_1_St_11_Min_2_1) {
            ns_1_St_11_Min_3_1_1 = ns_1_St_11_Min_3;
          } else {
            ns_1_St_11_Min_3_1_0 = ns_1_St_11_Min_3;
          };
        } else {
          ns_1_St_11_Min_2_0 = ns_1_St_11_Min_2;
          if (ns_1_St_11_Min_2_0) {
            ns_1_St_11_Min_3_0_1 = ns_1_St_11_Min_3;
          } else {
            ns_1_St_11_Min_3_0_0 = ns_1_St_11_Min_3;
          };
        };
      };
      v_292 = v_291;
      v_297 = v_296;
      v_302 = v_301;
      v_314 = v_308;
      v_315 = v_309;
      v_316 = v_310;
      v_322 = v_321;
    };
    lamp_1 = v_292;
    pers_1 = v_297;
    policy_1 = v_302;
    ns_1_1 = v_314;
    ns_1_2 = v_315;
    ns_1_3 = v_316;
    nr_1 = v_322;
  } else {
    ck_11_2_0 = ck_11_2;
    if (ck_11_2_0) {
      ck_11_3_0_1 = ck_11_3;
      v_294 = 0;
      v_299 = 0;
      v_304 = 0;
      v_317 = true;
      v_318 = true;
      v_319 = true;
      v_324 = true;
    } else {
      ck_11_3_0_0 = ck_11_3;
      if (ck_11_3_0_0) {
        lamp_1_St_11_Off = 0;
        pers_1_St_11_Off = 0;
        policy_1_St_11_Off = 0;
        nr_1_St_11_Off = false;
        ns_1_St_11_Off_1 = false;
        ns_1_St_11_Off_2 = false;
        ns_1_St_11_Off_3 = true;
        v_293 = lamp_1_St_11_Off;
        v_298 = pers_1_St_11_Off;
        v_303 = policy_1_St_11_Off;
        v_323 = nr_1_St_11_Off;
        v_311 = ns_1_St_11_Off_1;
        v_312 = ns_1_St_11_Off_2;
        v_313 = ns_1_St_11_Off_3;
      } else {
        lamp_1_St_11_Off_Up = 0;
        v_293 = lamp_1_St_11_Off_Up;
        pers_1_St_11_Off_Up = 0;
        v_298 = pers_1_St_11_Off_Up;
        policy_1_St_11_Off_Up = 4;
        v_303 = policy_1_St_11_Off_Up;
        nr_1_St_11_Off_Up = false;
        v_323 = nr_1_St_11_Off_Up;
        ns_1_St_11_Off_Up_1 = false;
        v_311 = ns_1_St_11_Off_Up_1;
        ns_1_St_11_Off_Up_2 = false;
        v_312 = ns_1_St_11_Off_Up_2;
        ns_1_St_11_Off_Up_3 = false;
        v_313 = ns_1_St_11_Off_Up_3;
      };
      v_294 = v_293;
      v_299 = v_298;
      v_304 = v_303;
      v_317 = v_311;
      v_318 = v_312;
      v_319 = v_313;
      v_324 = v_323;
    };
    lamp_1 = v_294;
    pers_1 = v_299;
    policy_1 = v_304;
    ns_1_1 = v_317;
    ns_1_2 = v_318;
    ns_1_3 = v_319;
    nr_1 = v_324;
  };
  _out->policy = policy_1;
  _out->pers = pers_1;
  _out->lamp = lamp_1;
  if (ns_1_1) {
    ns_1_2_1 = ns_1_2;
    if (ns_1_2_1) {
      ns_1_3_1_1 = ns_1_3;
    } else {
      ns_1_3_1_0 = ns_1_3;
    };
  } else {
    ns_1_2_0 = ns_1_2;
    if (ns_1_2_0) {
      ns_1_3_0_1 = ns_1_3;
    } else {
      ns_1_3_0_0 = ns_1_3;
    };
  };
  if (!(ck_11_1)) {
    if (!(ck_11_2_0)) {
      if (ck_11_3_0_0) {
        if (ns_1_St_11_Off_1) {
          ns_1_St_11_Off_2_1 = ns_1_St_11_Off_2;
          if (ns_1_St_11_Off_2_1) {
            ns_1_St_11_Off_3_1_1 = ns_1_St_11_Off_3;
          } else {
            ns_1_St_11_Off_3_1_0 = ns_1_St_11_Off_3;
          };
        } else {
          ns_1_St_11_Off_2_0 = ns_1_St_11_Off_2;
          if (ns_1_St_11_Off_2_0) {
            ns_1_St_11_Off_3_0_1 = ns_1_St_11_Off_3;
          } else {
            ns_1_St_11_Off_3_0_0 = ns_1_St_11_Off_3;
          };
        };
      } else {
        if (ns_1_St_11_Off_Up_1) {
          ns_1_St_11_Off_Up_2_1 = ns_1_St_11_Off_Up_2;
          if (ns_1_St_11_Off_Up_2_1) {
            ns_1_St_11_Off_Up_3_1_1 = ns_1_St_11_Off_Up_3;
          } else {
            ns_1_St_11_Off_Up_3_1_0 = ns_1_St_11_Off_Up_3;
          };
        } else {
          ns_1_St_11_Off_Up_2_0 = ns_1_St_11_Off_Up_2;
          if (ns_1_St_11_Off_Up_2_0) {
            ns_1_St_11_Off_Up_3_0_1 = ns_1_St_11_Off_Up_3;
          } else {
            ns_1_St_11_Off_Up_3_0_0 = ns_1_St_11_Off_Up_3;
          };
        };
      };
    };
  };
  if (s_1_1) {
    s_1_2_1 = s_1_2;
    if (s_1_2_1) {
      s_1_3_1_1 = s_1_3;
    } else {
      s_1_3_1_0 = s_1_3;
    };
  } else {
    s_1_2_0 = s_1_2;
    if (s_1_2_0) {
      s_1_3_0_1 = s_1_3;
    } else {
      s_1_3_0_0 = s_1_3;
    };
  };
  if (!(ck_1)) {
    if (!(ck_2_0)) {
      if (ck_3_0_0) {
        if (s_1_St_11_Off_1) {
          s_1_St_11_Off_2_1 = s_1_St_11_Off_2;
          if (s_1_St_11_Off_2_1) {
            s_1_St_11_Off_3_1_1 = s_1_St_11_Off_3;
          } else {
            s_1_St_11_Off_3_1_0 = s_1_St_11_Off_3;
          };
        } else {
          s_1_St_11_Off_2_0 = s_1_St_11_Off_2;
          if (s_1_St_11_Off_2_0) {
            s_1_St_11_Off_3_0_1 = s_1_St_11_Off_3;
          } else {
            s_1_St_11_Off_3_0_0 = s_1_St_11_Off_3;
          };
        };
      } else {
        if (s_1_St_11_Off_Up_1) {
          s_1_St_11_Off_Up_2_1 = s_1_St_11_Off_Up_2;
          if (s_1_St_11_Off_Up_2_1) {
            s_1_St_11_Off_Up_3_1_1 = s_1_St_11_Off_Up_3;
          } else {
            s_1_St_11_Off_Up_3_1_0 = s_1_St_11_Off_Up_3;
          };
        } else {
          s_1_St_11_Off_Up_2_0 = s_1_St_11_Off_Up_2;
          if (s_1_St_11_Off_Up_2_0) {
            s_1_St_11_Off_Up_3_0_1 = s_1_St_11_Off_Up_3;
          } else {
            s_1_St_11_Off_Up_3_0_0 = s_1_St_11_Off_Up_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->ck_12_1 = ns_1_4;
  self->pnr_1 = nr_1;
  self->v_325 = ns_1_1;
  self->v_326 = ns_1_2;
  self->v_327 = ns_1_3;;
}

void System__ar_failed_reset(System__ar_failed_mem* self) {
  self->pnr = false;
  self->ck_15_1 = false;
  self->pnr_2 = false;
  self->v_356 = false;
  self->v_357 = false;
}

void System__ar_failed_step(int c1, int c2, int falhou, int recuperou,
                            System__ar_failed_out* _out,
                            System__ar_failed_mem* self) {
  
  int nr_St_12_Falha;
  int ns_St_12_Falha_1;
  int failed_St_12_Falha;
  int nr_St_12_Funcionando;
  int ns_St_12_Funcionando_1;
  int failed_St_12_Funcionando;
  int ck_16_1;
  int r_St_12_Falha;
  int s_St_12_Falha_1;
  int r_St_12_Funcionando;
  int s_St_12_Funcionando_1;
  int v_355;
  int v_354;
  int v_353;
  int v_352;
  int v_351;
  int v_350;
  int v_349;
  int v_348;
  int ns_2_St_13_Max_2_0;
  int ns_2_St_13_Max_2_1;
  int ns_2_St_13_Min_2_0;
  int ns_2_St_13_Min_2_1;
  int ns_2_St_13_Off_2_0;
  int ns_2_St_13_Off_2_1;
  int ck_14_2_0;
  int ck_14_2_1;
  int nr_2_St_13_Max;
  int ns_2_St_13_Max_2;
  int ns_2_St_13_Max_1;
  int ar_state_1_St_13_Max;
  int nr_2_St_13_Min;
  int ns_2_St_13_Min_2;
  int ns_2_St_13_Min_1;
  int ar_state_1_St_13_Min;
  int nr_2_St_13_Off;
  int ns_2_St_13_Off_2;
  int ns_2_St_13_Off_1;
  int ar_state_1_St_13_Off;
  int ck_14_2;
  int ck_14_1;
  int v_81_2_0;
  int v_81_2_1;
  int v_82;
  int v_81_2;
  int v_81_1;
  int v_79_2_0;
  int v_79_2_1;
  int v_80;
  int v_79_2;
  int v_79_1;
  int v_78;
  int v_76_2_0;
  int v_76_2_1;
  int v_77;
  int v_76_2;
  int v_76_1;
  int v_75;
  int v;
  int v_363;
  int v_362;
  int v_361;
  int v_360;
  int v_359;
  int v_358;
  int s_2_St_13_Max_2_0;
  int s_2_St_13_Max_2_1;
  int s_2_St_13_Min_2_0;
  int s_2_St_13_Min_2_1;
  int s_2_St_13_Off_2_0;
  int s_2_St_13_Off_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_2_St_13_Max;
  int s_2_St_13_Max_2;
  int s_2_St_13_Max_1;
  int r_2_St_13_Min;
  int s_2_St_13_Min_2;
  int s_2_St_13_Min_1;
  int r_2_St_13_Off;
  int s_2_St_13_Off_2;
  int s_2_St_13_Off_1;
  int ck_2;
  int ck_1;
  int s_2_2_0;
  int s_2_2_1;
  int ns_2_2_0;
  int ns_2_2_1;
  int s_2_2;
  int s_2_1;
  int ns_2_2;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_1;
  int ns_1;
  int r;
  int nr;
  int falhou_2;
  int recuperou_2;
  int failed;
  int c1_2;
  int c2_2;
  int ar_state_1;
  falhou_2 = falhou;
  recuperou_2 = recuperou;
  c1_2 = c1;
  c2_2 = c2;
  ck_1 = self->v_356;
  ck_2 = self->v_357;
  if (self->ck_15_1) {
    if (recuperou_2) {
      r_St_12_Falha = true;
    } else {
      r_St_12_Falha = self->pnr;
    };
    r = r_St_12_Falha;
    if (recuperou_2) {
      s_St_12_Falha_1 = false;
    } else {
      s_St_12_Falha_1 = true;
    };
    s_1 = s_St_12_Falha_1;
  } else {
    if (falhou_2) {
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
    failed_St_12_Falha = true;
    failed = failed_St_12_Falha;
    nr_St_12_Falha = false;
    nr = nr_St_12_Falha;
    ns_St_12_Falha_1 = true;
    ns_1 = ns_St_12_Falha_1;
  } else {
    failed_St_12_Funcionando = false;
    nr_St_12_Funcionando = false;
    ns_St_12_Funcionando_1 = false;
    failed = failed_St_12_Funcionando;
    nr = nr_St_12_Funcionando;
    ns_1 = ns_St_12_Funcionando_1;
  };
  _out->working = failed;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_75 = !(c2_2);
      if (v_75) {
        v_77 = true;
        v_76_1 = false;
        v_76_2 = false;
      } else {
        v_77 = self->pnr_2;
        v_76_1 = true;
        v_76_2 = true;
      };
      v = !(c1_2);
      if (v) {
        r_2_St_13_Max = true;
      } else {
        r_2_St_13_Max = v_77;
      };
      v_362 = r_2_St_13_Max;
      if (v) {
        s_2_St_13_Max_1 = true;
      } else {
        s_2_St_13_Max_1 = v_76_1;
      };
      v_358 = s_2_St_13_Max_1;
      if (v) {
        s_2_St_13_Max_2 = false;
      } else {
        s_2_St_13_Max_2 = v_76_2;
      };
      v_359 = s_2_St_13_Max_2;
    } else {
      if (c2_2) {
        v_80 = true;
        v_79_1 = true;
        v_79_2 = true;
      } else {
        v_80 = self->pnr_2;
        v_79_1 = true;
        v_79_2 = false;
      };
      v_78 = !(c1_2);
      if (v_78) {
        r_2_St_13_Min = true;
        s_2_St_13_Min_1 = false;
        s_2_St_13_Min_2 = false;
      } else {
        r_2_St_13_Min = v_80;
        s_2_St_13_Min_1 = v_79_1;
        s_2_St_13_Min_2 = v_79_2;
      };
      v_362 = r_2_St_13_Min;
      v_358 = s_2_St_13_Min_1;
      v_359 = s_2_St_13_Min_2;
    };
    s_2_1 = v_358;
    s_2_2 = v_359;
    r_2 = v_362;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_363 = true;
      v_360 = true;
      v_361 = true;
    } else {
      if (c2_2) {
        v_82 = true;
      } else {
        v_82 = self->pnr_2;
      };
      if (c1_2) {
        r_2_St_13_Off = true;
      } else {
        r_2_St_13_Off = v_82;
      };
      v_363 = r_2_St_13_Off;
      if (c2_2) {
        v_81_1 = true;
      } else {
        v_81_1 = false;
      };
      if (c1_2) {
        s_2_St_13_Off_1 = true;
      } else {
        s_2_St_13_Off_1 = v_81_1;
      };
      v_360 = s_2_St_13_Off_1;
      if (c2_2) {
        v_81_2 = true;
      } else {
        v_81_2 = false;
      };
      if (c1_2) {
        s_2_St_13_Off_2 = false;
      } else {
        s_2_St_13_Off_2 = v_81_2;
      };
      v_361 = s_2_St_13_Off_2;
      if (v_81_1) {
        v_81_2_1 = v_81_2;
      } else {
        v_81_2_0 = v_81_2;
      };
      if (s_2_St_13_Off_1) {
        s_2_St_13_Off_2_1 = s_2_St_13_Off_2;
      } else {
        s_2_St_13_Off_2_0 = s_2_St_13_Off_2;
      };
    };
    s_2_1 = v_360;
    s_2_2 = v_361;
    r_2 = v_363;
  };
  ck_14_1 = s_2_1;
  ck_14_2 = s_2_2;
  if (ck_14_1) {
    ck_14_2_1 = ck_14_2;
    if (ck_14_2_1) {
      ar_state_1_St_13_Max = 2;
      v_348 = ar_state_1_St_13_Max;
      nr_2_St_13_Max = false;
      v_354 = nr_2_St_13_Max;
      ns_2_St_13_Max_1 = true;
      v_350 = ns_2_St_13_Max_1;
      ns_2_St_13_Max_2 = true;
      v_351 = ns_2_St_13_Max_2;
    } else {
      ar_state_1_St_13_Min = 1;
      nr_2_St_13_Min = false;
      ns_2_St_13_Min_1 = true;
      ns_2_St_13_Min_2 = false;
      v_348 = ar_state_1_St_13_Min;
      v_354 = nr_2_St_13_Min;
      v_350 = ns_2_St_13_Min_1;
      v_351 = ns_2_St_13_Min_2;
    };
    ar_state_1 = v_348;
    ns_2_1 = v_350;
    ns_2_2 = v_351;
    nr_2 = v_354;
  } else {
    ck_14_2_0 = ck_14_2;
    if (ck_14_2_0) {
      v_349 = 0;
      v_355 = true;
      v_352 = true;
      v_353 = true;
    } else {
      ar_state_1_St_13_Off = 0;
      v_349 = ar_state_1_St_13_Off;
      nr_2_St_13_Off = false;
      v_355 = nr_2_St_13_Off;
      ns_2_St_13_Off_1 = false;
      v_352 = ns_2_St_13_Off_1;
      ns_2_St_13_Off_2 = false;
      v_353 = ns_2_St_13_Off_2;
      if (ns_2_St_13_Off_1) {
        ns_2_St_13_Off_2_1 = ns_2_St_13_Off_2;
      } else {
        ns_2_St_13_Off_2_0 = ns_2_St_13_Off_2;
      };
    };
    ar_state_1 = v_349;
    ns_2_1 = v_352;
    ns_2_2 = v_353;
    nr_2 = v_355;
  };
  _out->ar_state = ar_state_1;
  if (ns_2_1) {
    ns_2_2_1 = ns_2_2;
  } else {
    ns_2_2_0 = ns_2_2;
  };
  if (ck_14_1) {
    if (ck_14_2_1) {
      if (ns_2_St_13_Max_1) {
        ns_2_St_13_Max_2_1 = ns_2_St_13_Max_2;
      } else {
        ns_2_St_13_Max_2_0 = ns_2_St_13_Max_2;
      };
    } else {
      if (ns_2_St_13_Min_1) {
        ns_2_St_13_Min_2_1 = ns_2_St_13_Min_2;
      } else {
        ns_2_St_13_Min_2_0 = ns_2_St_13_Min_2;
      };
    };
  };
  if (s_2_1) {
    s_2_2_1 = s_2_2;
  } else {
    s_2_2_0 = s_2_2;
  };
  if (ck_1) {
    if (ck_2_1) {
      if (v_76_1) {
        v_76_2_1 = v_76_2;
      } else {
        v_76_2_0 = v_76_2;
      };
      if (s_2_St_13_Max_1) {
        s_2_St_13_Max_2_1 = s_2_St_13_Max_2;
      } else {
        s_2_St_13_Max_2_0 = s_2_St_13_Max_2;
      };
    } else {
      if (v_79_1) {
        v_79_2_1 = v_79_2;
      } else {
        v_79_2_0 = v_79_2;
      };
      if (s_2_St_13_Min_1) {
        s_2_St_13_Min_2_1 = s_2_St_13_Min_2;
      } else {
        s_2_St_13_Min_2_0 = s_2_St_13_Min_2;
      };
    };
  };
  self->pnr = nr;
  self->ck_15_1 = ns_1;
  self->pnr_2 = nr_2;
  self->v_356 = ns_2_1;
  self->v_357 = ns_2_2;;
}

void System__controller_reset(System__controller_mem* self) {
  self->pnr = false;
  self->ck_38_1 = false;
  self->pnr_3 = false;
  self->v_399 = false;
  self->v_400 = false;
  self->v_401 = true;
  self->pnr_4 = false;
  self->ck_34_1 = false;
  self->pnr_5 = false;
  self->v_430 = false;
  self->v_431 = false;
  self->pnr_6 = false;
  self->ck_30_1 = true;
  self->pnr_7 = false;
  self->ck_28_1 = true;
  self->pnr_8 = false;
  self->ck_26_1 = true;
  self->pnr_9 = false;
  self->ck_24_1 = true;
  self->pnr_10 = false;
  self->ck_22_1 = true;
  self->pnr_11 = false;
  self->ck_20_1 = true;
  self->pnr_12 = false;
  self->ck_18_1 = true;
  self->pnr_13 = false;
  self->ck_1 = true;
}

void System__controller_step(int up, int down, int shift_turno,
                             int abre_porta, int p_arrived, int p1_arrived,
                             int ar_failed, int ar_recovered, int l_failed,
                             int l_recovered, System__controller_out* _out,
                             System__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
  int nr_St_14_Falha;
  int ns_St_14_Falha_1;
  int failed_1_St_14_Falha;
  int nr_St_14_Funcionando;
  int ns_St_14_Funcionando_1;
  int failed_1_St_14_Funcionando;
  int ck_39_1;
  int r_St_14_Falha;
  int s_St_14_Falha_1;
  int r_St_14_Funcionando;
  int s_St_14_Funcionando_1;
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
  int v_388;
  int v_387;
  int v_386;
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
  int ns_3_St_15_Max_Up_2_0;
  int ns_3_St_15_Max_Up_3_0_0;
  int ns_3_St_15_Max_Up_3_0_1;
  int ns_3_St_15_Max_Up_2_1;
  int ns_3_St_15_Max_Up_3_1_0;
  int ns_3_St_15_Max_Up_3_1_1;
  int ns_3_St_15_Max_2_0;
  int ns_3_St_15_Max_3_0_0;
  int ns_3_St_15_Max_3_0_1;
  int ns_3_St_15_Max_2_1;
  int ns_3_St_15_Max_3_1_0;
  int ns_3_St_15_Max_3_1_1;
  int ns_3_St_15_Min_2_0;
  int ns_3_St_15_Min_3_0_0;
  int ns_3_St_15_Min_3_0_1;
  int ns_3_St_15_Min_2_1;
  int ns_3_St_15_Min_3_1_0;
  int ns_3_St_15_Min_3_1_1;
  int ns_3_St_15_Off_Up_2_0;
  int ns_3_St_15_Off_Up_3_0_0;
  int ns_3_St_15_Off_Up_3_0_1;
  int ns_3_St_15_Off_Up_2_1;
  int ns_3_St_15_Off_Up_3_1_0;
  int ns_3_St_15_Off_Up_3_1_1;
  int ns_3_St_15_Off_2_0;
  int ns_3_St_15_Off_3_0_0;
  int ns_3_St_15_Off_3_0_1;
  int ns_3_St_15_Off_2_1;
  int ns_3_St_15_Off_3_1_0;
  int ns_3_St_15_Off_3_1_1;
  int ck_37_2_0;
  int ck_37_3_0_0;
  int ck_37_3_0_1;
  int ck_37_2_1;
  int ck_37_3_1_0;
  int ck_37_3_1_1;
  int nr_3_St_15_Max_Up;
  int ns_3_St_15_Max_Up_3;
  int ns_3_St_15_Max_Up_2;
  int ns_3_St_15_Max_Up_1;
  int policy_1_St_15_Max_Up;
  int pers_1_St_15_Max_Up;
  int lamp_1_St_15_Max_Up;
  int nr_3_St_15_Max;
  int ns_3_St_15_Max_3;
  int ns_3_St_15_Max_2;
  int ns_3_St_15_Max_1;
  int policy_1_St_15_Max;
  int pers_1_St_15_Max;
  int lamp_1_St_15_Max;
  int nr_3_St_15_Min;
  int ns_3_St_15_Min_3;
  int ns_3_St_15_Min_2;
  int ns_3_St_15_Min_1;
  int policy_1_St_15_Min;
  int pers_1_St_15_Min;
  int lamp_1_St_15_Min;
  int nr_3_St_15_Off_Up;
  int ns_3_St_15_Off_Up_3;
  int ns_3_St_15_Off_Up_2;
  int ns_3_St_15_Off_Up_1;
  int policy_1_St_15_Off_Up;
  int pers_1_St_15_Off_Up;
  int lamp_1_St_15_Off_Up;
  int nr_3_St_15_Off;
  int ns_3_St_15_Off_3;
  int ns_3_St_15_Off_2;
  int ns_3_St_15_Off_1;
  int policy_1_St_15_Off;
  int pers_1_St_15_Off;
  int lamp_1_St_15_Off;
  int ck_37_3;
  int ck_37_2;
  int ck_37_1;
  int v_214_2_0;
  int v_214_3_0_0;
  int v_214_3_0_1;
  int v_214_2_1;
  int v_214_3_1_0;
  int v_214_3_1_1;
  int v_215;
  int v_214_3;
  int v_214_2;
  int v_214_1;
  int v_213;
  int v_212;
  int v_211;
  int v_210;
  int v_208_2_0;
  int v_208_3_0_0;
  int v_208_3_0_1;
  int v_208_2_1;
  int v_208_3_1_0;
  int v_208_3_1_1;
  int v_209;
  int v_208_3;
  int v_208_2;
  int v_208_1;
  int v_207;
  int v_206;
  int v_205;
  int v_204;
  int v_203;
  int v_201_2_0;
  int v_201_3_0_0;
  int v_201_3_0_1;
  int v_201_2_1;
  int v_201_3_1_0;
  int v_201_3_1_1;
  int v_202;
  int v_201_3;
  int v_201_2;
  int v_201_1;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
  int v_195;
  int v_193_2_0;
  int v_193_3_0_0;
  int v_193_3_0_1;
  int v_193_2_1;
  int v_193_3_1_0;
  int v_193_3_1_1;
  int v_194;
  int v_193_3;
  int v_193_2;
  int v_193_1;
  int v_192;
  int v_191;
  int v_190;
  int v_189;
  int v_187_2_0;
  int v_187_3_0_0;
  int v_187_3_0_1;
  int v_187_2_1;
  int v_187_3_1_0;
  int v_187_3_1_1;
  int v_188;
  int v_187_3;
  int v_187_2;
  int v_187_1;
  int v_186;
  int v_185;
  int v_184;
  int v_183;
  int v_182;
  int v_421;
  int v_420;
  int v_419;
  int v_418;
  int v_417;
  int v_416;
  int v_415;
  int v_414;
  int v_413;
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
  int s_3_St_15_Max_Up_2_0;
  int s_3_St_15_Max_Up_3_0_0;
  int s_3_St_15_Max_Up_3_0_1;
  int s_3_St_15_Max_Up_2_1;
  int s_3_St_15_Max_Up_3_1_0;
  int s_3_St_15_Max_Up_3_1_1;
  int s_3_St_15_Max_2_0;
  int s_3_St_15_Max_3_0_0;
  int s_3_St_15_Max_3_0_1;
  int s_3_St_15_Max_2_1;
  int s_3_St_15_Max_3_1_0;
  int s_3_St_15_Max_3_1_1;
  int s_3_St_15_Min_2_0;
  int s_3_St_15_Min_3_0_0;
  int s_3_St_15_Min_3_0_1;
  int s_3_St_15_Min_2_1;
  int s_3_St_15_Min_3_1_0;
  int s_3_St_15_Min_3_1_1;
  int s_3_St_15_Off_Up_2_0;
  int s_3_St_15_Off_Up_3_0_0;
  int s_3_St_15_Off_Up_3_0_1;
  int s_3_St_15_Off_Up_2_1;
  int s_3_St_15_Off_Up_3_1_0;
  int s_3_St_15_Off_Up_3_1_1;
  int s_3_St_15_Off_2_0;
  int s_3_St_15_Off_3_0_0;
  int s_3_St_15_Off_3_0_1;
  int s_3_St_15_Off_2_1;
  int s_3_St_15_Off_3_1_0;
  int s_3_St_15_Off_3_1_1;
  int ck_36_2_0;
  int ck_36_3_0_0;
  int ck_36_3_0_1;
  int ck_36_2_1;
  int ck_36_3_1_0;
  int ck_36_3_1_1;
  int r_3_St_15_Max_Up;
  int s_3_St_15_Max_Up_3;
  int s_3_St_15_Max_Up_2;
  int s_3_St_15_Max_Up_1;
  int r_3_St_15_Max;
  int s_3_St_15_Max_3;
  int s_3_St_15_Max_2;
  int s_3_St_15_Max_1;
  int r_3_St_15_Min;
  int s_3_St_15_Min_3;
  int s_3_St_15_Min_2;
  int s_3_St_15_Min_1;
  int r_3_St_15_Off_Up;
  int s_3_St_15_Off_Up_3;
  int s_3_St_15_Off_Up_2;
  int s_3_St_15_Off_Up_1;
  int r_3_St_15_Off;
  int s_3_St_15_Off_3;
  int s_3_St_15_Off_2;
  int s_3_St_15_Off_1;
  int ck_36_3;
  int ck_36_2;
  int ck_36_1;
  int nr_4_St_16_Falha;
  int ns_4_St_16_Falha_1;
  int failed_St_16_Falha;
  int nr_4_St_16_Funcionando;
  int ns_4_St_16_Funcionando_1;
  int failed_St_16_Funcionando;
  int ck_35_1;
  int r_4_St_16_Falha;
  int s_4_St_16_Falha_1;
  int r_4_St_16_Funcionando;
  int s_4_St_16_Funcionando_1;
  int v_429;
  int v_428;
  int v_427;
  int v_426;
  int v_425;
  int v_424;
  int v_423;
  int v_422;
  int ns_5_St_17_Max_2_0;
  int ns_5_St_17_Max_2_1;
  int ns_5_St_17_Min_2_0;
  int ns_5_St_17_Min_2_1;
  int ns_5_St_17_Off_2_0;
  int ns_5_St_17_Off_2_1;
  int ck_33_2_0;
  int ck_33_2_1;
  int nr_5_St_17_Max;
  int ns_5_St_17_Max_2;
  int ns_5_St_17_Max_1;
  int ar_state_1_St_17_Max;
  int nr_5_St_17_Min;
  int ns_5_St_17_Min_2;
  int ns_5_St_17_Min_1;
  int ar_state_1_St_17_Min;
  int nr_5_St_17_Off;
  int ns_5_St_17_Off_2;
  int ns_5_St_17_Off_1;
  int ar_state_1_St_17_Off;
  int ck_33_2;
  int ck_33_1;
  int v_180_2_0;
  int v_180_2_1;
  int v_181;
  int v_180_2;
  int v_180_1;
  int v_178_2_0;
  int v_178_2_1;
  int v_179;
  int v_178_2;
  int v_178_1;
  int v_177;
  int v_175_2_0;
  int v_175_2_1;
  int v_176;
  int v_175_2;
  int v_175_1;
  int v_174;
  int v_173;
  int v_437;
  int v_436;
  int v_435;
  int v_434;
  int v_433;
  int v_432;
  int s_5_St_17_Max_2_0;
  int s_5_St_17_Max_2_1;
  int s_5_St_17_Min_2_0;
  int s_5_St_17_Min_2_1;
  int s_5_St_17_Off_2_0;
  int s_5_St_17_Off_2_1;
  int ck_32_2_0;
  int ck_32_2_1;
  int r_5_St_17_Max;
  int s_5_St_17_Max_2;
  int s_5_St_17_Max_1;
  int r_5_St_17_Min;
  int s_5_St_17_Min_2;
  int s_5_St_17_Min_1;
  int r_5_St_17_Off;
  int s_5_St_17_Off_2;
  int s_5_St_17_Off_1;
  int ck_32_2;
  int ck_32_1;
  int nr_6_St_18_Open;
  int ns_6_St_18_Open_1;
  int w_open_1_St_18_Open;
  int nr_6_St_18_Closed;
  int ns_6_St_18_Closed_1;
  int w_open_1_St_18_Closed;
  int ck_31_1;
  int v_172;
  int r_6_St_18_Open;
  int s_6_St_18_Open_1;
  int r_6_St_18_Closed;
  int s_6_St_18_Closed_1;
  int nr_7_St_19_On;
  int ns_7_St_19_On_1;
  int pc_on_1_St_19_On;
  int nr_7_St_19_Off;
  int ns_7_St_19_Off_1;
  int pc_on_1_St_19_Off;
  int ck_29_1;
  int v_171;
  int r_7_St_19_On;
  int s_7_St_19_On_1;
  int r_7_St_19_Off;
  int s_7_St_19_Off_1;
  int nr_8_St_20_Preent;
  int ns_8_St_20_Preent_1;
  int presence_2_St_20_Preent;
  int nr_8_St_20_Not_Present;
  int ns_8_St_20_Not_Present_1;
  int presence_2_St_20_Not_Present;
  int ck_27_1;
  int r_8_St_20_Preent;
  int s_8_St_20_Preent_1;
  int r_8_St_20_Not_Present;
  int s_8_St_20_Not_Present_1;
  int nr_9_St_21_Preent;
  int ns_9_St_21_Preent_1;
  int presence_1_St_21_Preent;
  int nr_9_St_21_Not_Present;
  int ns_9_St_21_Not_Present_1;
  int presence_1_St_21_Not_Present;
  int ck_25_1;
  int r_9_St_21_Preent;
  int s_9_St_21_Preent_1;
  int r_9_St_21_Not_Present;
  int s_9_St_21_Not_Present_1;
  int nr_10_St_22_Open;
  int ns_10_St_22_Open_1;
  int arm_open_1_St_22_Open;
  int nr_10_St_22_Locked;
  int ns_10_St_22_Locked_1;
  int arm_open_1_St_22_Locked;
  int ck_23_1;
  int v_170;
  int r_10_St_22_Open;
  int s_10_St_22_Open_1;
  int r_10_St_22_Locked;
  int s_10_St_22_Locked_1;
  int nr_11_St_23_On;
  int ns_11_St_23_On_1;
  int r_on_St_23_On;
  int nr_11_St_23_Off;
  int ns_11_St_23_Off_1;
  int r_on_St_23_Off;
  int ck_21_1;
  int v_169;
  int r_11_St_23_On;
  int s_11_St_23_On_1;
  int r_11_St_23_Off;
  int s_11_St_23_Off_1;
  int nr_12_St_24_Open;
  int ns_12_St_24_Open_1;
  int porta_open_St_24_Open;
  int nr_12_St_24_Closed;
  int ns_12_St_24_Closed_1;
  int porta_open_St_24_Closed;
  int ck_19_1;
  int v_168;
  int r_12_St_24_Open;
  int s_12_St_24_Open_1;
  int r_12_St_24_Closed;
  int s_12_St_24_Closed_1;
  int nr_13_St_25_Noite;
  int ns_13_St_25_Noite_1;
  int turno_St_25_Noite;
  int nr_13_St_25_Dia;
  int ns_13_St_25_Dia_1;
  int turno_St_25_Dia;
  int ck_17_1;
  int r_13_St_25_Noite;
  int s_13_St_25_Noite_1;
  int r_13_St_25_Dia;
  int s_13_St_25_Dia_1;
  int s_5_2_0;
  int s_5_2_1;
  int ns_5_2_0;
  int ns_5_2_1;
  int s_3_2_0;
  int s_3_3_0_0;
  int s_3_3_0_1;
  int s_3_2_1;
  int s_3_3_1_0;
  int s_3_3_1_1;
  int ns_3_2_0;
  int ns_3_3_0_0;
  int ns_3_3_0_1;
  int ns_3_2_1;
  int ns_3_3_1_0;
  int ns_3_3_1_1;
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
  int s_3_3;
  int s_3_2;
  int s_3_1;
  int ns_3_3;
  int ns_3_2;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_1;
  int ns_1;
  int r;
  int nr;
  int c1_3;
  int c2_3;
  int c_up;
  int c_down;
  int up_2;
  int down_2;
  int falhou_3;
  int recuperou_3;
  int ar_fail_2;
  int shift_2;
  int falhou_1;
  int recuperou_1;
  int failed_1;
  int c1_1;
  int c2_1;
  int c_up_1;
  int c_down_1;
  int up_1;
  int down_1;
  int ar_fail_1;
  int shift_1;
  int lamp_1;
  int pers_1;
  int policy_1;
  int failed_2;
  int lamp_2;
  int pers_2;
  int policy;
  int c1;
  int c2;
  int falhou;
  int recuperou;
  int falhou_2;
  int recuperou_2;
  int failed;
  int c1_2;
  int c2_2;
  int ar_state_1;
  int ar_state_2;
  int working;
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
  int rule7;
  int rule6;
  int rule5;
  int rule4;
  int rule3;
  int rule2;
  int rule1_5;
  int rule1;
  int rule0;
  int v;
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
  int cdown;
  int cup;
  int cl2;
  int cl1;
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
  up_2 = up;
  up_1 = up_2;
  down_2 = down;
  down_1 = down_2;
  falhou_3 = l_failed;
  falhou_1 = falhou_3;
  recuperou_3 = l_recovered;
  recuperou_1 = recuperou_3;
  ck_36_1 = self->v_399;
  ck_36_2 = self->v_400;
  ck_36_3 = self->v_401;
  falhou = ar_failed;
  falhou_2 = falhou;
  recuperou = ar_recovered;
  recuperou_2 = recuperou;
  ck_32_1 = self->v_430;
  ck_32_2 = self->v_431;
  arrived_1 = p1_arrived;
  arrived = p_arrived;
  push = abre_porta;
  shift = shift_turno;
  Controller_controller__controller_controller_step(up, down, shift_turno,
                                                    abre_porta, p_arrived,
                                                    p1_arrived, ar_failed,
                                                    ar_recovered, l_failed,
                                                    l_recovered, self->ck_1,
                                                    self->pnr_13,
                                                    self->ck_18_1,
                                                    self->pnr_12,
                                                    self->ck_20_1,
                                                    self->pnr_11,
                                                    self->ck_22_1,
                                                    self->pnr_10,
                                                    self->ck_24_1,
                                                    self->pnr_9,
                                                    self->ck_26_1,
                                                    self->pnr_8,
                                                    self->ck_28_1,
                                                    self->pnr_7,
                                                    self->ck_30_1,
                                                    self->pnr_6, self->v_431,
                                                    self->v_430, self->pnr_5,
                                                    self->ck_34_1,
                                                    self->pnr_4, self->v_401,
                                                    self->v_400, self->v_399,
                                                    self->pnr_3,
                                                    self->ck_38_1, self->pnr,
                                                    true, true, true, true,
                                                    true, true, true, true,
                                                    true, true, true, true,
                                                    true, true,
                                                    &Controller_controller__controller_controller_out_st);
  cdown = Controller_controller__controller_controller_out_st.controller_cdown;
  cup = Controller_controller__controller_controller_out_st.controller_cup;
  cl2 = Controller_controller__controller_controller_out_st.controller_cl2;
  cl1 = Controller_controller__controller_controller_out_st.controller_cl1;
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
  c1_3 = cl1;
  c1_1 = c1_3;
  c2_3 = cl2;
  c2_1 = c2_3;
  c_up = cup;
  c_up_1 = c_up;
  c_down = cdown;
  c_down_1 = c_down;
  c1 = c_ar1;
  c1_2 = c1;
  c2 = c_ar2;
  c2_2 = c2;
  c_3 = c_jan;
  c_2 = c_pc;
  c_1 = c_arm;
  c = c_rot;
  c_porta_1 = c_porta;
  if (self->ck_38_1) {
    if (recuperou_1) {
      r_St_14_Falha = true;
    } else {
      r_St_14_Falha = self->pnr;
    };
    r = r_St_14_Falha;
    if (recuperou_1) {
      s_St_14_Falha_1 = false;
    } else {
      s_St_14_Falha_1 = true;
    };
    s_1 = s_St_14_Falha_1;
  } else {
    if (falhou_1) {
      r_St_14_Funcionando = true;
      s_St_14_Funcionando_1 = true;
    } else {
      r_St_14_Funcionando = self->pnr;
      s_St_14_Funcionando_1 = false;
    };
    r = r_St_14_Funcionando;
    s_1 = s_St_14_Funcionando_1;
  };
  ck_39_1 = s_1;
  if (ck_39_1) {
    failed_1_St_14_Falha = true;
    failed_1 = failed_1_St_14_Falha;
    nr_St_14_Falha = false;
    nr = nr_St_14_Falha;
    ns_St_14_Falha_1 = true;
    ns_1 = ns_St_14_Falha_1;
  } else {
    failed_1_St_14_Funcionando = false;
    nr_St_14_Funcionando = false;
    ns_St_14_Funcionando_1 = false;
    failed_1 = failed_1_St_14_Funcionando;
    nr = nr_St_14_Funcionando;
    ns_1 = ns_St_14_Funcionando_1;
  };
  failed_2 = failed_1;
  _out->l_fail = failed_2;
  v_149 = !(_out->l_fail);
  if (ck_36_1) {
    ck_36_2_1 = ck_36_2;
    if (ck_36_2_1) {
      ck_36_3_1_1 = ck_36_3;
      if (ck_36_3_1_1) {
        v_192 = !(c2_1);
        if (v_192) {
          v_194 = true;
          v_193_1 = false;
          v_193_2 = false;
          v_193_3 = true;
        } else {
          v_194 = self->pnr_3;
          v_193_1 = true;
          v_193_2 = true;
          v_193_3 = true;
        };
        v_190 = (down_1&&c_down_1);
        v_189 = !(c1_1);
        v_191 = (v_189||v_190);
        if (v_191) {
          r_3_St_15_Max = true;
          s_3_St_15_Max_1 = true;
          s_3_St_15_Max_2 = false;
          s_3_St_15_Max_3 = false;
        } else {
          r_3_St_15_Max = v_194;
          s_3_St_15_Max_1 = v_193_1;
          s_3_St_15_Max_2 = v_193_2;
          s_3_St_15_Max_3 = v_193_3;
        };
        if (v_193_1) {
          v_193_2_1 = v_193_2;
          if (v_193_2_1) {
            v_193_3_1_1 = v_193_3;
          } else {
            v_193_3_1_0 = v_193_3;
          };
        } else {
          v_193_2_0 = v_193_2;
          if (v_193_2_0) {
            v_193_3_0_1 = v_193_3;
          } else {
            v_193_3_0_0 = v_193_3;
          };
        };
        if (s_3_St_15_Max_1) {
          s_3_St_15_Max_2_1 = s_3_St_15_Max_2;
          if (s_3_St_15_Max_2_1) {
            s_3_St_15_Max_3_1_1 = s_3_St_15_Max_3;
          } else {
            s_3_St_15_Max_3_1_0 = s_3_St_15_Max_3;
          };
        } else {
          s_3_St_15_Max_2_0 = s_3_St_15_Max_2;
          if (s_3_St_15_Max_2_0) {
            s_3_St_15_Max_3_0_1 = s_3_St_15_Max_3;
          } else {
            s_3_St_15_Max_3_0_0 = s_3_St_15_Max_3;
          };
        };
      };
    } else {
      ck_36_3_1_0 = ck_36_3;
      if (ck_36_3_1_0) {
        v_418 = true;
        v_405 = true;
        v_406 = true;
        v_407 = true;
      } else {
        v_199 = (up_1&&c_up_1);
        v_198 = !(c2_1);
        v_200 = (v_198||v_199);
        if (v_200) {
          v_202 = true;
          v_201_1 = true;
          v_201_2 = true;
          v_201_3 = true;
        } else {
          v_202 = self->pnr_3;
          v_201_1 = true;
          v_201_2 = false;
          v_201_3 = false;
        };
        v_196 = (down_1&&c_down_1);
        v_195 = !(c1_1);
        v_197 = (v_195||v_196);
        if (v_197) {
          r_3_St_15_Min = true;
        } else {
          r_3_St_15_Min = v_202;
        };
        v_418 = r_3_St_15_Min;
        if (v_197) {
          s_3_St_15_Min_1 = false;
        } else {
          s_3_St_15_Min_1 = v_201_1;
        };
        v_405 = s_3_St_15_Min_1;
        if (v_197) {
          s_3_St_15_Min_2 = false;
        } else {
          s_3_St_15_Min_2 = v_201_2;
        };
        v_406 = s_3_St_15_Min_2;
        if (v_197) {
          s_3_St_15_Min_3 = true;
        } else {
          s_3_St_15_Min_3 = v_201_3;
        };
        v_407 = s_3_St_15_Min_3;
        if (v_201_1) {
          v_201_2_1 = v_201_2;
          if (v_201_2_1) {
            v_201_3_1_1 = v_201_3;
          } else {
            v_201_3_1_0 = v_201_3;
          };
        } else {
          v_201_2_0 = v_201_2;
          if (v_201_2_0) {
            v_201_3_0_1 = v_201_3;
          } else {
            v_201_3_0_0 = v_201_3;
          };
        };
        if (s_3_St_15_Min_1) {
          s_3_St_15_Min_2_1 = s_3_St_15_Min_2;
          if (s_3_St_15_Min_2_1) {
            s_3_St_15_Min_3_1_1 = s_3_St_15_Min_3;
          } else {
            s_3_St_15_Min_3_1_0 = s_3_St_15_Min_3;
          };
        } else {
          s_3_St_15_Min_2_0 = s_3_St_15_Min_2;
          if (s_3_St_15_Min_2_0) {
            s_3_St_15_Min_3_0_1 = s_3_St_15_Min_3;
          } else {
            s_3_St_15_Min_3_0_0 = s_3_St_15_Min_3;
          };
        };
      };
    };
  } else {
    ck_36_2_0 = ck_36_2;
    if (ck_36_2_0) {
      ck_36_3_0_1 = ck_36_3;
    } else {
      ck_36_3_0_0 = ck_36_3;
      if (ck_36_3_0_0) {
        v_213 = !(c2_1);
        if (v_213) {
          v_215 = true;
          v_214_1 = true;
          v_214_2 = true;
          v_214_3 = true;
        } else {
          v_215 = self->pnr_3;
          v_214_1 = false;
          v_214_2 = false;
          v_214_3 = true;
        };
        v_211 = (up_1&&c_up_1);
        v_210 = !(c1_1);
        v_212 = (v_210||v_211);
        if (v_212) {
          r_3_St_15_Off = true;
          s_3_St_15_Off_1 = true;
          s_3_St_15_Off_2 = false;
          s_3_St_15_Off_3 = false;
        } else {
          r_3_St_15_Off = v_215;
          s_3_St_15_Off_1 = v_214_1;
          s_3_St_15_Off_2 = v_214_2;
          s_3_St_15_Off_3 = v_214_3;
        };
        if (v_214_1) {
          v_214_2_1 = v_214_2;
          if (v_214_2_1) {
            v_214_3_1_1 = v_214_3;
          } else {
            v_214_3_1_0 = v_214_3;
          };
        } else {
          v_214_2_0 = v_214_2;
          if (v_214_2_0) {
            v_214_3_0_1 = v_214_3;
          } else {
            v_214_3_0_0 = v_214_3;
          };
        };
        if (s_3_St_15_Off_1) {
          s_3_St_15_Off_2_1 = s_3_St_15_Off_2;
          if (s_3_St_15_Off_2_1) {
            s_3_St_15_Off_3_1_1 = s_3_St_15_Off_3;
          } else {
            s_3_St_15_Off_3_1_0 = s_3_St_15_Off_3;
          };
        } else {
          s_3_St_15_Off_2_0 = s_3_St_15_Off_2;
          if (s_3_St_15_Off_2_0) {
            s_3_St_15_Off_3_0_1 = s_3_St_15_Off_3;
          } else {
            s_3_St_15_Off_3_0_0 = s_3_St_15_Off_3;
          };
        };
      };
    };
  };
  if (self->ck_34_1) {
    if (recuperou_2) {
      r_4_St_16_Falha = true;
    } else {
      r_4_St_16_Falha = self->pnr_4;
    };
    r_4 = r_4_St_16_Falha;
    if (recuperou_2) {
      s_4_St_16_Falha_1 = false;
    } else {
      s_4_St_16_Falha_1 = true;
    };
    s_4_1 = s_4_St_16_Falha_1;
  } else {
    if (falhou_2) {
      r_4_St_16_Funcionando = true;
      s_4_St_16_Funcionando_1 = true;
    } else {
      r_4_St_16_Funcionando = self->pnr_4;
      s_4_St_16_Funcionando_1 = false;
    };
    r_4 = r_4_St_16_Funcionando;
    s_4_1 = s_4_St_16_Funcionando_1;
  };
  ck_35_1 = s_4_1;
  if (ck_35_1) {
    failed_St_16_Falha = true;
    failed = failed_St_16_Falha;
    nr_4_St_16_Falha = false;
    nr_4 = nr_4_St_16_Falha;
    ns_4_St_16_Falha_1 = true;
    ns_4_1 = ns_4_St_16_Falha_1;
  } else {
    failed_St_16_Funcionando = false;
    nr_4_St_16_Funcionando = false;
    ns_4_St_16_Funcionando_1 = false;
    failed = failed_St_16_Funcionando;
    nr_4 = nr_4_St_16_Funcionando;
    ns_4_1 = ns_4_St_16_Funcionando_1;
  };
  working = failed;
  _out->ar_fail = working;
  v = !(_out->ar_fail);
  v_85 = !(_out->ar_fail);
  v_100 = !(_out->ar_fail);
  v_109 = !(_out->ar_fail);
  v_124 = !(_out->ar_fail);
  v_142 = (_out->l_fail||_out->ar_fail);
  v_151 = !(_out->ar_fail);
  ar_fail_2 = _out->ar_fail;
  ar_fail_1 = ar_fail_2;
  if (ck_36_1) {
    if (ck_36_2_1) {
      if (!(ck_36_3_1_1)) {
        v_184 = !(ar_fail_1);
        v_182 = !(ar_fail_1);
      };
    };
  } else {
    if (!(ck_36_2_0)) {
      if (!(ck_36_3_0_0)) {
        v_205 = !(ar_fail_1);
        v_203 = !(ar_fail_1);
      };
    };
  };
  if (ck_32_1) {
    ck_32_2_1 = ck_32_2;
    if (ck_32_2_1) {
      v_174 = !(c2_2);
      if (v_174) {
        v_176 = true;
        v_175_1 = false;
        v_175_2 = false;
      } else {
        v_176 = self->pnr_5;
        v_175_1 = true;
        v_175_2 = true;
      };
      v_173 = !(c1_2);
      if (v_173) {
        r_5_St_17_Max = true;
      } else {
        r_5_St_17_Max = v_176;
      };
      v_436 = r_5_St_17_Max;
      if (v_173) {
        s_5_St_17_Max_1 = true;
      } else {
        s_5_St_17_Max_1 = v_175_1;
      };
      v_432 = s_5_St_17_Max_1;
      if (v_173) {
        s_5_St_17_Max_2 = false;
      } else {
        s_5_St_17_Max_2 = v_175_2;
      };
      v_433 = s_5_St_17_Max_2;
    } else {
      if (c2_2) {
        v_179 = true;
        v_178_1 = true;
        v_178_2 = true;
      } else {
        v_179 = self->pnr_5;
        v_178_1 = true;
        v_178_2 = false;
      };
      v_177 = !(c1_2);
      if (v_177) {
        r_5_St_17_Min = true;
        s_5_St_17_Min_1 = false;
        s_5_St_17_Min_2 = false;
      } else {
        r_5_St_17_Min = v_179;
        s_5_St_17_Min_1 = v_178_1;
        s_5_St_17_Min_2 = v_178_2;
      };
      v_436 = r_5_St_17_Min;
      v_432 = s_5_St_17_Min_1;
      v_433 = s_5_St_17_Min_2;
    };
    s_5_1 = v_432;
    s_5_2 = v_433;
    r_5 = v_436;
  } else {
    ck_32_2_0 = ck_32_2;
    if (ck_32_2_0) {
      v_437 = true;
      v_434 = true;
      v_435 = true;
    } else {
      if (c2_2) {
        v_181 = true;
      } else {
        v_181 = self->pnr_5;
      };
      if (c1_2) {
        r_5_St_17_Off = true;
      } else {
        r_5_St_17_Off = v_181;
      };
      v_437 = r_5_St_17_Off;
      if (c2_2) {
        v_180_1 = true;
      } else {
        v_180_1 = false;
      };
      if (c1_2) {
        s_5_St_17_Off_1 = true;
      } else {
        s_5_St_17_Off_1 = v_180_1;
      };
      v_434 = s_5_St_17_Off_1;
      if (c2_2) {
        v_180_2 = true;
      } else {
        v_180_2 = false;
      };
      if (c1_2) {
        s_5_St_17_Off_2 = false;
      } else {
        s_5_St_17_Off_2 = v_180_2;
      };
      v_435 = s_5_St_17_Off_2;
      if (v_180_1) {
        v_180_2_1 = v_180_2;
      } else {
        v_180_2_0 = v_180_2;
      };
      if (s_5_St_17_Off_1) {
        s_5_St_17_Off_2_1 = s_5_St_17_Off_2;
      } else {
        s_5_St_17_Off_2_0 = s_5_St_17_Off_2;
      };
    };
    s_5_1 = v_434;
    s_5_2 = v_435;
    r_5 = v_437;
  };
  ck_33_1 = s_5_1;
  ck_33_2 = s_5_2;
  if (ck_33_1) {
    ck_33_2_1 = ck_33_2;
    if (ck_33_2_1) {
      ar_state_1_St_17_Max = 2;
      v_422 = ar_state_1_St_17_Max;
      nr_5_St_17_Max = false;
      v_428 = nr_5_St_17_Max;
      ns_5_St_17_Max_1 = true;
      v_424 = ns_5_St_17_Max_1;
      ns_5_St_17_Max_2 = true;
      v_425 = ns_5_St_17_Max_2;
    } else {
      ar_state_1_St_17_Min = 1;
      nr_5_St_17_Min = false;
      ns_5_St_17_Min_1 = true;
      ns_5_St_17_Min_2 = false;
      v_422 = ar_state_1_St_17_Min;
      v_428 = nr_5_St_17_Min;
      v_424 = ns_5_St_17_Min_1;
      v_425 = ns_5_St_17_Min_2;
    };
    ar_state_1 = v_422;
    ns_5_1 = v_424;
    ns_5_2 = v_425;
    nr_5 = v_428;
  } else {
    ck_33_2_0 = ck_33_2;
    if (ck_33_2_0) {
      v_423 = 0;
      v_429 = true;
      v_426 = true;
      v_427 = true;
    } else {
      ar_state_1_St_17_Off = 0;
      v_423 = ar_state_1_St_17_Off;
      nr_5_St_17_Off = false;
      v_429 = nr_5_St_17_Off;
      ns_5_St_17_Off_1 = false;
      v_426 = ns_5_St_17_Off_1;
      ns_5_St_17_Off_2 = false;
      v_427 = ns_5_St_17_Off_2;
      if (ns_5_St_17_Off_1) {
        ns_5_St_17_Off_2_1 = ns_5_St_17_Off_2;
      } else {
        ns_5_St_17_Off_2_0 = ns_5_St_17_Off_2;
      };
    };
    ar_state_1 = v_423;
    ns_5_1 = v_426;
    ns_5_2 = v_427;
    nr_5 = v_429;
  };
  ar_state_2 = ar_state_1;
  _out->ar_state = ar_state_2;
  v_83 = (_out->ar_state==0);
  v_93 = (_out->ar_state==1);
  v_103 = (_out->ar_state==2);
  v_118 = (_out->ar_state==0);
  v_134 = (_out->ar_state==0);
  if (ns_5_1) {
    ns_5_2_1 = ns_5_2;
  } else {
    ns_5_2_0 = ns_5_2;
  };
  if (ck_33_1) {
    if (ck_33_2_1) {
      if (ns_5_St_17_Max_1) {
        ns_5_St_17_Max_2_1 = ns_5_St_17_Max_2;
      } else {
        ns_5_St_17_Max_2_0 = ns_5_St_17_Max_2;
      };
    } else {
      if (ns_5_St_17_Min_1) {
        ns_5_St_17_Min_2_1 = ns_5_St_17_Min_2;
      } else {
        ns_5_St_17_Min_2_0 = ns_5_St_17_Min_2;
      };
    };
  };
  if (s_5_1) {
    s_5_2_1 = s_5_2;
  } else {
    s_5_2_0 = s_5_2;
  };
  if (ck_32_1) {
    if (ck_32_2_1) {
      if (v_175_1) {
        v_175_2_1 = v_175_2;
      } else {
        v_175_2_0 = v_175_2;
      };
      if (s_5_St_17_Max_1) {
        s_5_St_17_Max_2_1 = s_5_St_17_Max_2;
      } else {
        s_5_St_17_Max_2_0 = s_5_St_17_Max_2;
      };
    } else {
      if (v_178_1) {
        v_178_2_1 = v_178_2;
      } else {
        v_178_2_0 = v_178_2;
      };
      if (s_5_St_17_Min_1) {
        s_5_St_17_Min_2_1 = s_5_St_17_Min_2;
      } else {
        s_5_St_17_Min_2_0 = s_5_St_17_Min_2;
      };
    };
  };
  if (self->ck_30_1) {
    v_172 = !(c_3);
    if (v_172) {
      r_6_St_18_Closed = true;
      s_6_St_18_Closed_1 = false;
    } else {
      r_6_St_18_Closed = self->pnr_6;
      s_6_St_18_Closed_1 = true;
    };
    r_6 = r_6_St_18_Closed;
    s_6_1 = s_6_St_18_Closed_1;
  } else {
    if (c_3) {
      r_6_St_18_Open = true;
    } else {
      r_6_St_18_Open = self->pnr_6;
    };
    r_6 = r_6_St_18_Open;
    if (c_3) {
      s_6_St_18_Open_1 = true;
    } else {
      s_6_St_18_Open_1 = false;
    };
    s_6_1 = s_6_St_18_Open_1;
  };
  ck_31_1 = s_6_1;
  if (ck_31_1) {
    w_open_1_St_18_Closed = false;
    nr_6_St_18_Closed = false;
    ns_6_St_18_Closed_1 = true;
    w_open_1 = w_open_1_St_18_Closed;
    nr_6 = nr_6_St_18_Closed;
    ns_6_1 = ns_6_St_18_Closed_1;
  } else {
    w_open_1_St_18_Open = true;
    w_open_1 = w_open_1_St_18_Open;
    nr_6_St_18_Open = false;
    nr_6 = nr_6_St_18_Open;
    ns_6_St_18_Open_1 = false;
    ns_6_1 = ns_6_St_18_Open_1;
  };
  _out->w_open = w_open_1;
  v_84 = (v_83&&_out->w_open);
  rule7 = (v||v_84);
  v_98 = !(_out->w_open);
  v_115 = !(_out->w_open);
  v_131 = !(_out->w_open);
  if (self->ck_28_1) {
    if (c_2) {
      r_7_St_19_Off = true;
      s_7_St_19_Off_1 = false;
    } else {
      r_7_St_19_Off = self->pnr_7;
      s_7_St_19_Off_1 = true;
    };
    r_7 = r_7_St_19_Off;
    s_7_1 = s_7_St_19_Off_1;
  } else {
    v_171 = !(c_2);
    if (v_171) {
      r_7_St_19_On = true;
    } else {
      r_7_St_19_On = self->pnr_7;
    };
    r_7 = r_7_St_19_On;
    if (v_171) {
      s_7_St_19_On_1 = true;
    } else {
      s_7_St_19_On_1 = false;
    };
    s_7_1 = s_7_St_19_On_1;
  };
  ck_29_1 = s_7_1;
  if (ck_29_1) {
    pc_on_1_St_19_Off = false;
    nr_7_St_19_Off = false;
    ns_7_St_19_Off_1 = true;
    pc_on_1 = pc_on_1_St_19_Off;
    nr_7 = nr_7_St_19_Off;
    ns_7_1 = ns_7_St_19_Off_1;
  } else {
    pc_on_1_St_19_On = true;
    pc_on_1 = pc_on_1_St_19_On;
    nr_7_St_19_On = false;
    nr_7 = nr_7_St_19_On;
    ns_7_St_19_On_1 = false;
    ns_7_1 = ns_7_St_19_On_1;
  };
  _out->pc_on = pc_on_1;
  v_89 = !(_out->pc_on);
  v_113 = !(_out->pc_on);
  v_129 = !(_out->pc_on);
  if (self->ck_26_1) {
    if (arrived_1) {
      r_8_St_20_Not_Present = true;
      s_8_St_20_Not_Present_1 = false;
    } else {
      r_8_St_20_Not_Present = self->pnr_8;
      s_8_St_20_Not_Present_1 = true;
    };
    r_8 = r_8_St_20_Not_Present;
    s_8_1 = s_8_St_20_Not_Present_1;
  } else {
    if (arrived_1) {
      r_8_St_20_Preent = true;
    } else {
      r_8_St_20_Preent = self->pnr_8;
    };
    r_8 = r_8_St_20_Preent;
    if (arrived_1) {
      s_8_St_20_Preent_1 = true;
    } else {
      s_8_St_20_Preent_1 = false;
    };
    s_8_1 = s_8_St_20_Preent_1;
  };
  ck_27_1 = s_8_1;
  if (ck_27_1) {
    presence_2_St_20_Not_Present = false;
    nr_8_St_20_Not_Present = false;
    ns_8_St_20_Not_Present_1 = true;
    presence_2 = presence_2_St_20_Not_Present;
    nr_8 = nr_8_St_20_Not_Present;
    ns_8_1 = ns_8_St_20_Not_Present_1;
  } else {
    presence_2_St_20_Preent = true;
    presence_2 = presence_2_St_20_Preent;
    nr_8_St_20_Preent = false;
    nr_8 = nr_8_St_20_Preent;
    ns_8_St_20_Preent_1 = false;
    ns_8_1 = ns_8_St_20_Preent_1;
  };
  _out->presence_t = presence_2;
  v_86 = (_out->presence_t&&v_85);
  v_87 = !(v_86);
  v_105 = !(_out->presence_t);
  v_121 = !(_out->presence_t);
  if (self->ck_24_1) {
    if (arrived) {
      r_9_St_21_Not_Present = true;
      s_9_St_21_Not_Present_1 = false;
    } else {
      r_9_St_21_Not_Present = self->pnr_9;
      s_9_St_21_Not_Present_1 = true;
    };
    r_9 = r_9_St_21_Not_Present;
    s_9_1 = s_9_St_21_Not_Present_1;
  } else {
    if (arrived) {
      r_9_St_21_Preent = true;
    } else {
      r_9_St_21_Preent = self->pnr_9;
    };
    r_9 = r_9_St_21_Preent;
    if (arrived) {
      s_9_St_21_Preent_1 = true;
    } else {
      s_9_St_21_Preent_1 = false;
    };
    s_9_1 = s_9_St_21_Preent_1;
  };
  ck_25_1 = s_9_1;
  if (ck_25_1) {
    presence_1_St_21_Not_Present = false;
    nr_9_St_21_Not_Present = false;
    ns_9_St_21_Not_Present_1 = true;
    presence_1 = presence_1_St_21_Not_Present;
    nr_9 = nr_9_St_21_Not_Present;
    ns_9_1 = ns_9_St_21_Not_Present_1;
  } else {
    presence_1_St_21_Preent = true;
    presence_1 = presence_1_St_21_Preent;
    nr_9_St_21_Preent = false;
    nr_9 = nr_9_St_21_Preent;
    ns_9_St_21_Preent_1 = false;
    ns_9_1 = ns_9_St_21_Preent_1;
  };
  _out->presence = presence_1;
  v_104 = !(_out->presence);
  v_106 = (v_104&&v_105);
  v_120 = !(_out->presence);
  v_122 = (v_120&&v_121);
  v_136 = (_out->presence||_out->presence_t);
  v_140 = (_out->presence||_out->presence_t);
  v_147 = (_out->presence||_out->presence_t);
  if (self->ck_22_1) {
    v_170 = !(c_1);
    if (v_170) {
      r_10_St_22_Locked = true;
      s_10_St_22_Locked_1 = false;
    } else {
      r_10_St_22_Locked = self->pnr_10;
      s_10_St_22_Locked_1 = true;
    };
    r_10 = r_10_St_22_Locked;
    s_10_1 = s_10_St_22_Locked_1;
  } else {
    if (c_1) {
      r_10_St_22_Open = true;
    } else {
      r_10_St_22_Open = self->pnr_10;
    };
    r_10 = r_10_St_22_Open;
    if (c_1) {
      s_10_St_22_Open_1 = true;
    } else {
      s_10_St_22_Open_1 = false;
    };
    s_10_1 = s_10_St_22_Open_1;
  };
  ck_23_1 = s_10_1;
  if (ck_23_1) {
    arm_open_1_St_22_Locked = false;
    nr_10_St_22_Locked = false;
    ns_10_St_22_Locked_1 = true;
    arm_open_1 = arm_open_1_St_22_Locked;
    nr_10 = nr_10_St_22_Locked;
    ns_10_1 = ns_10_St_22_Locked_1;
  } else {
    arm_open_1_St_22_Open = true;
    arm_open_1 = arm_open_1_St_22_Open;
    nr_10_St_22_Open = false;
    nr_10 = nr_10_St_22_Open;
    ns_10_St_22_Open_1 = false;
    ns_10_1 = ns_10_St_22_Open_1;
  };
  _out->arm_open = arm_open_1;
  if (self->ck_20_1) {
    if (c) {
      r_11_St_23_Off = true;
      s_11_St_23_Off_1 = false;
    } else {
      r_11_St_23_Off = self->pnr_11;
      s_11_St_23_Off_1 = true;
    };
    r_11 = r_11_St_23_Off;
    s_11_1 = s_11_St_23_Off_1;
  } else {
    v_169 = !(c);
    if (v_169) {
      r_11_St_23_On = true;
    } else {
      r_11_St_23_On = self->pnr_11;
    };
    r_11 = r_11_St_23_On;
    if (v_169) {
      s_11_St_23_On_1 = true;
    } else {
      s_11_St_23_On_1 = false;
    };
    s_11_1 = s_11_St_23_On_1;
  };
  ck_21_1 = s_11_1;
  if (ck_21_1) {
    r_on_St_23_Off = false;
    nr_11_St_23_Off = false;
    ns_11_St_23_Off_1 = true;
    r_on = r_on_St_23_Off;
    nr_11 = nr_11_St_23_Off;
    ns_11_1 = ns_11_St_23_Off_1;
  } else {
    r_on_St_23_On = true;
    r_on = r_on_St_23_On;
    nr_11_St_23_On = false;
    nr_11 = nr_11_St_23_On;
    ns_11_St_23_On_1 = false;
    ns_11_1 = ns_11_St_23_On_1;
  };
  _out->r_on1 = r_on;
  v_88 = !(_out->r_on1);
  v_90 = (v_88&&v_89);
  v_112 = !(_out->r_on1);
  v_114 = (v_112&&v_113);
  v_116 = (v_114&&v_115);
  v_128 = !(_out->r_on1);
  v_130 = (v_128&&v_129);
  v_132 = (v_130&&v_131);
  if (self->ck_18_1) {
    v_168 = !(c_porta_1);
    if (v_168) {
      r_12_St_24_Closed = true;
      s_12_St_24_Closed_1 = false;
    } else {
      r_12_St_24_Closed = self->pnr_12;
      s_12_St_24_Closed_1 = true;
    };
    r_12 = r_12_St_24_Closed;
    s_12_1 = s_12_St_24_Closed_1;
  } else {
    if (c_porta_1) {
      r_12_St_24_Open = true;
    } else {
      r_12_St_24_Open = self->pnr_12;
    };
    r_12 = r_12_St_24_Open;
    if (c_porta_1) {
      s_12_St_24_Open_1 = true;
    } else {
      s_12_St_24_Open_1 = false;
    };
    s_12_1 = s_12_St_24_Open_1;
  };
  ck_19_1 = s_12_1;
  if (ck_19_1) {
    porta_open_St_24_Closed = false;
    nr_12_St_24_Closed = false;
    ns_12_St_24_Closed_1 = true;
    porta_open = porta_open_St_24_Closed;
    nr_12 = nr_12_St_24_Closed;
    ns_12_1 = ns_12_St_24_Closed_1;
  } else {
    porta_open_St_24_Open = true;
    porta_open = porta_open_St_24_Open;
    nr_12_St_24_Open = false;
    nr_12 = nr_12_St_24_Open;
    ns_12_St_24_Open_1 = false;
    ns_12_1 = ns_12_St_24_Open_1;
  };
  _out->p_open = porta_open;
  v_91 = (_out->p_open&&v_90);
  v_92 = (v_91&&_out->arm_open);
  v_94 = (v_92&&v_93);
  rule6 = (v_87||v_94);
  v_117 = (_out->p_open&&v_116);
  v_119 = (v_117&&v_118);
  v_127 = !(_out->p_open);
  v_133 = (v_127&&v_132);
  v_135 = (v_133&&v_134);
  if (self->ck_1) {
    if (shift) {
      r_13_St_25_Dia = true;
      s_13_St_25_Dia_1 = false;
    } else {
      r_13_St_25_Dia = self->pnr_13;
      s_13_St_25_Dia_1 = true;
    };
    r_13 = r_13_St_25_Dia;
    s_13_1 = s_13_St_25_Dia_1;
  } else {
    if (shift) {
      r_13_St_25_Noite = true;
    } else {
      r_13_St_25_Noite = self->pnr_13;
    };
    r_13 = r_13_St_25_Noite;
    if (shift) {
      s_13_St_25_Noite_1 = true;
    } else {
      s_13_St_25_Noite_1 = false;
    };
    s_13_1 = s_13_St_25_Noite_1;
  };
  ck_17_1 = s_13_1;
  if (ck_17_1) {
    turno_St_25_Dia = false;
    nr_13_St_25_Dia = false;
    ns_13_St_25_Dia_1 = true;
    turno = turno_St_25_Dia;
    nr_13 = nr_13_St_25_Dia;
    ns_13_1 = ns_13_St_25_Dia_1;
  } else {
    turno_St_25_Noite = true;
    turno = turno_St_25_Noite;
    nr_13_St_25_Noite = false;
    nr_13 = nr_13_St_25_Noite;
    ns_13_St_25_Noite_1 = false;
    ns_13_1 = ns_13_St_25_Noite_1;
  };
  _out->night = turno;
  v_95 = !(_out->night);
  v_96 = (_out->presence&&v_95);
  v_97 = (v_96&&_out->pc_on);
  v_99 = (v_97&&v_98);
  v_101 = (v_99&&v_100);
  v_102 = !(v_101);
  rule5 = (v_102||v_103);
  v_107 = !(_out->night);
  v_108 = (v_106&&v_107);
  v_110 = (v_108&&v_109);
  v_111 = !(v_110);
  rule4 = (v_111||v_119);
  v_123 = (v_122&&_out->night);
  v_125 = (v_123&&v_124);
  v_126 = !(v_125);
  rule3 = (v_126||v_135);
  v_137 = !(_out->night);
  v_138 = (v_136&&v_137);
  v_139 = !(v_138);
  rule2 = (v_139||_out->p_open);
  v_141 = (v_140&&_out->night);
  v_143 = (v_141&&v_142);
  v_144 = !(v_143);
  v_148 = (v_147&&_out->night);
  v_150 = (v_148&&v_149);
  v_152 = (v_150&&v_151);
  v_153 = !(v_152);
  v_156 = !(_out->night);
  v_157 = (_out->l_fail&&v_156);
  v_158 = !(v_157);
  shift_2 = _out->night;
  shift_1 = shift_2;
  if (ck_36_1) {
    if (ck_36_2_1) {
      if (ck_36_3_1_1) {
        v_417 = r_3_St_15_Max;
        v_402 = s_3_St_15_Max_1;
        v_403 = s_3_St_15_Max_2;
        v_404 = s_3_St_15_Max_3;
      } else {
        v_185 = !(shift_1);
        v_186 = (v_184&&v_185);
        if (v_186) {
          v_188 = true;
          v_187_1 = false;
          v_187_2 = false;
          v_187_3 = true;
        } else {
          v_188 = self->pnr_3;
          v_187_1 = true;
          v_187_2 = true;
          v_187_3 = false;
        };
        v_183 = (v_182&&shift_1);
        if (v_183) {
          r_3_St_15_Max_Up = true;
        } else {
          r_3_St_15_Max_Up = v_188;
        };
        v_417 = r_3_St_15_Max_Up;
        if (v_183) {
          s_3_St_15_Max_Up_1 = false;
        } else {
          s_3_St_15_Max_Up_1 = v_187_1;
        };
        v_402 = s_3_St_15_Max_Up_1;
        if (v_183) {
          s_3_St_15_Max_Up_2 = false;
        } else {
          s_3_St_15_Max_Up_2 = v_187_2;
        };
        v_403 = s_3_St_15_Max_Up_2;
        if (v_183) {
          s_3_St_15_Max_Up_3 = true;
        } else {
          s_3_St_15_Max_Up_3 = v_187_3;
        };
        v_404 = s_3_St_15_Max_Up_3;
      };
      v_411 = v_402;
      v_412 = v_403;
      v_413 = v_404;
      v_419 = v_417;
    } else {
      v_411 = v_405;
      v_412 = v_406;
      v_413 = v_407;
      v_419 = v_418;
    };
    s_3_1 = v_411;
    s_3_2 = v_412;
    s_3_3 = v_413;
    r_3 = v_419;
  } else {
    if (ck_36_2_0) {
      v_414 = true;
      v_415 = true;
      v_416 = true;
      v_421 = true;
    } else {
      if (ck_36_3_0_0) {
        v_420 = r_3_St_15_Off;
        v_408 = s_3_St_15_Off_1;
        v_409 = s_3_St_15_Off_2;
        v_410 = s_3_St_15_Off_3;
      } else {
        v_206 = !(shift_1);
        v_207 = (v_205&&v_206);
        if (v_207) {
          v_209 = true;
          v_208_1 = false;
          v_208_2 = false;
          v_208_3 = true;
        } else {
          v_209 = self->pnr_3;
          v_208_1 = false;
          v_208_2 = false;
          v_208_3 = false;
        };
        v_204 = (v_203&&shift_1);
        if (v_204) {
          r_3_St_15_Off_Up = true;
        } else {
          r_3_St_15_Off_Up = v_209;
        };
        v_420 = r_3_St_15_Off_Up;
        if (v_204) {
          s_3_St_15_Off_Up_1 = false;
        } else {
          s_3_St_15_Off_Up_1 = v_208_1;
        };
        v_408 = s_3_St_15_Off_Up_1;
        if (v_204) {
          s_3_St_15_Off_Up_2 = false;
        } else {
          s_3_St_15_Off_Up_2 = v_208_2;
        };
        v_409 = s_3_St_15_Off_Up_2;
        if (v_204) {
          s_3_St_15_Off_Up_3 = true;
        } else {
          s_3_St_15_Off_Up_3 = v_208_3;
        };
        v_410 = s_3_St_15_Off_Up_3;
        if (v_208_1) {
          v_208_2_1 = v_208_2;
          if (v_208_2_1) {
            v_208_3_1_1 = v_208_3;
          } else {
            v_208_3_1_0 = v_208_3;
          };
        } else {
          v_208_2_0 = v_208_2;
          if (v_208_2_0) {
            v_208_3_0_1 = v_208_3;
          } else {
            v_208_3_0_0 = v_208_3;
          };
        };
      };
      v_414 = v_408;
      v_415 = v_409;
      v_416 = v_410;
      v_421 = v_420;
      if (!(ck_36_3_0_0)) {
        if (s_3_St_15_Off_Up_1) {
          s_3_St_15_Off_Up_2_1 = s_3_St_15_Off_Up_2;
          if (s_3_St_15_Off_Up_2_1) {
            s_3_St_15_Off_Up_3_1_1 = s_3_St_15_Off_Up_3;
          } else {
            s_3_St_15_Off_Up_3_1_0 = s_3_St_15_Off_Up_3;
          };
        } else {
          s_3_St_15_Off_Up_2_0 = s_3_St_15_Off_Up_2;
          if (s_3_St_15_Off_Up_2_0) {
            s_3_St_15_Off_Up_3_0_1 = s_3_St_15_Off_Up_3;
          } else {
            s_3_St_15_Off_Up_3_0_0 = s_3_St_15_Off_Up_3;
          };
        };
      };
    };
    s_3_1 = v_414;
    s_3_2 = v_415;
    s_3_3 = v_416;
    r_3 = v_421;
  };
  ck_37_1 = s_3_1;
  ck_37_2 = s_3_2;
  ck_37_3 = s_3_3;
  if (ck_37_1) {
    ck_37_2_1 = ck_37_2;
    if (ck_37_2_1) {
      ck_37_3_1_1 = ck_37_3;
      if (ck_37_3_1_1) {
        lamp_1_St_15_Max = 2;
        pers_1_St_15_Max = 2;
        policy_1_St_15_Max = 2;
        nr_3_St_15_Max = false;
        ns_3_St_15_Max_1 = true;
        ns_3_St_15_Max_2 = true;
        ns_3_St_15_Max_3 = true;
        v_364 = lamp_1_St_15_Max;
        v_369 = pers_1_St_15_Max;
        v_374 = policy_1_St_15_Max;
        v_394 = nr_3_St_15_Max;
        v_379 = ns_3_St_15_Max_1;
        v_380 = ns_3_St_15_Max_2;
        v_381 = ns_3_St_15_Max_3;
      } else {
        lamp_1_St_15_Max_Up = 0;
        v_364 = lamp_1_St_15_Max_Up;
        pers_1_St_15_Max_Up = 0;
        v_369 = pers_1_St_15_Max_Up;
        policy_1_St_15_Max_Up = 5;
        v_374 = policy_1_St_15_Max_Up;
        nr_3_St_15_Max_Up = false;
        v_394 = nr_3_St_15_Max_Up;
        ns_3_St_15_Max_Up_1 = true;
        v_379 = ns_3_St_15_Max_Up_1;
        ns_3_St_15_Max_Up_2 = true;
        v_380 = ns_3_St_15_Max_Up_2;
        ns_3_St_15_Max_Up_3 = false;
        v_381 = ns_3_St_15_Max_Up_3;
      };
      v_366 = v_364;
      v_371 = v_369;
      v_376 = v_374;
      v_388 = v_379;
      v_389 = v_380;
      v_390 = v_381;
      v_396 = v_394;
      if (ck_37_3_1_1) {
        if (ns_3_St_15_Max_1) {
          ns_3_St_15_Max_2_1 = ns_3_St_15_Max_2;
          if (ns_3_St_15_Max_2_1) {
            ns_3_St_15_Max_3_1_1 = ns_3_St_15_Max_3;
          } else {
            ns_3_St_15_Max_3_1_0 = ns_3_St_15_Max_3;
          };
        } else {
          ns_3_St_15_Max_2_0 = ns_3_St_15_Max_2;
          if (ns_3_St_15_Max_2_0) {
            ns_3_St_15_Max_3_0_1 = ns_3_St_15_Max_3;
          } else {
            ns_3_St_15_Max_3_0_0 = ns_3_St_15_Max_3;
          };
        };
      } else {
        if (ns_3_St_15_Max_Up_1) {
          ns_3_St_15_Max_Up_2_1 = ns_3_St_15_Max_Up_2;
          if (ns_3_St_15_Max_Up_2_1) {
            ns_3_St_15_Max_Up_3_1_1 = ns_3_St_15_Max_Up_3;
          } else {
            ns_3_St_15_Max_Up_3_1_0 = ns_3_St_15_Max_Up_3;
          };
        } else {
          ns_3_St_15_Max_Up_2_0 = ns_3_St_15_Max_Up_2;
          if (ns_3_St_15_Max_Up_2_0) {
            ns_3_St_15_Max_Up_3_0_1 = ns_3_St_15_Max_Up_3;
          } else {
            ns_3_St_15_Max_Up_3_0_0 = ns_3_St_15_Max_Up_3;
          };
        };
      };
    } else {
      ck_37_3_1_0 = ck_37_3;
      if (ck_37_3_1_0) {
        v_365 = 0;
        v_370 = 0;
        v_375 = 0;
        v_395 = true;
        v_382 = true;
        v_383 = true;
        v_384 = true;
      } else {
        lamp_1_St_15_Min = 1;
        v_365 = lamp_1_St_15_Min;
        pers_1_St_15_Min = 1;
        v_370 = pers_1_St_15_Min;
        policy_1_St_15_Min = 1;
        v_375 = policy_1_St_15_Min;
        nr_3_St_15_Min = false;
        v_395 = nr_3_St_15_Min;
        ns_3_St_15_Min_1 = true;
        v_382 = ns_3_St_15_Min_1;
        ns_3_St_15_Min_2 = false;
        v_383 = ns_3_St_15_Min_2;
        ns_3_St_15_Min_3 = false;
        v_384 = ns_3_St_15_Min_3;
        if (ns_3_St_15_Min_1) {
          ns_3_St_15_Min_2_1 = ns_3_St_15_Min_2;
          if (ns_3_St_15_Min_2_1) {
            ns_3_St_15_Min_3_1_1 = ns_3_St_15_Min_3;
          } else {
            ns_3_St_15_Min_3_1_0 = ns_3_St_15_Min_3;
          };
        } else {
          ns_3_St_15_Min_2_0 = ns_3_St_15_Min_2;
          if (ns_3_St_15_Min_2_0) {
            ns_3_St_15_Min_3_0_1 = ns_3_St_15_Min_3;
          } else {
            ns_3_St_15_Min_3_0_0 = ns_3_St_15_Min_3;
          };
        };
      };
      v_366 = v_365;
      v_371 = v_370;
      v_376 = v_375;
      v_388 = v_382;
      v_389 = v_383;
      v_390 = v_384;
      v_396 = v_395;
    };
    lamp_1 = v_366;
    pers_1 = v_371;
    policy_1 = v_376;
    ns_3_1 = v_388;
    ns_3_2 = v_389;
    ns_3_3 = v_390;
    nr_3 = v_396;
  } else {
    ck_37_2_0 = ck_37_2;
    if (ck_37_2_0) {
      ck_37_3_0_1 = ck_37_3;
      v_368 = 0;
      v_373 = 0;
      v_378 = 0;
      v_391 = true;
      v_392 = true;
      v_393 = true;
      v_398 = true;
    } else {
      ck_37_3_0_0 = ck_37_3;
      if (ck_37_3_0_0) {
        lamp_1_St_15_Off = 0;
        pers_1_St_15_Off = 0;
        policy_1_St_15_Off = 0;
        nr_3_St_15_Off = false;
        ns_3_St_15_Off_1 = false;
        ns_3_St_15_Off_2 = false;
        ns_3_St_15_Off_3 = true;
        v_367 = lamp_1_St_15_Off;
        v_372 = pers_1_St_15_Off;
        v_377 = policy_1_St_15_Off;
        v_397 = nr_3_St_15_Off;
        v_385 = ns_3_St_15_Off_1;
        v_386 = ns_3_St_15_Off_2;
        v_387 = ns_3_St_15_Off_3;
      } else {
        lamp_1_St_15_Off_Up = 0;
        v_367 = lamp_1_St_15_Off_Up;
        pers_1_St_15_Off_Up = 0;
        v_372 = pers_1_St_15_Off_Up;
        policy_1_St_15_Off_Up = 4;
        v_377 = policy_1_St_15_Off_Up;
        nr_3_St_15_Off_Up = false;
        v_397 = nr_3_St_15_Off_Up;
        ns_3_St_15_Off_Up_1 = false;
        v_385 = ns_3_St_15_Off_Up_1;
        ns_3_St_15_Off_Up_2 = false;
        v_386 = ns_3_St_15_Off_Up_2;
        ns_3_St_15_Off_Up_3 = false;
        v_387 = ns_3_St_15_Off_Up_3;
      };
      v_368 = v_367;
      v_373 = v_372;
      v_378 = v_377;
      v_391 = v_385;
      v_392 = v_386;
      v_393 = v_387;
      v_398 = v_397;
    };
    lamp_1 = v_368;
    pers_1 = v_373;
    policy_1 = v_378;
    ns_3_1 = v_391;
    ns_3_2 = v_392;
    ns_3_3 = v_393;
    nr_3 = v_398;
  };
  policy = policy_1;
  _out->mopa = policy;
  pers_2 = pers_1;
  _out->pers = pers_2;
  lamp_2 = lamp_1;
  _out->lamp = lamp_2;
  v_145 = (_out->lamp==0);
  v_146 = (v_145&&_out->p_open);
  rule1_5 = (v_144||v_146);
  v_154 = (_out->lamp==2);
  v_155 = (v_154&&_out->p_open);
  rule1 = (v_153||v_155);
  v_159 = (_out->lamp==0);
  rule0 = (v_158||v_159);
  v_160 = (rule0&&rule1);
  v_161 = (v_160&&rule1_5);
  v_162 = (v_161&&rule2);
  v_163 = (v_162&&rule3);
  v_164 = (v_163&&rule4);
  v_165 = (v_164&&rule5);
  v_166 = (v_165&&rule6);
  v_167 = (v_166&&rule7);
  if (ns_3_1) {
    ns_3_2_1 = ns_3_2;
    if (ns_3_2_1) {
      ns_3_3_1_1 = ns_3_3;
    } else {
      ns_3_3_1_0 = ns_3_3;
    };
  } else {
    ns_3_2_0 = ns_3_2;
    if (ns_3_2_0) {
      ns_3_3_0_1 = ns_3_3;
    } else {
      ns_3_3_0_0 = ns_3_3;
    };
  };
  if (!(ck_37_1)) {
    if (!(ck_37_2_0)) {
      if (ck_37_3_0_0) {
        if (ns_3_St_15_Off_1) {
          ns_3_St_15_Off_2_1 = ns_3_St_15_Off_2;
          if (ns_3_St_15_Off_2_1) {
            ns_3_St_15_Off_3_1_1 = ns_3_St_15_Off_3;
          } else {
            ns_3_St_15_Off_3_1_0 = ns_3_St_15_Off_3;
          };
        } else {
          ns_3_St_15_Off_2_0 = ns_3_St_15_Off_2;
          if (ns_3_St_15_Off_2_0) {
            ns_3_St_15_Off_3_0_1 = ns_3_St_15_Off_3;
          } else {
            ns_3_St_15_Off_3_0_0 = ns_3_St_15_Off_3;
          };
        };
      } else {
        if (ns_3_St_15_Off_Up_1) {
          ns_3_St_15_Off_Up_2_1 = ns_3_St_15_Off_Up_2;
          if (ns_3_St_15_Off_Up_2_1) {
            ns_3_St_15_Off_Up_3_1_1 = ns_3_St_15_Off_Up_3;
          } else {
            ns_3_St_15_Off_Up_3_1_0 = ns_3_St_15_Off_Up_3;
          };
        } else {
          ns_3_St_15_Off_Up_2_0 = ns_3_St_15_Off_Up_2;
          if (ns_3_St_15_Off_Up_2_0) {
            ns_3_St_15_Off_Up_3_0_1 = ns_3_St_15_Off_Up_3;
          } else {
            ns_3_St_15_Off_Up_3_0_0 = ns_3_St_15_Off_Up_3;
          };
        };
      };
    };
  };
  if (s_3_1) {
    s_3_2_1 = s_3_2;
    if (s_3_2_1) {
      s_3_3_1_1 = s_3_3;
    } else {
      s_3_3_1_0 = s_3_3;
    };
  } else {
    s_3_2_0 = s_3_2;
    if (s_3_2_0) {
      s_3_3_0_1 = s_3_3;
    } else {
      s_3_3_0_0 = s_3_3;
    };
  };
  if (ck_36_1) {
    if (ck_36_2_1) {
      if (!(ck_36_3_1_1)) {
        if (v_187_1) {
          v_187_2_1 = v_187_2;
          if (v_187_2_1) {
            v_187_3_1_1 = v_187_3;
          } else {
            v_187_3_1_0 = v_187_3;
          };
        } else {
          v_187_2_0 = v_187_2;
          if (v_187_2_0) {
            v_187_3_0_1 = v_187_3;
          } else {
            v_187_3_0_0 = v_187_3;
          };
        };
        if (s_3_St_15_Max_Up_1) {
          s_3_St_15_Max_Up_2_1 = s_3_St_15_Max_Up_2;
          if (s_3_St_15_Max_Up_2_1) {
            s_3_St_15_Max_Up_3_1_1 = s_3_St_15_Max_Up_3;
          } else {
            s_3_St_15_Max_Up_3_1_0 = s_3_St_15_Max_Up_3;
          };
        } else {
          s_3_St_15_Max_Up_2_0 = s_3_St_15_Max_Up_2;
          if (s_3_St_15_Max_Up_2_0) {
            s_3_St_15_Max_Up_3_0_1 = s_3_St_15_Max_Up_3;
          } else {
            s_3_St_15_Max_Up_3_0_0 = s_3_St_15_Max_Up_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->ck_38_1 = ns_1;
  self->pnr_3 = nr_3;
  self->v_399 = ns_3_1;
  self->v_400 = ns_3_2;
  self->v_401 = ns_3_3;
  self->pnr_4 = nr_4;
  self->ck_34_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->v_430 = ns_5_1;
  self->v_431 = ns_5_2;
  self->pnr_6 = nr_6;
  self->ck_30_1 = ns_6_1;
  self->pnr_7 = nr_7;
  self->ck_28_1 = ns_7_1;
  self->pnr_8 = nr_8;
  self->ck_26_1 = ns_8_1;
  self->pnr_9 = nr_9;
  self->ck_24_1 = ns_9_1;
  self->pnr_10 = nr_10;
  self->ck_22_1 = ns_10_1;
  self->pnr_11 = nr_11;
  self->ck_20_1 = ns_11_1;
  self->pnr_12 = nr_12;
  self->ck_18_1 = ns_12_1;
  self->pnr_13 = nr_13;
  self->ck_1 = ns_13_1;;
}

