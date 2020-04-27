/*Difference operation is performed on 2 sorted arrays
It is performing (A-B) operation*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100],b[100],m,n,o,i,j,k;
    int* c;
    printf("Enter size of array A=");
    scanf("%d",&m);
    printf("Enter size of array B=");
    scanf("%d",&n);
    printf("Enter elements of A=");
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("Enter elements of B=");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    i=j=k=0;
    o=m+n;
    c=(int*)malloc(o*sizeof(int));
    while(i<m && j<n)
    {
        if(a[i]<b[j])
            c[k++]=a[i++];
        else if(a[i]>b[j])
            j++;
        else
        {
            i++;
            j++;
        }
    }
    for(;i<m;i++)
        c[k++]=a[i];
    o=k;
    printf("After difference operation:");
    for(i=0;i<o;i++)
        printf("%d ",c[i]);
    return 0;
}