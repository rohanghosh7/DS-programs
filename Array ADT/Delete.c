//Delete an element from a given position in an array

#include<stdio.h>

int main()
{
    int a[100],i,n,x,pos;
    printf("Enter number of elements=");
    scanf("%d",&n);
    printf("Enter the elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Original array=");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nEnter position to delete=");
    scanf("%d",&pos);
    x=a[pos];
    for(i=pos;i<n-1;i++)
        a[i]=a[i+1];
    n--;
    printf("New array=");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}
    