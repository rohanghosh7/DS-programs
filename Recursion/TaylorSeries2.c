//Taylor Series using recursion applying Horners rule

#include<stdio.h>

double e(int x,int n)
{
    static double s=1;
    if(n==0)
        return s;
    else
    {
       s=1+(x*s)/n;
       return e(x,n-1);
    }
}

int main()
{
    int x,n;
    printf("Enter the value of x and n in Taylor Series=");
    scanf("%d%d",&x,&n);
    printf("Value=%lf",e(x,n));
    return 0;
}