#include <stdio.h>
#include "libint.h"
#include "vrr_header.h"

  /* Computes quartets necessary to compute (h0|hd) integrals */

void vrr_order_h0hd(Libint_t * Libint, prim_data *Data)
{
 REALTYPE *vrr_stack = Libint->vrr_stack;
 REALTYPE *tmp, *target_ptr;
 int i, am[2];
 _BUILD_00p0(Data,vrr_stack+0, Data->F+5, Data->F+6, NULL, NULL, NULL);
 _BUILD_00p0(Data,vrr_stack+3, Data->F+4, Data->F+5, NULL, NULL, NULL);
 _BUILD_p0p0(Data,vrr_stack+6, vrr_stack+3, vrr_stack+0, NULL, NULL, Data->F+5);
 _BUILD_00d0(Data,vrr_stack+15, vrr_stack+3, vrr_stack+0, Data->F+4, Data->F+5, NULL);
 _BUILD_00p0(Data,vrr_stack+21, Data->F+3, Data->F+4, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+24, vrr_stack+21, vrr_stack+3, Data->F+3, Data->F+4, NULL);
 _BUILD_00p0(Data,vrr_stack+30, Data->F+6, Data->F+7, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+33, vrr_stack+0, vrr_stack+30, Data->F+5, Data->F+6, NULL);
 _BUILD_p0d0(Data,vrr_stack+39, vrr_stack+15, vrr_stack+33, NULL, NULL, vrr_stack+0);
 _BUILD_p0d0(Data,vrr_stack+57, vrr_stack+24, vrr_stack+15, NULL, NULL, vrr_stack+3);
 _BUILD_d0d0(Data,vrr_stack+75, vrr_stack+57, vrr_stack+39, vrr_stack+24, vrr_stack+15, vrr_stack+6);
 _BUILD_00f0(Data,vrr_stack+111, vrr_stack+15, vrr_stack+33, vrr_stack+3, vrr_stack+0, NULL);
 _BUILD_00f0(Data,vrr_stack+121, vrr_stack+24, vrr_stack+15, vrr_stack+21, vrr_stack+3, NULL);
 _BUILD_p0f0(Data,vrr_stack+131, vrr_stack+121, vrr_stack+111, NULL, NULL, vrr_stack+15);
 _BUILD_00p0(Data,vrr_stack+3, Data->F+2, Data->F+3, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+6, vrr_stack+3, vrr_stack+21, Data->F+2, Data->F+3, NULL);
 _BUILD_00f0(Data,vrr_stack+161, vrr_stack+6, vrr_stack+24, vrr_stack+3, vrr_stack+21, NULL);
 _BUILD_p0f0(Data,vrr_stack+171, vrr_stack+161, vrr_stack+121, NULL, NULL, vrr_stack+24);
 _BUILD_00p0(Data,vrr_stack+21, Data->F+7, Data->F+8, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+201, vrr_stack+30, vrr_stack+21, Data->F+6, Data->F+7, NULL);
 _BUILD_00f0(Data,vrr_stack+207, vrr_stack+33, vrr_stack+201, vrr_stack+0, vrr_stack+30, NULL);
 _BUILD_p0f0(Data,vrr_stack+217, vrr_stack+111, vrr_stack+207, NULL, NULL, vrr_stack+33);
 _BUILD_d0f0(Data,vrr_stack+247, vrr_stack+131, vrr_stack+217, vrr_stack+121, vrr_stack+111, vrr_stack+39);
 _BUILD_d0f0(Data,vrr_stack+307, vrr_stack+171, vrr_stack+131, vrr_stack+161, vrr_stack+121, vrr_stack+57);
 _BUILD_f0f0(Data,vrr_stack+367, vrr_stack+307, vrr_stack+247, vrr_stack+171, vrr_stack+131, vrr_stack+75);
 _BUILD_00g0(Data,vrr_stack+39, vrr_stack+121, vrr_stack+111, vrr_stack+24, vrr_stack+15, NULL);
 _BUILD_00g0(Data,vrr_stack+54, vrr_stack+161, vrr_stack+121, vrr_stack+6, vrr_stack+24, NULL);
 _BUILD_00g0(Data,vrr_stack+69, vrr_stack+111, vrr_stack+207, vrr_stack+15, vrr_stack+33, NULL);
 _BUILD_p0g0(Data,vrr_stack+467, vrr_stack+39, vrr_stack+69, NULL, NULL, vrr_stack+111);
 _BUILD_p0g0(Data,vrr_stack+512, vrr_stack+54, vrr_stack+39, NULL, NULL, vrr_stack+121);
 _BUILD_d0g0(Data,vrr_stack+557, vrr_stack+512, vrr_stack+467, vrr_stack+54, vrr_stack+39, vrr_stack+131);
 _BUILD_00p0(Data,vrr_stack+0, Data->F+1, Data->F+2, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+24, vrr_stack+0, vrr_stack+3, Data->F+1, Data->F+2, NULL);
 _BUILD_00f0(Data,vrr_stack+131, vrr_stack+24, vrr_stack+6, vrr_stack+0, vrr_stack+3, NULL);
 _BUILD_00g0(Data,vrr_stack+141, vrr_stack+131, vrr_stack+161, vrr_stack+24, vrr_stack+6, NULL);
 _BUILD_p0g0(Data,vrr_stack+647, vrr_stack+141, vrr_stack+54, NULL, NULL, vrr_stack+161);
 _BUILD_d0g0(Data,vrr_stack+692, vrr_stack+647, vrr_stack+512, vrr_stack+141, vrr_stack+54, vrr_stack+171);
 _BUILD_00p0(Data,vrr_stack+171, Data->F+8, Data->F+9, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+174, vrr_stack+21, vrr_stack+171, Data->F+7, Data->F+8, NULL);
 _BUILD_00f0(Data,vrr_stack+180, vrr_stack+201, vrr_stack+174, vrr_stack+30, vrr_stack+21, NULL);
 _BUILD_00g0(Data,vrr_stack+3, vrr_stack+207, vrr_stack+180, vrr_stack+33, vrr_stack+201, NULL);
 _BUILD_p0g0(Data,vrr_stack+782, vrr_stack+69, vrr_stack+3, NULL, NULL, vrr_stack+207);
 _BUILD_d0g0(Data,vrr_stack+827, vrr_stack+467, vrr_stack+782, vrr_stack+39, vrr_stack+69, vrr_stack+217);
 _BUILD_f0g0(Data,vrr_stack+917, vrr_stack+557, vrr_stack+827, vrr_stack+512, vrr_stack+467, vrr_stack+247);
 _BUILD_f0g0(Data,vrr_stack+1067, vrr_stack+692, vrr_stack+557, vrr_stack+647, vrr_stack+512, vrr_stack+307);
 _BUILD_g0g0(Data,vrr_stack+1217, vrr_stack+1067, vrr_stack+917, vrr_stack+692, vrr_stack+557, vrr_stack+367);
 _BUILD_00h0(Data,vrr_stack+217, vrr_stack+39, vrr_stack+69, vrr_stack+121, vrr_stack+111, NULL);
 _BUILD_00h0(Data,vrr_stack+238, vrr_stack+54, vrr_stack+39, vrr_stack+161, vrr_stack+121, NULL);
 _BUILD_p0h0(Data,vrr_stack+259, vrr_stack+238, vrr_stack+217, NULL, NULL, vrr_stack+39);
 _BUILD_00h0(Data,vrr_stack+322, vrr_stack+141, vrr_stack+54, vrr_stack+131, vrr_stack+161, NULL);
 _BUILD_p0h0(Data,vrr_stack+343, vrr_stack+322, vrr_stack+238, NULL, NULL, vrr_stack+54);
 _BUILD_00h0(Data,vrr_stack+406, vrr_stack+69, vrr_stack+3, vrr_stack+111, vrr_stack+207, NULL);
 _BUILD_p0h0(Data,vrr_stack+1442, vrr_stack+217, vrr_stack+406, NULL, NULL, vrr_stack+69);
 _BUILD_d0h0(Data,vrr_stack+1505, vrr_stack+259, vrr_stack+1442, vrr_stack+238, vrr_stack+217, vrr_stack+467);
 _BUILD_d0h0(Data,vrr_stack+1631, vrr_stack+343, vrr_stack+259, vrr_stack+322, vrr_stack+238, vrr_stack+512);
 _BUILD_f0h0(Data,vrr_stack+1757, vrr_stack+1631, vrr_stack+1505, vrr_stack+343, vrr_stack+259, vrr_stack+557);
 _BUILD_00p0(Data,vrr_stack+18, Data->F+0, Data->F+1, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+427, vrr_stack+18, vrr_stack+0, Data->F+0, Data->F+1, NULL);
 _BUILD_00f0(Data,vrr_stack+433, vrr_stack+427, vrr_stack+24, vrr_stack+18, vrr_stack+0, NULL);
 _BUILD_00g0(Data,vrr_stack+156, vrr_stack+433, vrr_stack+131, vrr_stack+427, vrr_stack+24, NULL);
 _BUILD_00h0(Data,vrr_stack+443, vrr_stack+156, vrr_stack+141, vrr_stack+433, vrr_stack+131, NULL);
 _BUILD_p0h0(Data,vrr_stack+464, vrr_stack+443, vrr_stack+322, NULL, NULL, vrr_stack+141);
 _BUILD_d0h0(Data,vrr_stack+1967, vrr_stack+464, vrr_stack+343, vrr_stack+443, vrr_stack+322, vrr_stack+647);
 _BUILD_f0h0(Data,vrr_stack+2093, vrr_stack+1967, vrr_stack+1631, vrr_stack+464, vrr_stack+343, vrr_stack+692);
 _BUILD_00p0(Data,vrr_stack+0, Data->F+9, Data->F+10, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+464, vrr_stack+171, vrr_stack+0, Data->F+8, Data->F+9, NULL);
 _BUILD_00f0(Data,vrr_stack+470, vrr_stack+174, vrr_stack+464, vrr_stack+21, vrr_stack+171, NULL);
 _BUILD_00g0(Data,vrr_stack+480, vrr_stack+180, vrr_stack+470, vrr_stack+201, vrr_stack+174, NULL);
 _BUILD_00h0(Data,vrr_stack+18, vrr_stack+3, vrr_stack+480, vrr_stack+207, vrr_stack+180, NULL);
 _BUILD_p0h0(Data,vrr_stack+495, vrr_stack+406, vrr_stack+18, NULL, NULL, vrr_stack+3);
 _BUILD_d0h0(Data,vrr_stack+558, vrr_stack+1442, vrr_stack+495, vrr_stack+217, vrr_stack+406, vrr_stack+782);
 _BUILD_f0h0(Data,vrr_stack+2303, vrr_stack+1505, vrr_stack+558, vrr_stack+259, vrr_stack+1442, vrr_stack+827);
 _BUILD_g0h0(Data,vrr_stack+2513, vrr_stack+1757, vrr_stack+2303, vrr_stack+1631, vrr_stack+1505, vrr_stack+917);
 _BUILD_g0h0(Data,vrr_stack+684, vrr_stack+2093, vrr_stack+1757, vrr_stack+1967, vrr_stack+1631, vrr_stack+1067);
 _BUILD_00i0(Data,vrr_stack+1967, vrr_stack+217, vrr_stack+406, vrr_stack+39, vrr_stack+69, NULL);
 _BUILD_00i0(Data,vrr_stack+1995, vrr_stack+238, vrr_stack+217, vrr_stack+54, vrr_stack+39, NULL);
 _BUILD_p0i0(Data,vrr_stack+999, vrr_stack+1995, vrr_stack+1967, NULL, NULL, vrr_stack+217);
 _BUILD_00i0(Data,vrr_stack+2023, vrr_stack+322, vrr_stack+238, vrr_stack+141, vrr_stack+54, NULL);
 _BUILD_p0i0(Data,vrr_stack+1083, vrr_stack+2023, vrr_stack+1995, NULL, NULL, vrr_stack+238);
 _BUILD_00i0(Data,vrr_stack+39, vrr_stack+406, vrr_stack+18, vrr_stack+69, vrr_stack+3, NULL);
 _BUILD_p0i0(Data,vrr_stack+2828, vrr_stack+1967, vrr_stack+39, NULL, NULL, vrr_stack+406);
 _BUILD_d0i0(Data,vrr_stack+2912, vrr_stack+999, vrr_stack+2828, vrr_stack+1995, vrr_stack+1967, vrr_stack+1442);
 _BUILD_d0i0(Data,vrr_stack+3080, vrr_stack+1083, vrr_stack+999, vrr_stack+2023, vrr_stack+1995, vrr_stack+259);
 _BUILD_f0i0(Data,vrr_stack+3248, vrr_stack+3080, vrr_stack+2912, vrr_stack+1083, vrr_stack+999, vrr_stack+1505);
 _BUILD_00i0(Data,vrr_stack+259, vrr_stack+443, vrr_stack+322, vrr_stack+156, vrr_stack+141, NULL);
 _BUILD_p0i0(Data,vrr_stack+1442, vrr_stack+259, vrr_stack+2023, NULL, NULL, vrr_stack+322);
 _BUILD_d0i0(Data,vrr_stack+3528, vrr_stack+1442, vrr_stack+1083, vrr_stack+259, vrr_stack+2023, vrr_stack+343);
 _BUILD_f0i0(Data,vrr_stack+3696, vrr_stack+3528, vrr_stack+3080, vrr_stack+1442, vrr_stack+1083, vrr_stack+1631);
 _BUILD_00p0(Data,vrr_stack+1442, Data->F+10, Data->F+11, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+1445, vrr_stack+0, vrr_stack+1442, Data->F+9, Data->F+10, NULL);
 _BUILD_00f0(Data,vrr_stack+1451, vrr_stack+464, vrr_stack+1445, vrr_stack+171, vrr_stack+0, NULL);
 _BUILD_00g0(Data,vrr_stack+1461, vrr_stack+470, vrr_stack+1451, vrr_stack+174, vrr_stack+464, NULL);
 _BUILD_00h0(Data,vrr_stack+1476, vrr_stack+480, vrr_stack+1461, vrr_stack+180, vrr_stack+470, NULL);
 _BUILD_00i0(Data,vrr_stack+1497, vrr_stack+18, vrr_stack+1476, vrr_stack+3, vrr_stack+480, NULL);
 _BUILD_p0i0(Data,vrr_stack+1525, vrr_stack+39, vrr_stack+1497, NULL, NULL, vrr_stack+18);
 _BUILD_d0i0(Data,vrr_stack+3976, vrr_stack+2828, vrr_stack+1525, vrr_stack+1967, vrr_stack+39, vrr_stack+495);
 _BUILD_f0i0(Data,vrr_stack+4144, vrr_stack+2912, vrr_stack+3976, vrr_stack+999, vrr_stack+2828, vrr_stack+558);
 _BUILD_g0i0(Data,vrr_stack+4424, vrr_stack+3248, vrr_stack+4144, vrr_stack+3080, vrr_stack+2912, vrr_stack+2303);
 _BUILD_g0i0(Data,vrr_stack+4844, vrr_stack+3696, vrr_stack+3248, vrr_stack+3528, vrr_stack+3080, vrr_stack+1757);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+3528, vrr_stack+1967, vrr_stack+39, vrr_stack+217, vrr_stack+406, NULL);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+3564, vrr_stack+1995, vrr_stack+1967, vrr_stack+238, vrr_stack+217, NULL);
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+2303, vrr_stack+3564, vrr_stack+3528, NULL, NULL, vrr_stack+1967);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+3600, vrr_stack+2023, vrr_stack+1995, vrr_stack+322, vrr_stack+238, NULL);
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+495, vrr_stack+3600, vrr_stack+3564, NULL, NULL, vrr_stack+1995);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+1967, vrr_stack+39, vrr_stack+1497, vrr_stack+406, vrr_stack+18, NULL);
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+1609, vrr_stack+3528, vrr_stack+1967, NULL, NULL, vrr_stack+39);
 am[0] = 2;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+39, vrr_stack+2303, vrr_stack+1609, vrr_stack+3564, vrr_stack+3528, vrr_stack+2828);
 am[0] = 2;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+5264, vrr_stack+495, vrr_stack+2303, vrr_stack+3600, vrr_stack+3564, vrr_stack+999);
 am[0] = 3;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+5480, vrr_stack+5264, vrr_stack+39, vrr_stack+495, vrr_stack+2303, vrr_stack+2912);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+3564, vrr_stack+259, vrr_stack+2023, vrr_stack+443, vrr_stack+322, NULL);
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+2828, vrr_stack+3564, vrr_stack+3600, NULL, NULL, vrr_stack+2023);
 am[0] = 2;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+5840, vrr_stack+2828, vrr_stack+495, vrr_stack+3564, vrr_stack+3600, vrr_stack+1083);
 am[0] = 3;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+6056, vrr_stack+5840, vrr_stack+5264, vrr_stack+2828, vrr_stack+495, vrr_stack+3080);
 _BUILD_00p0(Data,vrr_stack+495, Data->F+11, Data->F+12, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+498, vrr_stack+1442, vrr_stack+495, Data->F+10, Data->F+11, NULL);
 _BUILD_00f0(Data,vrr_stack+504, vrr_stack+1445, vrr_stack+498, vrr_stack+0, vrr_stack+1442, NULL);
 _BUILD_00g0(Data,vrr_stack+0, vrr_stack+1451, vrr_stack+504, vrr_stack+464, vrr_stack+1445, NULL);
 _BUILD_00h0(Data,vrr_stack+495, vrr_stack+1461, vrr_stack+0, vrr_stack+470, vrr_stack+1451, NULL);
 _BUILD_00i0(Data,vrr_stack+516, vrr_stack+1476, vrr_stack+495, vrr_stack+480, vrr_stack+1461, NULL);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+544, vrr_stack+1497, vrr_stack+516, vrr_stack+18, vrr_stack+1476, NULL);
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+2828, vrr_stack+1967, vrr_stack+544, NULL, NULL, vrr_stack+1497);
 am[0] = 2;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+2936, vrr_stack+1609, vrr_stack+2828, vrr_stack+3528, vrr_stack+1967, vrr_stack+1525);
 am[0] = 3;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+255, vrr_stack+39, vrr_stack+2936, vrr_stack+2303, vrr_stack+1609, vrr_stack+3976);
 am[0] = 4;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+6416, vrr_stack+5480, vrr_stack+255, vrr_stack+5264, vrr_stack+39, vrr_stack+4144);
 am[0] = 4;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+0, vrr_stack+6056, vrr_stack+5480, vrr_stack+5840, vrr_stack+5264, vrr_stack+3248);
 _BUILD_h0h0(Data,vrr_stack+3976, vrr_stack+684, vrr_stack+2513, vrr_stack+2093, vrr_stack+1757, vrr_stack+1217);
   tmp = vrr_stack + 3976;
   target_ptr = Libint->vrr_classes[5][5];
   for(i=0;i<441;i++)
     target_ptr[i] += tmp[i];
 _BUILD_h0i0(Data,vrr_stack+540, vrr_stack+4844, vrr_stack+4424, vrr_stack+3696, vrr_stack+3248, vrr_stack+2513);
   tmp = vrr_stack + 540;
   target_ptr = Libint->vrr_classes[5][6];
   for(i=0;i<588;i++)
     target_ptr[i] += tmp[i];
 am[0] = 5;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+1128, vrr_stack+0, vrr_stack+6416, vrr_stack+6056, vrr_stack+5480, vrr_stack+4424);
   tmp = vrr_stack + 1128;
   target_ptr = Libint->vrr_classes[5][7];
   for(i=0;i<756;i++)
     target_ptr[i] += tmp[i];

}

