#include<stdio.h>

int power(int m,int n)
{
    if(n==0)
        return 1;
    else
        return power(m,n-1)*m;
}

int main()
{
    int m,n;
    printf("Enter the value of m and n=");
    scanf("%d%d",&m,&n);
    printf("%d to the power of %d is %d",m,n,power(m,n));
    return 0;
}