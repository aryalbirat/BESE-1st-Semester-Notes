#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("ENTER A YEAR:");
    scanf("%d",&a);
    if(a%400==0)
    {
        printf("THE YEAR %d IS LEAP YEAR...",a);
    }
    else if(a%4==0&&a%100!=0)
    {
        printf("THE YEAR %d IS LEAP YEAR...",a);
    }
    else
    {
        printf("THE YEAR %d IS NOT A LEAP YEAR...",a);
    }
    getch();
}
