//Find duplicate elements in an unsorted array

#include<stdio.h>

int main()
{
    int a[100],i,n,j,count;
    printf("Enter number of elements=");
    scanf("%d",&n);
    printf("Enter elements in unsorted fashion=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        count=1;
        if(a[i]!=-1)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    a[j]=-1;
                }
            }
        }
        if(count>1)
            printf("%d is appearing %d times\n",a[i],count);
    }
    return 0;
}