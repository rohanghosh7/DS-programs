//Search a given element in an array using concept of Binary Search

#include<stdio.h>

int main()
{
    int a[100],i,n,ele,l=0,h,mid,flag=0;
    printf("Enter number of elements=");
    scanf("%d",&n);
    printf("Enter the elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to search=");
    scanf("%d",&ele);
    h=n-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(ele==a[mid])
        {
            flag=1;
            printf("%d found at position %d",ele,mid+1);
            break;
        }
        else if(ele>a[mid])
            l=mid+1;
        else    
            h=mid-1;
    }
    if(flag==0)
        printf("Element not found");
    return 0;
}


