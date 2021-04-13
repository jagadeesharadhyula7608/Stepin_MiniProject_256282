#include"stdio.h"
#include"math.h"
#include "line_parameters.h"
#include "stdlib.h"
int main()
{
    int choice,ch; 
    while (1)
    {
     int rcv_pow,rcv_vol,len;
     double pf,*ptr,res,inductor,cap;
     system("cls");
     printf("1. Compute Short Transmission Line Parameters\n");
     printf("2. Compute Medium Transmission(Pi model) Line parameters\n"); 
     printf("3. Compute LongTransmission Line parameters\n");
     printf("4. Exit\n");
     printf("Enter your choice :");
     scanf("%d",&choice);
     system("cls");
     switch (choice)
     {
        case 1: 
                printf("..............Computing Short Transmission Line Parameters...........\n");
                printf("\nEnter the Receiving Power: ");
                scanf("%d",&rcv_pow);
                printf("\nEnter the Receiving Line Voltage: ");
                scanf("%d",&rcv_vol);
                printf("\nEnter the Resistance of Transmission Line: ");
                scanf("%lf",&res);
                printf("\nEnter the Inductance of the Transmission Line: ");
                scanf("%lf",&inductor);
                printf("\nEnter  Power Factor: ");
                scanf("%lf",&pf);
                ptr=shortLine(rcv_pow,rcv_vol,pf,res,inductor);
                printf("...Sending end Voltage is %.3lf+i%.3lf\n",*ptr,*(ptr+1));
                printf("...The efficieny of Short transmission Line is %.3lf\n",*(ptr+2));
                printf("...The voltage regulation of short transmission line is %.3lf\n",*(ptr+3));
                free(ptr);
                printf("Press any key to continue\n");
                ch=getch();
                break;
        case 2:
                printf("........Computing Medium Transmission Line Parameters(Nominal Pi model)........\n");
                printf("\nEnter the Resistance of Transmission Line per km: ");
                scanf("%lf",&res);
                printf("\nEnter the Inductance of the Transmission Line per km: ");
                scanf("%lf",&inductor);
                printf("\nEnter the Capacitive Suspectance of the Transmission Line per km: ");
                scanf("%lf",&cap);
                printf("\nEnter the Receiving Power: ");
                scanf("%d",&rcv_pow);
                printf("\nEnter the Receiving Line Voltage: ");
                scanf("%d",&rcv_vol);
                printf("\nEnter  Power Factor: ");
                scanf("%lf",&pf);
                printf("\nEnter the length of the Transmission Line: ");
                scanf("%d",&len);
                ptr=mediumLine(rcv_pow,rcv_vol,pf,res,inductor,cap,len);
                printf("...Sending end Voltage is %.3lf+i%.3lf\n",*ptr,*(ptr+1));
                printf("...Sending end Current is %.3lf+i%.3lf\n",*(ptr+2),*(ptr+3));
                printf("...Sending end Power Factor is %.3lf\n",*(ptr+4));
                printf("...The efficieny of Medium transmission Line is %.3lf\n",*(ptr+5));
                printf("...The voltage regulation of Medium transmission line is %.3lf\n",*(ptr+6));
                free(ptr);   
                printf("Press any key to continue\n");
                ch=getch();
                break;
        case 3:
                printf("..............Computing Long Transmission Line Parameters...........\n");
                 printf("\nEnter the Resistance of Transmission Line: ");
                scanf("%lf",&res);
                printf("\nEnter the Inductance of the Transmission Line: ");
                scanf("%lf",&inductor);
                printf("\nEnter the Capacitive Suspectance of the Transmission Line per km: ");
                scanf("%lf",&cap);
                printf("\nEnter the Receiving Power: ");
                scanf("%d",&rcv_pow);
                printf("\nEnter the Receiving Line Voltage: ");
                scanf("%d",&rcv_vol);
                printf("\nEnter  Power Factor: ");
                scanf("%lf",&pf);
                printf("\nEnter the length of the Transmission Line: ");
                scanf("%d",&len);
              ptr=longLine(rcv_pow,rcv_vol,pf,res,inductor,cap,len);
                printf("...Sending end Voltage is %lf+i%lf\n",*ptr,*(ptr+1));
                printf("...Sending end Current is %lf+i%lf\n",*(ptr+2),*(ptr+3));
                printf("...The efficieny of Long transmission Line is %lf\n",*(ptr+4));
                printf("...The voltage regulation of Long transmission line is %lf\n",*(ptr+5));
                free(ptr);
                printf("Press any key to continue\n");
                ch=getch();
                break;
        case 4:
                exit(0);
                break;
        default : 
                        printf("Please choose the correct choice\n");
                        break;
     }  
    }
}