#include<stdio.h>

int sum(int n)
{
    if(n==0)
        return 0;
    else
        return sum(n-1)+n;
}

int main()
{
    int n;
    printf("Enter the value of n=");
    scanf("%d",&n);
    printf("Sum of %d natural numbers is %d",n,sum(n));
    return 0;
}