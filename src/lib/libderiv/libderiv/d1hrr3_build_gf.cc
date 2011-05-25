  /* This machine-generated function computes a quartet of |gf) first derivative ERIs */

void d1hrr3_build_gf(const double *CD, double *vp, const double *I0, const double *I1,
        double c2, const double *I2, double c3, const double *I3, double c4, const double *I4,
        double c5, const double *I5, double c6, const double *I6, double c7, const double *I7, int ab_num)
{
  int ab;
  const double CD0 = CD[0];
  const double CD1 = CD[1];
  const double CD2 = CD[2];
  for(ab=0;ab<ab_num;ab++) {
    *(vp++) = I0[0] + CD0*I1[0] + c2*I2[0] - c5*I5[0];
    *(vp++) = I0[1] + CD0*I1[1] + c2*I2[1] - c5*I5[1];
    *(vp++) = I0[2] + CD0*I1[2] + c2*I2[2] - c5*I5[2];
    *(vp++) = I0[3] + CD0*I1[3] + c2*I2[3] - c5*I5[3];
    *(vp++) = I0[4] + CD0*I1[4] + c2*I2[4] - c5*I5[4];
    *(vp++) = I0[5] + CD0*I1[5] + c2*I2[5] - c5*I5[5];
    *(vp++) = I0[9] + CD1*I1[3] + c3*I3[3] - c6*I6[3];
    *(vp++) = I0[10] + CD1*I1[4] + c3*I3[4] - c6*I6[4];
    *(vp++) = I0[11] + CD1*I1[5] + c3*I3[5] - c6*I6[5];
    *(vp++) = I0[17] + CD2*I1[5] + c4*I4[5] - c7*I7[5];
    *(vp++) = I0[6] + CD0*I1[6] + c2*I2[6] - c5*I5[6];
    *(vp++) = I0[7] + CD0*I1[7] + c2*I2[7] - c5*I5[7];
    *(vp++) = I0[8] + CD0*I1[8] + c2*I2[8] - c5*I5[8];
    *(vp++) = I0[9] + CD0*I1[9] + c2*I2[9] - c5*I5[9];
    *(vp++) = I0[10] + CD0*I1[10] + c2*I2[10] - c5*I5[10];
    *(vp++) = I0[11] + CD0*I1[11] + c2*I2[11] - c5*I5[11];
    *(vp++) = I0[21] + CD1*I1[9] + c3*I3[9] - c6*I6[9];
    *(vp++) = I0[22] + CD1*I1[10] + c3*I3[10] - c6*I6[10];
    *(vp++) = I0[23] + CD1*I1[11] + c3*I3[11] - c6*I6[11];
    *(vp++) = I0[29] + CD2*I1[11] + c4*I4[11] - c7*I7[11];
    *(vp++) = I0[12] + CD0*I1[12] + c2*I2[12] - c5*I5[12];
    *(vp++) = I0[13] + CD0*I1[13] + c2*I2[13] - c5*I5[13];
    *(vp++) = I0[14] + CD0*I1[14] + c2*I2[14] - c5*I5[14];
    *(vp++) = I0[15] + CD0*I1[15] + c2*I2[15] - c5*I5[15];
    *(vp++) = I0[16] + CD0*I1[16] + c2*I2[16] - c5*I5[16];
    *(vp++) = I0[17] + CD0*I1[17] + c2*I2[17] - c5*I5[17];
    *(vp++) = I0[27] + CD1*I1[15] + c3*I3[15] - c6*I6[15];
    *(vp++) = I0[28] + CD1*I1[16] + c3*I3[16] - c6*I6[16];
    *(vp++) = I0[29] + CD1*I1[17] + c3*I3[17] - c6*I6[17];
    *(vp++) = I0[35] + CD2*I1[17] + c4*I4[17] - c7*I7[17];
    *(vp++) = I0[18] + CD0*I1[18] + c2*I2[18] - c5*I5[18];
    *(vp++) = I0[19] + CD0*I1[19] + c2*I2[19] - c5*I5[19];
    *(vp++) = I0[20] + CD0*I1[20] + c2*I2[20] - c5*I5[20];
    *(vp++) = I0[21] + CD0*I1[21] + c2*I2[21] - c5*I5[21];
    *(vp++) = I0[22] + CD0*I1[22] + c2*I2[22] - c5*I5[22];
    *(vp++) = I0[23] + CD0*I1[23] + c2*I2[23] - c5*I5[23];
    *(vp++) = I0[39] + CD1*I1[21] + c3*I3[21] - c6*I6[21];
    *(vp++) = I0[40] + CD1*I1[22] + c3*I3[22] - c6*I6[22];
    *(vp++) = I0[41] + CD1*I1[23] + c3*I3[23] - c6*I6[23];
    *(vp++) = I0[47] + CD2*I1[23] + c4*I4[23] - c7*I7[23];
    *(vp++) = I0[24] + CD0*I1[24] + c2*I2[24] - c5*I5[24];
    *(vp++) = I0[25] + CD0*I1[25] + c2*I2[25] - c5*I5[25];
    *(vp++) = I0[26] + CD0*I1[26] + c2*I2[26] - c5*I5[26];
    *(vp++) = I0[27] + CD0*I1[27] + c2*I2[27] - c5*I5[27];
    *(vp++) = I0[28] + CD0*I1[28] + c2*I2[28] - c5*I5[28];
    *(vp++) = I0[29] + CD0*I1[29] + c2*I2[29] - c5*I5[29];
    *(vp++) = I0[45] + CD1*I1[27] + c3*I3[27] - c6*I6[27];
    *(vp++) = I0[46] + CD1*I1[28] + c3*I3[28] - c6*I6[28];
    *(vp++) = I0[47] + CD1*I1[29] + c3*I3[29] - c6*I6[29];
    *(vp++) = I0[53] + CD2*I1[29] + c4*I4[29] - c7*I7[29];
    *(vp++) = I0[30] + CD0*I1[30] + c2*I2[30] - c5*I5[30];
    *(vp++) = I0[31] + CD0*I1[31] + c2*I2[31] - c5*I5[31];
    *(vp++) = I0[32] + CD0*I1[32] + c2*I2[32] - c5*I5[32];
    *(vp++) = I0[33] + CD0*I1[33] + c2*I2[33] - c5*I5[33];
    *(vp++) = I0[34] + CD0*I1[34] + c2*I2[34] - c5*I5[34];
    *(vp++) = I0[35] + CD0*I1[35] + c2*I2[35] - c5*I5[35];
    *(vp++) = I0[51] + CD1*I1[33] + c3*I3[33] - c6*I6[33];
    *(vp++) = I0[52] + CD1*I1[34] + c3*I3[34] - c6*I6[34];
    *(vp++) = I0[53] + CD1*I1[35] + c3*I3[35] - c6*I6[35];
    *(vp++) = I0[59] + CD2*I1[35] + c4*I4[35] - c7*I7[35];
    *(vp++) = I0[36] + CD0*I1[36] + c2*I2[36] - c5*I5[36];
    *(vp++) = I0[37] + CD0*I1[37] + c2*I2[37] - c5*I5[37];
    *(vp++) = I0[38] + CD0*I1[38] + c2*I2[38] - c5*I5[38];
    *(vp++) = I0[39] + CD0*I1[39] + c2*I2[39] - c5*I5[39];
    *(vp++) = I0[40] + CD0*I1[40] + c2*I2[40] - c5*I5[40];
    *(vp++) = I0[41] + CD0*I1[41] + c2*I2[41] - c5*I5[41];
    *(vp++) = I0[63] + CD1*I1[39] + c3*I3[39] - c6*I6[39];
    *(vp++) = I0[64] + CD1*I1[40] + c3*I3[40] - c6*I6[40];
    *(vp++) = I0[65] + CD1*I1[41] + c3*I3[41] - c6*I6[41];
    *(vp++) = I0[71] + CD2*I1[41] + c4*I4[41] - c7*I7[41];
    *(vp++) = I0[42] + CD0*I1[42] + c2*I2[42] - c5*I5[42];
    *(vp++) = I0[43] + CD0*I1[43] + c2*I2[43] - c5*I5[43];
    *(vp++) = I0[44] + CD0*I1[44] + c2*I2[44] - c5*I5[44];
    *(vp++) = I0[45] + CD0*I1[45] + c2*I2[45] - c5*I5[45];
    *(vp++) = I0[46] + CD0*I1[46] + c2*I2[46] - c5*I5[46];
    *(vp++) = I0[47] + CD0*I1[47] + c2*I2[47] - c5*I5[47];
    *(vp++) = I0[69] + CD1*I1[45] + c3*I3[45] - c6*I6[45];
    *(vp++) = I0[70] + CD1*I1[46] + c3*I3[46] - c6*I6[46];
    *(vp++) = I0[71] + CD1*I1[47] + c3*I3[47] - c6*I6[47];
    *(vp++) = I0[77] + CD2*I1[47] + c4*I4[47] - c7*I7[47];
    *(vp++) = I0[48] + CD0*I1[48] + c2*I2[48] - c5*I5[48];
    *(vp++) = I0[49] + CD0*I1[49] + c2*I2[49] - c5*I5[49];
    *(vp++) = I0[50] + CD0*I1[50] + c2*I2[50] - c5*I5[50];
    *(vp++) = I0[51] + CD0*I1[51] + c2*I2[51] - c5*I5[51];
    *(vp++) = I0[52] + CD0*I1[52] + c2*I2[52] - c5*I5[52];
    *(vp++) = I0[53] + CD0*I1[53] + c2*I2[53] - c5*I5[53];
    *(vp++) = I0[75] + CD1*I1[51] + c3*I3[51] - c6*I6[51];
    *(vp++) = I0[76] + CD1*I1[52] + c3*I3[52] - c6*I6[52];
    *(vp++) = I0[77] + CD1*I1[53] + c3*I3[53] - c6*I6[53];
    *(vp++) = I0[83] + CD2*I1[53] + c4*I4[53] - c7*I7[53];
    *(vp++) = I0[54] + CD0*I1[54] + c2*I2[54] - c5*I5[54];
    *(vp++) = I0[55] + CD0*I1[55] + c2*I2[55] - c5*I5[55];
    *(vp++) = I0[56] + CD0*I1[56] + c2*I2[56] - c5*I5[56];
    *(vp++) = I0[57] + CD0*I1[57] + c2*I2[57] - c5*I5[57];
    *(vp++) = I0[58] + CD0*I1[58] + c2*I2[58] - c5*I5[58];
    *(vp++) = I0[59] + CD0*I1[59] + c2*I2[59] - c5*I5[59];
    *(vp++) = I0[81] + CD1*I1[57] + c3*I3[57] - c6*I6[57];
    *(vp++) = I0[82] + CD1*I1[58] + c3*I3[58] - c6*I6[58];
    *(vp++) = I0[83] + CD1*I1[59] + c3*I3[59] - c6*I6[59];
    *(vp++) = I0[89] + CD2*I1[59] + c4*I4[59] - c7*I7[59];
    *(vp++) = I0[60] + CD0*I1[60] + c2*I2[60] - c5*I5[60];
    *(vp++) = I0[61] + CD0*I1[61] + c2*I2[61] - c5*I5[61];
    *(vp++) = I0[62] + CD0*I1[62] + c2*I2[62] - c5*I5[62];
    *(vp++) = I0[63] + CD0*I1[63] + c2*I2[63] - c5*I5[63];
    *(vp++) = I0[64] + CD0*I1[64] + c2*I2[64] - c5*I5[64];
    *(vp++) = I0[65] + CD0*I1[65] + c2*I2[65] - c5*I5[65];
    *(vp++) = I0[93] + CD1*I1[63] + c3*I3[63] - c6*I6[63];
    *(vp++) = I0[94] + CD1*I1[64] + c3*I3[64] - c6*I6[64];
    *(vp++) = I0[95] + CD1*I1[65] + c3*I3[65] - c6*I6[65];
    *(vp++) = I0[101] + CD2*I1[65] + c4*I4[65] - c7*I7[65];
    *(vp++) = I0[66] + CD0*I1[66] + c2*I2[66] - c5*I5[66];
    *(vp++) = I0[67] + CD0*I1[67] + c2*I2[67] - c5*I5[67];
    *(vp++) = I0[68] + CD0*I1[68] + c2*I2[68] - c5*I5[68];
    *(vp++) = I0[69] + CD0*I1[69] + c2*I2[69] - c5*I5[69];
    *(vp++) = I0[70] + CD0*I1[70] + c2*I2[70] - c5*I5[70];
    *(vp++) = I0[71] + CD0*I1[71] + c2*I2[71] - c5*I5[71];
    *(vp++) = I0[99] + CD1*I1[69] + c3*I3[69] - c6*I6[69];
    *(vp++) = I0[100] + CD1*I1[70] + c3*I3[70] - c6*I6[70];
    *(vp++) = I0[101] + CD1*I1[71] + c3*I3[71] - c6*I6[71];
    *(vp++) = I0[107] + CD2*I1[71] + c4*I4[71] - c7*I7[71];
    *(vp++) = I0[72] + CD0*I1[72] + c2*I2[72] - c5*I5[72];
    *(vp++) = I0[73] + CD0*I1[73] + c2*I2[73] - c5*I5[73];
    *(vp++) = I0[74] + CD0*I1[74] + c2*I2[74] - c5*I5[74];
    *(vp++) = I0[75] + CD0*I1[75] + c2*I2[75] - c5*I5[75];
    *(vp++) = I0[76] + CD0*I1[76] + c2*I2[76] - c5*I5[76];
    *(vp++) = I0[77] + CD0*I1[77] + c2*I2[77] - c5*I5[77];
    *(vp++) = I0[105] + CD1*I1[75] + c3*I3[75] - c6*I6[75];
    *(vp++) = I0[106] + CD1*I1[76] + c3*I3[76] - c6*I6[76];
    *(vp++) = I0[107] + CD1*I1[77] + c3*I3[77] - c6*I6[77];
    *(vp++) = I0[113] + CD2*I1[77] + c4*I4[77] - c7*I7[77];
    *(vp++) = I0[78] + CD0*I1[78] + c2*I2[78] - c5*I5[78];
    *(vp++) = I0[79] + CD0*I1[79] + c2*I2[79] - c5*I5[79];
    *(vp++) = I0[80] + CD0*I1[80] + c2*I2[80] - c5*I5[80];
    *(vp++) = I0[81] + CD0*I1[81] + c2*I2[81] - c5*I5[81];
    *(vp++) = I0[82] + CD0*I1[82] + c2*I2[82] - c5*I5[82];
    *(vp++) = I0[83] + CD0*I1[83] + c2*I2[83] - c5*I5[83];
    *(vp++) = I0[111] + CD1*I1[81] + c3*I3[81] - c6*I6[81];
    *(vp++) = I0[112] + CD1*I1[82] + c3*I3[82] - c6*I6[82];
    *(vp++) = I0[113] + CD1*I1[83] + c3*I3[83] - c6*I6[83];
    *(vp++) = I0[119] + CD2*I1[83] + c4*I4[83] - c7*I7[83];
    *(vp++) = I0[84] + CD0*I1[84] + c2*I2[84] - c5*I5[84];
    *(vp++) = I0[85] + CD0*I1[85] + c2*I2[85] - c5*I5[85];
    *(vp++) = I0[86] + CD0*I1[86] + c2*I2[86] - c5*I5[86];
    *(vp++) = I0[87] + CD0*I1[87] + c2*I2[87] - c5*I5[87];
    *(vp++) = I0[88] + CD0*I1[88] + c2*I2[88] - c5*I5[88];
    *(vp++) = I0[89] + CD0*I1[89] + c2*I2[89] - c5*I5[89];
    *(vp++) = I0[117] + CD1*I1[87] + c3*I3[87] - c6*I6[87];
    *(vp++) = I0[118] + CD1*I1[88] + c3*I3[88] - c6*I6[88];
    *(vp++) = I0[119] + CD1*I1[89] + c3*I3[89] - c6*I6[89];
    *(vp++) = I0[125] + CD2*I1[89] + c4*I4[89] - c7*I7[89];
    I0 += 126;
    I1 += 90;
    I2 += 90;
    I3 += 90;
    I4 += 90;
    I5 += 90;
    I6 += 90;
    I7 += 90;
  }
}
