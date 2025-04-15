#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="10101";

    for(int i=strlen(a);i>=1;i--)
    {
        for(int s=1;s<=strlen(a)-i;s++)
        {
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("%c",a[j]);
        }
        printf("\n");
    }
    return 0;
    }
