#include "stdio.h"
#include "math.h"
#include "line_parameters.h"

c c_mul(c z,c i)
{
    c res;
    res.real=(z.real*i.real)+(-z.img*i.img);
    res.img=(z.real*i.img)+(z.img*i.real);
    return res;

}
double c_mag(c res)
{
 return   (double) sqrt(pow(res.real,2)+pow(res.img,2));
}

void shortLine(int rcv_pow,int rcv_vol ,double pf,int res, int inductor )
{
    double sinteta,curr,eff,reg,send_vol,send_pow;
    c z,irbar,vs,r;
    rcv_vol=rcv_vol/sqrt(3);
    curr=rcv_pow/(3*rcv_vol*pf);
    sinteta=sin(acos(pf));
    z.real=res;
    z.img=inductor;
    irbar.real=curr*pf;
    irbar.img=-curr*sinteta;
    r=c_mul(z,irbar);
    vs.real=rcv_vol+r.real;
    vs.img=r.img;
    send_vol=c_mag(vs);
    send_pow=rcv_pow+((3*pow(curr,2)*res));
    eff=(rcv_pow/send_pow)*100;
    reg=((send_vol-rcv_vol)*100)/rcv_vol;
    printf("\n");
    printf("...Sending end Voltage is %lf+i%lf\n",vs.real,vs.img);
    printf("...The efficieny of Short transmission Line is %lf\n",eff);
    printf("...The voltage regulation if short transmission line is %lf\n",reg);
}
