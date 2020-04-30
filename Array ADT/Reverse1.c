//Reverse a given array and store contents in a new array

#include<stdio.h>

int main()
{
    int a[100],i,n,b[100],j;
    printf("Enter the number of elements=");
    scanf("%d",&n);
    printf("Enter the elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Array=");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(i=n-1,j=0;i>=0;i--,j++)
        b[j]=a[i];
    printf("Reversed array=");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);    
    return 0;
}