#include <stdio.h>
#include<conio.h>
#include<math.h>

int main() 
{
    int a=2,r=3,k=0,sum=0;
    for (int n=1;n<=10;n++)
    {  k=a*pow(r,n-1);
        printf("%d\t",k);
        sum=sum+k;   
    }
     printf("\nTHE SUM IS:%d",sum);
    getch();
}