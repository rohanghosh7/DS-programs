//Find the maximum and minimum number in a single scan

#include<stdio.h>

int main()
{
    int a[100],n,i;
    printf("Enter number of elements=");
    scanf("%d",&n);
    printf("Enter the elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int max,min;
    max=min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
        else if(a[i]>max)
            max=a[i];
    }
    printf("Maximum value=%d  Minimum value=%d",max,min);
    return 0;
}