//Get the element which is present at a particular index

#include<stdio.h>

int main()
{
    int a[100],i,n,index;
    printf("Enter number of elements=");
    scanf("%d",&n);
    printf("Enter the elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter required index=");
    scanf("%d",&index);
    if(index>=0 && index<n)
        printf("%d is present at index %d",a[index-1],index);
    else
        printf("Index out of range");
    return 0;
}
        
