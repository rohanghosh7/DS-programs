//Insert an element at a particular position from an array

#include<stdio.h>

int main()
{
    int a[100],i,n,ele,pos;
    printf("Enter number of elements=");
    scanf("%d",&n);
    printf("Enter the elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Original array=");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nEnter element you want to insert=");
    scanf("%d",&ele);
    printf("Enter position to insert %d=",ele);
    scanf("%d",&pos);
    for(i=n;i>pos;i--)
        a[i]=a[i-1];
    a[pos]=ele;
    n++;
    printf("New array=");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}