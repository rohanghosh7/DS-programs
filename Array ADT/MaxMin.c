//Find the maximim and minimum element in an array

#include<stdio.h>

int main()
{
    int a[100],i,n,max,min;
    printf("Enter number of elements=");
    scanf("%d",&n);
    printf("Enter the elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("Maximum element=%d\nMinimum element=%d",max,min);
    return 0;
}