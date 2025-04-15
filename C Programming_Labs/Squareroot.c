#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int r,square;
printf("ENTER A NUMBER:");
scanf("%d",&r);
square=r*r;
float squareroot,cuberoot;
squareroot=(float)sqrt(r);
cuberoot=(float)pow(r,0.33333);
printf("\nSQUARE IS : %d",square);
printf("\nSQUAREROOT IS : %f",squareroot);
printf("\nCUBEROOT IS : %f",cuberoot);
getch();
}
