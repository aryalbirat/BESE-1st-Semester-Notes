#include<stdio.h>
#include<conio.h>

int main()
 {
    int i=1,sum=0;
    do
    {
     printf("%d\t",i);
     sum=sum+i;
     i++;
    }
     while(i<=10);
     printf("\nTHE SUM IS:%d",sum);
    
    getch();
}