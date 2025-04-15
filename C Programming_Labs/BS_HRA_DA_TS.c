#include<stdio.h>
#include<conio.h>
int main()
{
    int bs;
    float hra,da,ts;
    printf("ENTER A THE BASIC SALARY OF THE EMPLOYEE:");
    scanf("%d",&bs);
    if(bs<=10000)
    {
        hra=(float)20/100*bs;
        da=(float)80/100*bs;
    }
    else if(bs<=20000)
    {
        hra=(float)25/100*bs;
        da=(float)90/100*bs;
    }
    else
    {   hra=(float)30/100*bs;
        da=(float)90/100*bs;
    }
    ts=(float)bs+hra+da;
     printf("%f IS THE TOTAL SALARY OF THE EMPLOYEE...",ts);
        getch();
}
