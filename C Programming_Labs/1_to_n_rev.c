#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("ENTER A NO:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        printf("%d\t",i);
    }
    getch();
}
