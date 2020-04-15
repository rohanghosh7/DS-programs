/*Contains more than one function.
Each function calls each other in a circular manner
*/

#include<stdio.h>

void funB(int);
void funA(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        funB(n-1);
    }
}


void funB(int n)
{
    if(n>1)
    {
        printf("%d ",n);
        funA(n/2);
    }
}

int main()
{
    int n;
    printf("Enter any number=");
    scanf("%d",&n);
    funA(n);
    return 0;
}