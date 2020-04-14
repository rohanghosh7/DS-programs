/*Recursice call is first call
After all calls ended,rest work inside functions is done backwardly
*/

#include<stdio.h>

void HeadRecursion(int n)
{
    if(n>0)
    {
        HeadRecursion(n-1);
         printf("%d ",n);    
    }
}

int main()
{
    int n;
    printf("Enter any number=");
    scanf("%d",&n);
    HeadRecursion(n);
    return 0;
}