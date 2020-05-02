//Checks whether a particular element is present or not

#include<stdio.h>

int main()
{
    int a[100],n,i,key;
    printf("Enter size of array=");
    scanf("%d",&n);
    printf("Enter elements of array=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to search=");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("%d found at position %d",key,i+1);
            break;
        }
    }
    if(i==n)
        printf("Element not found");
    return 0;
}