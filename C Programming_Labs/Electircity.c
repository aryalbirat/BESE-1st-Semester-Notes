#include<stdio.h>
#include<conio.h>
int main()
{
    float t,x;
    int a;
    printf("ENTER A THE ELECTRICITY CONSUMPTION (in units):");
    scanf("%d",&a);
    if(a<=250)
    {
        if(a<=50)
        {
            t=a*0.5;
        }
    else if(a<=150)
    {
        t=(float)50*0.5+(a-50)*0.75;
    }
     else 
    {
        t=(float)50*0.5+100*0.75+(a-150)*1.2;
    }
    }
    else
    {
    x=(float)50*0.5+100*0.75+100*1.2+(a-250)*1.5;
    t=(float)x+20/100*x;
    }
     printf("%f IS THE TOTAL COST...",t);
        getch();
}
