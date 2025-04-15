#include<stdio.h>
#include<conio.h>
int main()
{
    int year,month,day,a,r;
    printf("ENTER NO of days:");
    scanf("%d",&a);
    year=a/365;
    r=a%365;
    month=r/30;
    day=r%30;
    printf("\nTHE NO OF YEARS IS :%d",year);
    printf("\nTHE NO OF MONTHS IS :%d",month);
    printf("\nTHE NO OF DAYS IS :%d",day);
    getch();
}
