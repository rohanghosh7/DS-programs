//Arrange an array such that negative numbers are on left side and positive are on right side

#include<stdio.h>

int main()
{
    int a[100],i,n,j,tmp;
    printf("Enter the number of elements=");
    scanf("%d",&n);
    printf("Enter the elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Original array=");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    i=0;
    j=n-1;
    while(i<j)
    {
        while(a[i]<0)
            i++;
        while(a[j]>=0)
            j--;
        if(i<j)
        {
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
        }
    }
    printf("New array=");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}