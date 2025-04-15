#include<stdio.h>
#include<conio.h>
int main()
{
    int a,c=0;
    printf("ENTER A NO:");
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
    if(a%i==0)
{
    c=c++;
}
    }
    if(c>=3)
        {printf("%d IS NOT A PRIME NO:",a);}
    else
    {
        printf("%d IS A PRIME NO...",a);
    }
    getch();
    }

