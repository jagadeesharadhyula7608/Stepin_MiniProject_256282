#include"stdio.h"
#include"math.h"
#include "line_parameters.h"
int main()
{
    int choice,ch; 
    while (1)
    {
     int rcv_pow,rcv_vol,res,inductor;
     double pf;
     system("cls");
     printf("1. Compute Short Transmission Line Parameters\n");
     printf("2. Compute Medium Transmission Line parameters\n"); 
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
                scanf("%d",&res);
                printf("\nEnter the Inductance of the Transmission Line: ");
                scanf("%d",&inductor);
                printf("\nEnter  Power Factor: ");
                scanf("%lf",&pf);
                shortLine(rcv_pow,rcv_vol,pf,res,inductor);
                printf("Press any key to continue\n");
                ch=getch();
                
                break;
        case 2:
                printf("Press any key to continue\n");
                ch=getchar();
                break;
        case 3:
                printf("Press any key to continue\n");
                ch=getchar();
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