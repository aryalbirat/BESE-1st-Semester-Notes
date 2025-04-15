#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,gcd,lcm;
    printf("ENTER TWO NOS:");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a;i++)
    {
    if(a%i==0&&b%i==0)

{
    gcd=i;
}
    }
lcm=(a*b)/gcd;
printf("GCD IS %d",gcd);
printf("\nLCM IS %d",lcm);
getch();
    }
