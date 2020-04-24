//Find a pair of numbers such that their sum is k(user input)

#include<stdio.h>

int main()
{
    int a[100],i,n,k,j;
    printf("Enter value of n=");
    scanf("%d",&n);
    printf("Enter the array=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter value of k=");
    scanf("%d",&k);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
                printf("%d+%d=%d\n",a[i],a[j],k);
        }
    }
    return 0;
}