#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("ENTER A NO:");
    scanf("%d",&n);
     for(int i=1;i<=n;i++)
    {
        printf("7  X  %d  = %d\n",i,7*i);
    }
    getch();
}
