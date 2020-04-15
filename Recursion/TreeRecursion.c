//Recursive call calling itself more than 1 time


#include<stdio.h>

void TreeRecursion(int n)
{
    if(n>0)
    {
        printf("%d ",n);  
        TreeRecursion(n-1);
        TreeRecursion(n-1);

    }
}

int main()
{
    int n;
    printf("Enter any number=");
    scanf("%d",&n);
    TreeRecursion(n);
    return 0;
}