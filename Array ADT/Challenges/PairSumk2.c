//Find a pair of numbers such that their sum is k(user input) using hashing

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100],i,n,k,max;
    int *h;
    printf("Enter value of n=");
    scanf("%d",&n);
    printf("Enter the array=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter value of k=");
    scanf("%d",&k);
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    h=(int*)malloc(max*sizeof(int));
    for(i=0;i<=max;i++)
        h[i]=0;
    for(i=0;i<n;i++)
    {
        if(h[k-a[i]]!=0)
            printf("%d+%d=%d\n",a[i],k-a[i],k);
        h[a[i]]++;
    }
    return 0;
}