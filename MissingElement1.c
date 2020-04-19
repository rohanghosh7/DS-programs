/*Find the single missing element in an array.
Array is sorted.
Array is of natural numbers. */

#include<stdio.h>

int main()
{
    int A[100],n,i,sum=0,s;
    printf("Enter number of elements=");
    scanf("%d",&n);
    printf("Enter till N+1 natural numbers missing any one element=");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(i=0;i<n;i++)
        sum+=A[i];
    s=(n+1)*(n+2)/2;
    printf("Missing element:%d",s-sum);
    return 0;
}