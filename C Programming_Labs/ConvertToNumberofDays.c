#include<stdio.h>
#include<conio.h>
int main()
{
    int year,month,day,d;
    printf("ENTER NO of YEARS MONTHS AND DAYS:");
    scanf("%d%d%d",&year,&month,&day);
    d=year*365+month*30+day;
    printf("\nTHE NO OF DAYS IS :%d",d);
    getch();
}
