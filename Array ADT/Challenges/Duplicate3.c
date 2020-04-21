//Finding duplicates in a sorted array and counting the number of duplicates using the concept of hashing

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100],n,i,max;
    int *h;
    printf("Enter number of elements=");
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