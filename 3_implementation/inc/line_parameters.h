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
void shortLine(int ,int ,double,int ,int );
void mediumLine(int, int ,double,int);
void longLine(int, int, double , int);

#endif 