/*Find the single missing element in an array.
Array is sorted.
It starts from any number
Array is of natural numbers. */

#include<stdio.h>

int main()
{
    int A[100],n,i,l,h,diff;
    printf("Enter number of elements=");
    scanf("%d",&n);
    printf("Enter natural numbers starting from any number missing 1 element=");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    l=A[0];
    h=A[n-1];
    diff=l-0;
    for(i=0;i<n;i++)
    {
        if(A[i]-i!=diff)
        {
            printf("Missing element:%d",i+diff);
            break;
        }
    }
    return 0;
}