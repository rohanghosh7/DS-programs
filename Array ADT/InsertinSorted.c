//Insert an element in a sorted array

#include<stdio.h>

int main()
{
    int a[100],i,n,num;
    printf("Enter the number of elements=");
    scanf("%d",&n);
    printf("Enter the elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Original array=");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nEnter the element to add=");
    scanf("%d",&num);
    i=n-1;
    while(a[i]>num)
    {
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=num;
    n++;
    printf("New array=");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}