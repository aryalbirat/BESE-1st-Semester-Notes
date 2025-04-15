#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,s=0,k;
    printf("ENTER A NO:");
    scanf("%d",&n);
    k=n;
   while(n!=0)
    {
   r=n%10;
   s=s*10+r;
   n=n/10;
    }
    if(k==s)
    {printf("%d IS A PALINDROME ...",k);}
    else
    {printf("%d IS NOT A PALINDROME ...",k);}
    getch();
}
