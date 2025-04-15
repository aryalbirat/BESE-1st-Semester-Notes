#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,s=0;
    printf("ENTER A NO:");
    scanf("%d",&n);
   while(n!=0)
    {
   r=n%10;
   s=s*10+r;
   n=n/10;
    }
    printf("%d IS THE REVERSE",s);
    getch();
}

