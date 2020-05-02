//Right shift operation on an array

#include<stdio.h>

int main()
{
    int a[100],n,i;
    printf("Enter the number of elements=");
    scanf("%d",&n);
    printf("Enter the elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Original array=");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(i=n;i>0;i--)
        a[i]=a[i-1];
    a[0]=0;
    printf("Array after right shift operation=");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}