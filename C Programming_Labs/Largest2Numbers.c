#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("ENTER TWO NOS:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is the greatest...",a);
    }
    else if(b>a)
    {
    printf("%d is the greatest...",b);
    }
   else
    {printf("THE NOS ARE EQUAL");}
    getch();
}

