#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("ENTER A NO:");
    scanf("%d",&a);
    if(a%5==0&&a%11==0)
    {
        printf("THE NO %d IS DIVISIBLE BY 5 AND 11...",a);
    }
    else
    {
        printf("THE NO %d IS NOT DIVISIBLE BY 5 AND 11...",a);
    }
    getch();
}
