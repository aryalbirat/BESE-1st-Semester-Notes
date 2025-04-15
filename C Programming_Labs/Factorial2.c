#include<stdio.h>

double fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

double power(double x, int n)
{
    double result=1;
    for(int i=1;i<=n;i++)
    {
        result*=x;
    }
    return result;
}

double f(int x, int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return (power(x,n)/fact(n))+f(x,n-1);
    }
}

int main()
{
    int x,n;

    printf("Enter the value of x: ");
    scanf("%d",&x);

    printf("Enter the number of terms (n): ");
    scanf("%d",&n);

    printf("f(x) = %.2lf",f(x,n));

    return 0;
}
