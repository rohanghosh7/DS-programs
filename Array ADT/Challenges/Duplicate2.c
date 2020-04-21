//Count how many times a particular element is present in an array

#include<stdio.h>

int main()
{
    int a[100],i,n,j;
    printf("Enter value of n=");
    scanf("%d",&n);
    printf("Enter the array=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            j=i+1;
            while(a[j]==a[i])
                j++;
            printf("%d is appearing %d times\n",a[i],j-i);
            i=j-1;
        }
    }
    return 0;
}