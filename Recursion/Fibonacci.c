#include<stdio.h>

int fibo(int n)
{
    if(n<=1)
        return n;
    else
        return fibo(n-2)+fibo(n-1);
}

int main()
{
    int n;
    printf("Enter the value of n=");
    scanf("%d",&n);
    printf("%d\n",fibo(n));
    return 0;
}