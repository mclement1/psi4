#include <stdio.h>
#include <string.h>
#include "libint.h"
#include "hrr_header.h"

extern void vrr_order_gpgd(Libint_t*, prim_data*);

  /* Computes quartets of (gp|gd) integrals */

REALTYPE *hrr_order_gpgd(Libint_t *Libint, int num_prim_comb)
{
 prim_data *Data = Libint->PrimQuartet;
 REALTYPE *int_stack = Libint->int_stack;
 int i;

 Libint->vrr_classes[4][4] = int_stack + 0;
 Libint->vrr_classes[4][5] = int_stack + 225;
 Libint->vrr_classes[4][6] = int_stack + 540;
 Libint->vrr_classes[5][4] = int_stack + 960;
 Libint->vrr_classes[5][5] = int_stack + 1275;
 Libint->vrr_classes[5][6] = int_stack + 1716;
 memset(int_stack,0,2304*sizeof(REALTYPE));

 Libint->vrr_stack = int_stack + 2304;
 for(i=0;i<num_prim_comb;i++) {
   vrr_order_gpgd(Libint, Data);
   Data++;
 }
 /*--- compute (g0|gp) ---*/
 hrr3_build_gp(Libint->CD,int_stack+2304,int_stack+225,int_stack+0,15);
 /*--- compute (g0|hp) ---*/
 hrr3_build_hp(Libint->CD,int_stack+2979,int_stack+540,int_stack+225,15);
 /*--- compute (g0|gd) ---*/
 hrr3_build_gd(Libint->CD,int_stack+3924,int_stack+2979,int_stack+2304,15);
 /*--- compute (h0|gp) ---*/
 hrr3_build_gp(Libint->CD,int_stack+2304,int_stack+1275,int_stack+960,21);
 /*--- compute (h0|hp) ---*/
 hrr3_build_hp(Libint->CD,int_stack+5274,int_stack+1716,int_stack+1275,21);
 /*--- compute (h0|gd) ---*/
 hrr3_build_gd(Libint->CD,int_stack+0,int_stack+5274,int_stack+2304,21);
 /*--- compute (gp|gd) ---*/
 hrr1_build_gp(Libint->AB,int_stack+5274,int_stack+0,int_stack+3924,90);
 return int_stack+5274;}
