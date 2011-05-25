#include <stdio.h>
#include "libint.h"
#include "vrr_header.h"

  /* Computes quartets necessary to compute (ff|hp) integrals */

void vrr_order_ffhp(Libint_t * Libint, prim_data *Data)
{
 REALTYPE *vrr_stack = Libint->vrr_stack;
 REALTYPE *tmp, *target_ptr;
 int i, am[2];
 _BUILD_p000(Data,vrr_stack+0, Data->F+5, Data->F+6, NULL, NULL, NULL);
 _BUILD_00p0(Data,vrr_stack+3, Data->F+5, Data->F+6, NULL, NULL, NULL);
 _BUILD_00p0(Data,vrr_stack+6, Data->F+4, Data->F+5, NULL, NULL, NULL);
 _BUILD_00p0(Data,vrr_stack+9, Data->F+6, Data->F+7, NULL, NULL, NULL);
 _BUILD_p0p0(Data,vrr_stack+12, vrr_stack+3, vrr_stack+9, NULL, NULL, Data->F+6);
 _BUILD_p0p0(Data,vrr_stack+21, vrr_stack+6, vrr_stack+3, NULL, NULL, Data->F+5);
 _BUILD_d0p0(Data,vrr_stack+30, vrr_stack+21, vrr_stack+12, vrr_stack+6, vrr_stack+3, vrr_stack+0);
 _BUILD_00d0(Data,vrr_stack+48, vrr_stack+3, vrr_stack+9, Data->F+5, Data->F+6, NULL);
 _BUILD_00d0(Data,vrr_stack+54, vrr_stack+6, vrr_stack+3, Data->F+4, Data->F+5, NULL);
 _BUILD_p0d0(Data,vrr_stack+60, vrr_stack+54, vrr_stack+48, NULL, NULL, vrr_stack+3);
 _BUILD_00p0(Data,vrr_stack+0, Data->F+3, Data->F+4, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+78, vrr_stack+0, vrr_stack+6, Data->F+3, Data->F+4, NULL);
 _BUILD_p0d0(Data,vrr_stack+84, vrr_stack+78, vrr_stack+54, NULL, NULL, vrr_stack+6);
 _BUILD_00p0(Data,vrr_stack+102, Data->F+7, Data->F+8, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+105, vrr_stack+9, vrr_stack+102, Data->F+6, Data->F+7, NULL);
 _BUILD_p0d0(Data,vrr_stack+111, vrr_stack+48, vrr_stack+105, NULL, NULL, vrr_stack+9);
 _BUILD_d0d0(Data,vrr_stack+129, vrr_stack+60, vrr_stack+111, vrr_stack+54, vrr_stack+48, vrr_stack+12);
 _BUILD_d0d0(Data,vrr_stack+165, vrr_stack+84, vrr_stack+60, vrr_stack+78, vrr_stack+54, vrr_stack+21);
 _BUILD_f0d0(Data,vrr_stack+201, vrr_stack+165, vrr_stack+129, vrr_stack+84, vrr_stack+60, vrr_stack+30);
 _BUILD_00f0(Data,vrr_stack+12, vrr_stack+54, vrr_stack+48, vrr_stack+6, vrr_stack+3, NULL);
 _BUILD_00f0(Data,vrr_stack+22, vrr_stack+78, vrr_stack+54, vrr_stack+0, vrr_stack+6, NULL);
 _BUILD_00f0(Data,vrr_stack+32, vrr_stack+48, vrr_stack+105, vrr_stack+3, vrr_stack+9, NULL);
 _BUILD_p0f0(Data,vrr_stack+261, vrr_stack+12, vrr_stack+32, NULL, NULL, vrr_stack+48);
 _BUILD_p0f0(Data,vrr_stack+291, vrr_stack+22, vrr_stack+12, NULL, NULL, vrr_stack+54);
 _BUILD_d0f0(Data,vrr_stack+321, vrr_stack+291, vrr_stack+261, vrr_stack+22, vrr_stack+12, vrr_stack+60);
 _BUILD_00p0(Data,vrr_stack+60, Data->F+2, Data->F+3, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+3, vrr_stack+60, vrr_stack+0, Data->F+2, Data->F+3, NULL);
 _BUILD_00f0(Data,vrr_stack+63, vrr_stack+3, vrr_stack+78, vrr_stack+60, vrr_stack+0, NULL);
 _BUILD_p0f0(Data,vrr_stack+381, vrr_stack+63, vrr_stack+22, NULL, NULL, vrr_stack+78);
 _BUILD_d0f0(Data,vrr_stack+411, vrr_stack+381, vrr_stack+291, vrr_stack+63, vrr_stack+22, vrr_stack+84);
 _BUILD_00p0(Data,vrr_stack+0, Data->F+8, Data->F+9, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+42, vrr_stack+102, vrr_stack+0, Data->F+7, Data->F+8, NULL);
 _BUILD_00f0(Data,vrr_stack+84, vrr_stack+105, vrr_stack+42, vrr_stack+9, vrr_stack+102, NULL);
 _BUILD_p0f0(Data,vrr_stack+471, vrr_stack+32, vrr_stack+84, NULL, NULL, vrr_stack+105);
 _BUILD_d0f0(Data,vrr_stack+501, vrr_stack+261, vrr_stack+471, vrr_stack+12, vrr_stack+32, vrr_stack+111);
 _BUILD_f0f0(Data,vrr_stack+561, vrr_stack+321, vrr_stack+501, vrr_stack+291, vrr_stack+261, vrr_stack+129);
 _BUILD_f0f0(Data,vrr_stack+661, vrr_stack+411, vrr_stack+321, vrr_stack+381, vrr_stack+291, vrr_stack+165);
 _BUILD_g0f0(Data,vrr_stack+761, vrr_stack+661, vrr_stack+561, vrr_stack+411, vrr_stack+321, vrr_stack+201);
 _BUILD_00g0(Data,vrr_stack+111, vrr_stack+12, vrr_stack+32, vrr_stack+54, vrr_stack+48, NULL);
 _BUILD_00g0(Data,vrr_stack+126, vrr_stack+22, vrr_stack+12, vrr_stack+78, vrr_stack+54, NULL);
 _BUILD_p0g0(Data,vrr_stack+141, vrr_stack+126, vrr_stack+111, NULL, NULL, vrr_stack+12);
 _BUILD_00g0(Data,vrr_stack+186, vrr_stack+63, vrr_stack+22, vrr_stack+3, vrr_stack+78, NULL);
 _BUILD_p0g0(Data,vrr_stack+201, vrr_stack+186, vrr_stack+126, NULL, NULL, vrr_stack+22);
 _BUILD_00g0(Data,vrr_stack+246, vrr_stack+32, vrr_stack+84, vrr_stack+48, vrr_stack+105, NULL);
 _BUILD_p0g0(Data,vrr_stack+911, vrr_stack+111, vrr_stack+246, NULL, NULL, vrr_stack+32);
 _BUILD_d0g0(Data,vrr_stack+956, vrr_stack+141, vrr_stack+911, vrr_stack+126, vrr_stack+111, vrr_stack+261);
 _BUILD_d0g0(Data,vrr_stack+1046, vrr_stack+201, vrr_stack+141, vrr_stack+186, vrr_stack+126, vrr_stack+291);
 _BUILD_f0g0(Data,vrr_stack+1136, vrr_stack+1046, vrr_stack+956, vrr_stack+201, vrr_stack+141, vrr_stack+321);
 _BUILD_00p0(Data,vrr_stack+9, Data->F+1, Data->F+2, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+261, vrr_stack+9, vrr_stack+60, Data->F+1, Data->F+2, NULL);
 _BUILD_00f0(Data,vrr_stack+267, vrr_stack+261, vrr_stack+3, vrr_stack+9, vrr_stack+60, NULL);
 _BUILD_00g0(Data,vrr_stack+48, vrr_stack+267, vrr_stack+63, vrr_stack+261, vrr_stack+3, NULL);
 _BUILD_p0g0(Data,vrr_stack+277, vrr_stack+48, vrr_stack+186, NULL, NULL, vrr_stack+63);
 _BUILD_d0g0(Data,vrr_stack+1286, vrr_stack+277, vrr_stack+201, vrr_stack+48, vrr_stack+186, vrr_stack+381);
 _BUILD_f0g0(Data,vrr_stack+1376, vrr_stack+1286, vrr_stack+1046, vrr_stack+277, vrr_stack+201, vrr_stack+411);
 _BUILD_00p0(Data,vrr_stack+3, Data->F+9, Data->F+10, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+322, vrr_stack+0, vrr_stack+3, Data->F+8, Data->F+9, NULL);
 _BUILD_00f0(Data,vrr_stack+328, vrr_stack+42, vrr_stack+322, vrr_stack+102, vrr_stack+0, NULL);
 _BUILD_00g0(Data,vrr_stack+338, vrr_stack+84, vrr_stack+328, vrr_stack+105, vrr_stack+42, NULL);
 _BUILD_p0g0(Data,vrr_stack+353, vrr_stack+246, vrr_stack+338, NULL, NULL, vrr_stack+84);
 _BUILD_d0g0(Data,vrr_stack+1526, vrr_stack+911, vrr_stack+353, vrr_stack+111, vrr_stack+246, vrr_stack+471);
 _BUILD_f0g0(Data,vrr_stack+1616, vrr_stack+956, vrr_stack+1526, vrr_stack+141, vrr_stack+911, vrr_stack+501);
 _BUILD_g0g0(Data,vrr_stack+1766, vrr_stack+1136, vrr_stack+1616, vrr_stack+1046, vrr_stack+956, vrr_stack+561);
 _BUILD_g0g0(Data,vrr_stack+398, vrr_stack+1376, vrr_stack+1136, vrr_stack+1286, vrr_stack+1046, vrr_stack+661);
 _BUILD_h0g0(Data,vrr_stack+1991, vrr_stack+398, vrr_stack+1766, vrr_stack+1376, vrr_stack+1136, vrr_stack+761);
 _BUILD_00h0(Data,vrr_stack+623, vrr_stack+126, vrr_stack+111, vrr_stack+22, vrr_stack+12, NULL);
 _BUILD_00h0(Data,vrr_stack+644, vrr_stack+186, vrr_stack+126, vrr_stack+63, vrr_stack+22, NULL);
 _BUILD_00h0(Data,vrr_stack+665, vrr_stack+111, vrr_stack+246, vrr_stack+12, vrr_stack+32, NULL);
 _BUILD_p0h0(Data,vrr_stack+686, vrr_stack+623, vrr_stack+665, NULL, NULL, vrr_stack+111);
 _BUILD_p0h0(Data,vrr_stack+749, vrr_stack+644, vrr_stack+623, NULL, NULL, vrr_stack+126);
 _BUILD_d0h0(Data,vrr_stack+2306, vrr_stack+749, vrr_stack+686, vrr_stack+644, vrr_stack+623, vrr_stack+141);
 _BUILD_00h0(Data,vrr_stack+141, vrr_stack+48, vrr_stack+186, vrr_stack+267, vrr_stack+63, NULL);
 _BUILD_p0h0(Data,vrr_stack+812, vrr_stack+141, vrr_stack+644, NULL, NULL, vrr_stack+186);
 _BUILD_d0h0(Data,vrr_stack+2432, vrr_stack+812, vrr_stack+749, vrr_stack+141, vrr_stack+644, vrr_stack+201);
 _BUILD_00h0(Data,vrr_stack+63, vrr_stack+246, vrr_stack+338, vrr_stack+32, vrr_stack+84, NULL);
 _BUILD_p0h0(Data,vrr_stack+2558, vrr_stack+665, vrr_stack+63, NULL, NULL, vrr_stack+246);
 _BUILD_d0h0(Data,vrr_stack+2621, vrr_stack+686, vrr_stack+2558, vrr_stack+623, vrr_stack+665, vrr_stack+911);
 _BUILD_f0h0(Data,vrr_stack+2747, vrr_stack+2306, vrr_stack+2621, vrr_stack+749, vrr_stack+686, vrr_stack+956);
 _BUILD_f0h0(Data,vrr_stack+2957, vrr_stack+2432, vrr_stack+2306, vrr_stack+812, vrr_stack+749, vrr_stack+1046);
 _BUILD_g0h0(Data,vrr_stack+3167, vrr_stack+2957, vrr_stack+2747, vrr_stack+2432, vrr_stack+2306, vrr_stack+1136);
 _BUILD_00p0(Data,vrr_stack+6, Data->F+0, Data->F+1, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+201, vrr_stack+6, vrr_stack+9, Data->F+0, Data->F+1, NULL);
 _BUILD_00f0(Data,vrr_stack+207, vrr_stack+201, vrr_stack+261, vrr_stack+6, vrr_stack+9, NULL);
 _BUILD_00g0(Data,vrr_stack+6, vrr_stack+207, vrr_stack+267, vrr_stack+201, vrr_stack+261, NULL);
 _BUILD_00h0(Data,vrr_stack+21, vrr_stack+6, vrr_stack+48, vrr_stack+207, vrr_stack+267, NULL);
 _BUILD_p0h0(Data,vrr_stack+875, vrr_stack+21, vrr_stack+141, NULL, NULL, vrr_stack+48);
 _BUILD_d0h0(Data,vrr_stack+938, vrr_stack+875, vrr_stack+812, vrr_stack+21, vrr_stack+141, vrr_stack+277);
 _BUILD_f0h0(Data,vrr_stack+1064, vrr_stack+938, vrr_stack+2432, vrr_stack+875, vrr_stack+812, vrr_stack+1286);
   tmp = vrr_stack + 1064;
   target_ptr = Libint->vrr_classes[3][5];
   for(i=0;i<210;i++)
     target_ptr[i] += tmp[i];
 _BUILD_g0h0(Data,vrr_stack+3482, vrr_stack+1064, vrr_stack+2957, vrr_stack+938, vrr_stack+2432, vrr_stack+1376);
   tmp = vrr_stack + 3482;
   target_ptr = Libint->vrr_classes[4][5];
   for(i=0;i<315;i++)
     target_ptr[i] += tmp[i];
 _BUILD_00p0(Data,vrr_stack+875, Data->F+10, Data->F+11, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+878, vrr_stack+3, vrr_stack+875, Data->F+9, Data->F+10, NULL);
 _BUILD_00f0(Data,vrr_stack+884, vrr_stack+322, vrr_stack+878, vrr_stack+0, vrr_stack+3, NULL);
 _BUILD_00g0(Data,vrr_stack+894, vrr_stack+328, vrr_stack+884, vrr_stack+42, vrr_stack+322, NULL);
 _BUILD_00h0(Data,vrr_stack+909, vrr_stack+338, vrr_stack+894, vrr_stack+84, vrr_stack+328, NULL);
 _BUILD_p0h0(Data,vrr_stack+930, vrr_stack+63, vrr_stack+909, NULL, NULL, vrr_stack+338);
 _BUILD_d0h0(Data,vrr_stack+1274, vrr_stack+2558, vrr_stack+930, vrr_stack+665, vrr_stack+63, vrr_stack+353);
 _BUILD_f0h0(Data,vrr_stack+3797, vrr_stack+2621, vrr_stack+1274, vrr_stack+686, vrr_stack+2558, vrr_stack+1526);
 _BUILD_g0h0(Data,vrr_stack+4007, vrr_stack+2747, vrr_stack+3797, vrr_stack+2306, vrr_stack+2621, vrr_stack+1616);
 _BUILD_h0h0(Data,vrr_stack+4322, vrr_stack+3167, vrr_stack+4007, vrr_stack+2957, vrr_stack+2747, vrr_stack+1766);
 _BUILD_h0h0(Data,vrr_stack+1400, vrr_stack+3482, vrr_stack+3167, vrr_stack+1064, vrr_stack+2957, vrr_stack+398);
   tmp = vrr_stack + 1400;
   target_ptr = Libint->vrr_classes[5][5];
   for(i=0;i<441;i++)
     target_ptr[i] += tmp[i];
 _BUILD_00i0(Data,vrr_stack+353, vrr_stack+623, vrr_stack+665, vrr_stack+126, vrr_stack+111, NULL);
 _BUILD_00i0(Data,vrr_stack+381, vrr_stack+644, vrr_stack+623, vrr_stack+186, vrr_stack+126, NULL);
 _BUILD_00i0(Data,vrr_stack+409, vrr_stack+665, vrr_stack+63, vrr_stack+111, vrr_stack+246, NULL);
 _BUILD_p0i0(Data,vrr_stack+437, vrr_stack+353, vrr_stack+409, NULL, NULL, vrr_stack+665);
 _BUILD_p0i0(Data,vrr_stack+521, vrr_stack+381, vrr_stack+353, NULL, NULL, vrr_stack+623);
 _BUILD_d0i0(Data,vrr_stack+993, vrr_stack+521, vrr_stack+437, vrr_stack+381, vrr_stack+353, vrr_stack+686);
 _BUILD_00i0(Data,vrr_stack+665, vrr_stack+141, vrr_stack+644, vrr_stack+48, vrr_stack+186, NULL);
 _BUILD_p0i0(Data,vrr_stack+162, vrr_stack+665, vrr_stack+381, NULL, NULL, vrr_stack+644);
 _BUILD_d0i0(Data,vrr_stack+4763, vrr_stack+162, vrr_stack+521, vrr_stack+665, vrr_stack+381, vrr_stack+749);
 _BUILD_00i0(Data,vrr_stack+381, vrr_stack+63, vrr_stack+909, vrr_stack+246, vrr_stack+338, NULL);
 _BUILD_p0i0(Data,vrr_stack+693, vrr_stack+409, vrr_stack+381, NULL, NULL, vrr_stack+63);
 _BUILD_d0i0(Data,vrr_stack+4931, vrr_stack+437, vrr_stack+693, vrr_stack+353, vrr_stack+409, vrr_stack+2558);
 _BUILD_f0i0(Data,vrr_stack+5099, vrr_stack+993, vrr_stack+4931, vrr_stack+521, vrr_stack+437, vrr_stack+2621);
 _BUILD_f0i0(Data,vrr_stack+5379, vrr_stack+4763, vrr_stack+993, vrr_stack+162, vrr_stack+521, vrr_stack+2306);
 _BUILD_g0i0(Data,vrr_stack+5659, vrr_stack+5379, vrr_stack+5099, vrr_stack+4763, vrr_stack+993, vrr_stack+2747);
 _BUILD_00i0(Data,vrr_stack+353, vrr_stack+21, vrr_stack+141, vrr_stack+6, vrr_stack+48, NULL);
 _BUILD_p0i0(Data,vrr_stack+6, vrr_stack+353, vrr_stack+665, NULL, NULL, vrr_stack+141);
 _BUILD_d0i0(Data,vrr_stack+2558, vrr_stack+6, vrr_stack+162, vrr_stack+353, vrr_stack+665, vrr_stack+812);
 _BUILD_f0i0(Data,vrr_stack+6079, vrr_stack+2558, vrr_stack+4763, vrr_stack+6, vrr_stack+162, vrr_stack+2432);
   tmp = vrr_stack + 6079;
   target_ptr = Libint->vrr_classes[3][6];
   for(i=0;i<280;i++)
     target_ptr[i] += tmp[i];
 _BUILD_g0i0(Data,vrr_stack+6359, vrr_stack+6079, vrr_stack+5379, vrr_stack+2558, vrr_stack+4763, vrr_stack+2957);
   tmp = vrr_stack + 6359;
   target_ptr = Libint->vrr_classes[4][6];
   for(i=0;i<420;i++)
     target_ptr[i] += tmp[i];
 _BUILD_00p0(Data,vrr_stack+0, Data->F+11, Data->F+12, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+4763, vrr_stack+875, vrr_stack+0, Data->F+10, Data->F+11, NULL);
 _BUILD_00f0(Data,vrr_stack+4769, vrr_stack+878, vrr_stack+4763, vrr_stack+3, vrr_stack+875, NULL);
 _BUILD_00g0(Data,vrr_stack+0, vrr_stack+884, vrr_stack+4769, vrr_stack+322, vrr_stack+878, NULL);
 _BUILD_00h0(Data,vrr_stack+4763, vrr_stack+894, vrr_stack+0, vrr_stack+328, vrr_stack+884, NULL);
 _BUILD_00i0(Data,vrr_stack+353, vrr_stack+909, vrr_stack+4763, vrr_stack+338, vrr_stack+894, NULL);
 _BUILD_p0i0(Data,vrr_stack+4763, vrr_stack+381, vrr_stack+353, NULL, NULL, vrr_stack+909);
 _BUILD_d0i0(Data,vrr_stack+0, vrr_stack+693, vrr_stack+4763, vrr_stack+409, vrr_stack+381, vrr_stack+930);
 _BUILD_f0i0(Data,vrr_stack+2306, vrr_stack+4931, vrr_stack+0, vrr_stack+437, vrr_stack+693, vrr_stack+1274);
 _BUILD_g0i0(Data,vrr_stack+0, vrr_stack+5099, vrr_stack+2306, vrr_stack+993, vrr_stack+4931, vrr_stack+3797);
 _BUILD_h0i0(Data,vrr_stack+2306, vrr_stack+5659, vrr_stack+0, vrr_stack+5379, vrr_stack+5099, vrr_stack+4007);
 _BUILD_h0i0(Data,vrr_stack+0, vrr_stack+6359, vrr_stack+5659, vrr_stack+6079, vrr_stack+5379, vrr_stack+3167);
   tmp = vrr_stack + 0;
   target_ptr = Libint->vrr_classes[5][6];
   for(i=0;i<588;i++)
     target_ptr[i] += tmp[i];
 _BUILD_i0h0(Data,vrr_stack+588, vrr_stack+1400, vrr_stack+4322, vrr_stack+3482, vrr_stack+3167, vrr_stack+1991);
   tmp = vrr_stack + 588;
   target_ptr = Libint->vrr_classes[6][5];
   for(i=0;i<588;i++)
     target_ptr[i] += tmp[i];
 _BUILD_i0i0(Data,vrr_stack+1176, vrr_stack+0, vrr_stack+2306, vrr_stack+6359, vrr_stack+5659, vrr_stack+4322);
   tmp = vrr_stack + 1176;
   target_ptr = Libint->vrr_classes[6][6];
   for(i=0;i<784;i++)
     target_ptr[i] += tmp[i];

}

