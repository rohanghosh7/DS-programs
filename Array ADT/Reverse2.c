//Reverse a given array and store contents in that array only

#include<stdio.h>

int main()
{
    int a[100],i,n,j,tmp;
    printf("Enter the number of elements=");
    scanf("%d",&n);
    printf("Enter the elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Array=");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(i=0,j=n-1;i<j;i++,j--)
    {
        tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
    }
    printf("Reversed array=");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);    
    return 0;
}