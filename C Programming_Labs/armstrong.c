
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,r,s=0,k;
    printf("ENTER A NO:");
    scanf("%d",&n);
    k=n;
   while(n!=0)
    {
   r=n%10;
   s=s+pow(r,3);
   n=n/10;
    }
    if(k==s)
    {printf("%d IS AN ARMSTRONG NO ...",k);}
    else
    {printf("%d IS NOT AN ARMSTRONG NO...",k);}
    getch();
}
