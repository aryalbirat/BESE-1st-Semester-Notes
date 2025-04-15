#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("ENTER A CHARACTER:");
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
    printf("%c is a vowel...",ch);
    }
    else
        {
        printf("%c IS a consonant...",ch);
        }
        getch();
}
