//Search a given element in an array using concept of Linear Search

#include<stdio.h>

int main()
{
    int a[100],i,n,ele,flag=0;
    printf("Enter number of elements=");
    scanf("%d",&n);
    printf("Enter the elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to search=");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            flag=1;
            printf("%d found at position %d",ele,i+1);
            break;
        }
    }
    if(flag==0)
        printf("Element not found");
    return 0;
}