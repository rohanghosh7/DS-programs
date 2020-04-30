//Merge two arrays into one array

#include<stdio.h>

int main()
{
    int a[100],b[100],m,n,i,j,k,c[200];
    printf("Enter the size of array A=");
    scanf("%d",&m);
    printf("Enter elements of A=");
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("Enter the size of array B=");
    scanf("%d",&n);
    printf("Enter elements of B=");
    for(j=0;j<n;j++)
        scanf("%d",&b[j]);
    printf("Array A=");
    for(i=0;i<m;i++)
        printf("%d ",a[i]);
    printf("\nArray B=");
    for(j=0;j<n;j++)
        printf("%d ",b[j]);
    
    i=j=k=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }
    for(;i<m;i++)
        c[k++]=a[i];
    for(;j<n;j++)
        c[k++]=b[j];
    printf("\nMerged arrays=");
    for(k=0;k<m+n;k++)
        printf("%d ",c[k]);
    return 0;
}