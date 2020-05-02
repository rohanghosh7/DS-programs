//Find total and average of a given array

#include<stdio.h>

int main()
{
    int a[100],i,n,sum=0;
    float avg;
    printf("Enter number of elements=");
    scanf("%d",&n);
    printf("Enter the elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum+=a[i];
    avg=(float)sum/n;
    printf("Sum=%d\nAverage=%.2f",sum,avg);
    return 0;
}