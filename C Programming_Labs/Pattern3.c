#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
    for(int s=5;s<=(5-i);s++)
    {
        printf(" ");
    }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
    }
