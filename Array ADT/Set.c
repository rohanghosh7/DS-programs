//Set a particular position a particular element

#include<stdio.h>

int main()
{
    int a[100],i,n,index,ele;
    printf("Enter number of elements=");
    scanf("%d",&n);
    printf("Enter the elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter position to set=");
    scanf("%d",&index);
    printf("Enter element to enter=");
    scanf("%d",&ele);
    if(index>=0 && index<n)
        a[index-1]=ele;
    else
        printf("Index out of range");
    printf("Present array=");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
