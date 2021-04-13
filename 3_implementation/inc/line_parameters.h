#ifndef __LINE_PARAMETERS_H__
#define __LINE_PARAMETERS_H__
#include "stdio.h"
#include "stdlib.h"
typedef struct complex_t
{
    double real;
    double img;
}c;
c c_mul(c ,c);
double c_mag(c);
double c_angle(c );
double * shortLine(int ,int ,double,double,double);
double * mediumLine(int, int ,double,double,double,double,int);
double * longLine(int, int, double ,double,double,double,int);
#endif 