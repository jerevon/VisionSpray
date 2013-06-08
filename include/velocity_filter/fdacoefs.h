/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 *
 * Generated by MATLAB(R) 7.14 and the Signal Processing Toolbox 6.17.
 *
 * Generated on: 07-Jun-2013 13:48:52
 *
 */

/*
 * Discrete-Time IIR Filter (real)
 * -------------------------------
 * Filter Structure    : Direct-Form II, Second-Order Sections
 * Number of Sections  : 2
 * Stable              : Yes
 * Linear Phase        : No
 */

/* General type conversion for MATLAB generated C-code  */
//#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * /opt/mat2k12a/extern/include/tmwtypes.h 
 */
#define MWSPT_NSEC 5
const int NL[MWSPT_NSEC] = { 1,3,1,3,1 };
const double NUM[MWSPT_NSEC][3] = {
  {
   0.002141880667056,                 0,                 0 
  },
  {
                   1,                 2,                 1 
  },
  {
   0.002041518402531,                 0,                 0 
  },
  {
                   1,                 2,                 1 
  },
  {
                   1,                 0,                 0 
  }
};
const int DL[MWSPT_NSEC] = { 1,3,1,3,1 };
const double DEN[MWSPT_NSEC][3] = {
  {
                   1,                 0,                 0 
  },
  {
                   1,   -1.921908893579,    0.930476416247 
  },
  {
                   1,                 0,                 0 
  },
  {
                   1,   -1.831853863092,   0.8400199367025 
  },
  {
                   1,                 0,                 0 
  }
};