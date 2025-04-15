#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("ENTER A CHARACTER:");
    scanf("%c",&ch);
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
    {
    printf("%c is an alphabet...",ch);
    }
    else if(ch>='0'&&ch<='9')
    {
    printf("%c IS THE NUMBER...",ch);
    }
    else
        {
        printf("%c IS THE SPECIAL SYMBOL...",ch);
        }
        getch();
}
