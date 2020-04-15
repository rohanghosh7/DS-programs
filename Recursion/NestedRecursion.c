/*Recursive call takes recursive call as parameters.
Recursion inside recursion
*/

#include<stdio.h>

int NestedRecursion(int n)
{
    if(n>100)
        return (n-10);
    else
        return NestedRecursion(NestedRecursion(n+11));
}

int main()
{
    int n;
    printf("Enter any number=");
    scanf("%d",&n);
    printf("%d ",NestedRecursion(n));
    return 0;
}