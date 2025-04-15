#include <stdio.h>
#include<conio.h>

int main() 
{
    int a=2,d=3,sum=0;
    for (int n=1;n<=10;n++)
    {
        printf("%d\t",a+(n-1)*d);
        sum=n/2*(2*a+(n-1)*d);
    }
    printf("\nTHE SUM IS:%d",sum);
    getch();
}

