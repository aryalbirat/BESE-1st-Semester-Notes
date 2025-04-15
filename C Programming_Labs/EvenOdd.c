#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("ENTER A NO:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("THE NO %d IS EVEN...",a);
    }
    else
    {
        printf("THE NO %d IS ODD...",a);
    }
    getch();
}