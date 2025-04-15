#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e;
    float percentage;
    printf("ENTER MARKS IN 5 SUBJECTS(1-100):");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    percentage=(float)(a+b+c+d+e)/500*100;
    printf("\nTHE PERCENTAGE IS:%f",percentage);
    if(percentage>=90&&percentage<=100)
    {
        printf("\nTHE OBTAINED GRADE IS A+...");
    }
        else if(percentage>=80)
    {
        printf("\nTHE OBTAINED GRADE IS A...");
    }
            else if(percentage>=70)
    {
        printf("\nTHE OBTAINED GRADE IS B+...");
    }
            else if(percentage>=60)
    {
        printf("\nTHE OBTAINED GRADE IS B...");
    }
            else if(percentage>=50)
    {
        printf("\nTHE OBTAINED GRADE IS C+...");
    }
            else if(percentage>=40)
    {
        printf("\nTHE OBTAINED GRADE IS C...");
    }
            else if(percentage<40)
    {
        printf("\nYOU HAVE FAILED...");
    }
    else
    {
        printf("\nINVALID DATA!!!");
    }
    getch();
}
