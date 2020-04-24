//Check if an array is sorted or not

#include<stdio.h>

int main()
{
    int a[100],i,n,flag=0;
    printf("Enter the number of elements=");
    scanf("%d",&n);
    printf("Enter the elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Original array=");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            printf("Array is not sorted");
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Array is sorted");
    return 0;
}
