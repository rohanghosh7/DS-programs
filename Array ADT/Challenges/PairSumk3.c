//Find a pair of numbers such that their sum is k(user input) in a sorted array

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100],i,n,k,j;
    printf("Enter value of n=");
    scanf("%d",&n);
    printf("Enter the array=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter value of k=");
    scanf("%d",&k);
    i=0;
    j=n-1;
    while(i<j)
    {
        if(a[i]+a[j]==k)
        {
            printf("%d+%d=%d\n",a[i],a[j],k);
            i++;
            j--;
        }
        else if(a[i]+a[j]>k)
            j--;
        else   
            i++;
    }
    return 0;
}