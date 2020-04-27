//Left operate operation on an array

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
    int tmp=a[0];
    for(i=0;i<n-1;i++)
        a[i]=a[i+1];
    a[n-1]=tmp;
    printf("Array after left shift operation=");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}