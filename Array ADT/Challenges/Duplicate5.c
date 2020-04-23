//Finding duplicates in an unsorted array using concept of hashing

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100],i,n,max;
    int *h;
    printf("Enter value of n=");
    scanf("%d",&n);
    printf("Enter the elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
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
        h[a[i]]++;
    for(i=0;i<=max;i++)
    {
        if(h[i]>1)
            printf("%d is appearing %d times\n",i,h[i]);
    }
    return 0;
}