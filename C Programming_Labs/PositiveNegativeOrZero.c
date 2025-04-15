#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("ENTER A NO:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("THE NO %d IS POSITIVE...",a);
    }
    else if(a<0)
    {
        printf("THE NO %d IS NEGATIVE...",a);
    }
    else
    {
        printf("THE NO IS ZERO...");
    }
    getch();
}
