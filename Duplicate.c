//Finding out Duplicate elements in a sorted array

#include<stdio.h>

int main()
{
    int a[100],i,n,lastDuplicate=0;
    printf("Enter value of n=");
    scanf("%d",&n);
    printf("Enter the array=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=0;
    printf("Duplicate elements=");
    while(i<n-1)
    {
        if(a[i]!=a[i+1])
             i++;
        else
        {
            lastDuplicate=a[i];
            printf("%d ",a[i]);
            i++;
            while(a[i]==lastDuplicate)
                i++;
        }
    }
    return 0;
}