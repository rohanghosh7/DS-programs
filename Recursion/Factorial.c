#include<stdio.h>

double fact(int n)
{
    if(n==0)
        return 1;
    else
        return fact(n-1)*n;
}

int main()
{
    int n;
    printf("Enter the value of n=");
    scanf("%d",&n);
    printf("Factorial of %d is %.2lf",n,fact(n));
    return 0;
}