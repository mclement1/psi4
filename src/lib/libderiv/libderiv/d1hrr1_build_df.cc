  /* This machine-generated function computes a quartet of (df| first derivative integrals */

void d1hrr1_build_df(const double *AB, double *vp, const double *I0, const double *I1,
        double c2, const double *I2, double c3, const double *I3, double c4, const double *I4,
        double c5, const double *I5, double c6, const double *I6, double c7, const double *I7, int cd_num)
{
  int cd;
  const double *i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7;
  const double AB0 = AB[0];
  const double AB1 = AB[1];
  const double AB2 = AB[2];
  i0 = I0;
  i1 = I1;
  i2 = I2;
  i5 = I5;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 1*cd_num;
  i1 = I1 + 1*cd_num;
  i2 = I2 + 1*cd_num;
  i5 = I5 + 1*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 2*cd_num;
  i1 = I1 + 2*cd_num;
  i2 = I2 + 2*cd_num;
  i5 = I5 + 2*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 3*cd_num;
  i1 = I1 + 3*cd_num;
  i2 = I2 + 3*cd_num;
  i5 = I5 + 3*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 4*cd_num;
  i1 = I1 + 4*cd_num;
  i2 = I2 + 4*cd_num;
  i5 = I5 + 4*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 5*cd_num;
  i1 = I1 + 5*cd_num;
  i2 = I2 + 5*cd_num;
  i5 = I5 + 5*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 9*cd_num;
  i1 = I1 + 3*cd_num;
  i3 = I3 + 3*cd_num;
  i6 = I6 + 3*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 10*cd_num;
  i1 = I1 + 4*cd_num;
  i3 = I3 + 4*cd_num;
  i6 = I6 + 4*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 11*cd_num;
  i1 = I1 + 5*cd_num;
  i3 = I3 + 5*cd_num;
  i6 = I6 + 5*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 17*cd_num;
  i1 = I1 + 5*cd_num;
  i4 = I4 + 5*cd_num;
  i7 = I7 + 5*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
  i0 = I0 + 6*cd_num;
  i1 = I1 + 6*cd_num;
  i2 = I2 + 6*cd_num;
  i5 = I5 + 6*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 7*cd_num;
  i1 = I1 + 7*cd_num;
  i2 = I2 + 7*cd_num;
  i5 = I5 + 7*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 8*cd_num;
  i1 = I1 + 8*cd_num;
  i2 = I2 + 8*cd_num;
  i5 = I5 + 8*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 9*cd_num;
  i1 = I1 + 9*cd_num;
  i2 = I2 + 9*cd_num;
  i5 = I5 + 9*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 10*cd_num;
  i1 = I1 + 10*cd_num;
  i2 = I2 + 10*cd_num;
  i5 = I5 + 10*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 11*cd_num;
  i1 = I1 + 11*cd_num;
  i2 = I2 + 11*cd_num;
  i5 = I5 + 11*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 21*cd_num;
  i1 = I1 + 9*cd_num;
  i3 = I3 + 9*cd_num;
  i6 = I6 + 9*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 22*cd_num;
  i1 = I1 + 10*cd_num;
  i3 = I3 + 10*cd_num;
  i6 = I6 + 10*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 23*cd_num;
  i1 = I1 + 11*cd_num;
  i3 = I3 + 11*cd_num;
  i6 = I6 + 11*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 29*cd_num;
  i1 = I1 + 11*cd_num;
  i4 = I4 + 11*cd_num;
  i7 = I7 + 11*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
  i0 = I0 + 12*cd_num;
  i1 = I1 + 12*cd_num;
  i2 = I2 + 12*cd_num;
  i5 = I5 + 12*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 13*cd_num;
  i1 = I1 + 13*cd_num;
  i2 = I2 + 13*cd_num;
  i5 = I5 + 13*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 14*cd_num;
  i1 = I1 + 14*cd_num;
  i2 = I2 + 14*cd_num;
  i5 = I5 + 14*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 15*cd_num;
  i1 = I1 + 15*cd_num;
  i2 = I2 + 15*cd_num;
  i5 = I5 + 15*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 16*cd_num;
  i1 = I1 + 16*cd_num;
  i2 = I2 + 16*cd_num;
  i5 = I5 + 16*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 17*cd_num;
  i1 = I1 + 17*cd_num;
  i2 = I2 + 17*cd_num;
  i5 = I5 + 17*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 27*cd_num;
  i1 = I1 + 15*cd_num;
  i3 = I3 + 15*cd_num;
  i6 = I6 + 15*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 28*cd_num;
  i1 = I1 + 16*cd_num;
  i3 = I3 + 16*cd_num;
  i6 = I6 + 16*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 29*cd_num;
  i1 = I1 + 17*cd_num;
  i3 = I3 + 17*cd_num;
  i6 = I6 + 17*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 35*cd_num;
  i1 = I1 + 17*cd_num;
  i4 = I4 + 17*cd_num;
  i7 = I7 + 17*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
  i0 = I0 + 18*cd_num;
  i1 = I1 + 18*cd_num;
  i2 = I2 + 18*cd_num;
  i5 = I5 + 18*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 19*cd_num;
  i1 = I1 + 19*cd_num;
  i2 = I2 + 19*cd_num;
  i5 = I5 + 19*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 20*cd_num;
  i1 = I1 + 20*cd_num;
  i2 = I2 + 20*cd_num;
  i5 = I5 + 20*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 21*cd_num;
  i1 = I1 + 21*cd_num;
  i2 = I2 + 21*cd_num;
  i5 = I5 + 21*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 22*cd_num;
  i1 = I1 + 22*cd_num;
  i2 = I2 + 22*cd_num;
  i5 = I5 + 22*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 23*cd_num;
  i1 = I1 + 23*cd_num;
  i2 = I2 + 23*cd_num;
  i5 = I5 + 23*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 39*cd_num;
  i1 = I1 + 21*cd_num;
  i3 = I3 + 21*cd_num;
  i6 = I6 + 21*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 40*cd_num;
  i1 = I1 + 22*cd_num;
  i3 = I3 + 22*cd_num;
  i6 = I6 + 22*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 41*cd_num;
  i1 = I1 + 23*cd_num;
  i3 = I3 + 23*cd_num;
  i6 = I6 + 23*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 47*cd_num;
  i1 = I1 + 23*cd_num;
  i4 = I4 + 23*cd_num;
  i7 = I7 + 23*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
  i0 = I0 + 24*cd_num;
  i1 = I1 + 24*cd_num;
  i2 = I2 + 24*cd_num;
  i5 = I5 + 24*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 25*cd_num;
  i1 = I1 + 25*cd_num;
  i2 = I2 + 25*cd_num;
  i5 = I5 + 25*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 26*cd_num;
  i1 = I1 + 26*cd_num;
  i2 = I2 + 26*cd_num;
  i5 = I5 + 26*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 27*cd_num;
  i1 = I1 + 27*cd_num;
  i2 = I2 + 27*cd_num;
  i5 = I5 + 27*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 28*cd_num;
  i1 = I1 + 28*cd_num;
  i2 = I2 + 28*cd_num;
  i5 = I5 + 28*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 29*cd_num;
  i1 = I1 + 29*cd_num;
  i2 = I2 + 29*cd_num;
  i5 = I5 + 29*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 45*cd_num;
  i1 = I1 + 27*cd_num;
  i3 = I3 + 27*cd_num;
  i6 = I6 + 27*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 46*cd_num;
  i1 = I1 + 28*cd_num;
  i3 = I3 + 28*cd_num;
  i6 = I6 + 28*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 47*cd_num;
  i1 = I1 + 29*cd_num;
  i3 = I3 + 29*cd_num;
  i6 = I6 + 29*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 53*cd_num;
  i1 = I1 + 29*cd_num;
  i4 = I4 + 29*cd_num;
  i7 = I7 + 29*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
  i0 = I0 + 30*cd_num;
  i1 = I1 + 30*cd_num;
  i2 = I2 + 30*cd_num;
  i5 = I5 + 30*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 31*cd_num;
  i1 = I1 + 31*cd_num;
  i2 = I2 + 31*cd_num;
  i5 = I5 + 31*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 32*cd_num;
  i1 = I1 + 32*cd_num;
  i2 = I2 + 32*cd_num;
  i5 = I5 + 32*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 33*cd_num;
  i1 = I1 + 33*cd_num;
  i2 = I2 + 33*cd_num;
  i5 = I5 + 33*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 34*cd_num;
  i1 = I1 + 34*cd_num;
  i2 = I2 + 34*cd_num;
  i5 = I5 + 34*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 35*cd_num;
  i1 = I1 + 35*cd_num;
  i2 = I2 + 35*cd_num;
  i5 = I5 + 35*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 51*cd_num;
  i1 = I1 + 33*cd_num;
  i3 = I3 + 33*cd_num;
  i6 = I6 + 33*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 52*cd_num;
  i1 = I1 + 34*cd_num;
  i3 = I3 + 34*cd_num;
  i6 = I6 + 34*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 53*cd_num;
  i1 = I1 + 35*cd_num;
  i3 = I3 + 35*cd_num;
  i6 = I6 + 35*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 59*cd_num;
  i1 = I1 + 35*cd_num;
  i4 = I4 + 35*cd_num;
  i7 = I7 + 35*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
}
