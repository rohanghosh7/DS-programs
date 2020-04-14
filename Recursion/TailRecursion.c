/*Recursice call is last call
After all calling is done,nothing is done.End of function
*/

#include<stdio.h>

void TailRecursion(int n)
{
    if(n>0)
    {
       printf("%d ",n);   
       TailRecursion(n-1); 
    }
}

int main()
{
    int n;
    printf("Enter any number=");
    scanf("%d",&n);
    TailRecursion(n);
    return 0;
}