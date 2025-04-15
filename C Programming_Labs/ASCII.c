#include<stdio.h>
int main()
{
    int a,c,d;
    printf("ENTER...");
    scanf("%d",&a);
    c=a++;
    d=++a;
    printf("%d",c);
    printf("%d",d);
    getch();

}
