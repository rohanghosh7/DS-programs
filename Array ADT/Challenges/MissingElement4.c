/*Find the multiple missing elements in an array.
Array is unsorted.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100],n,i,max,min;
    int *h;
    printf("Enter number of elements=");
    scanf("%d",&n);
    printf("Enter the elements in unordered fashion=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<n;i++)
        {
            if(a[i]>max)
                max=a[i];
        }
    min=a[0];
    for(i=1;i<n;i++)
        {
            if(a[i]<min)
                min=a[i];
        }
    h=(int*)malloc(max*sizeof(int));
    for(i=0;i<=max;i++)
        h[i]=0;
    printf("Missing elements=");
    for(i=0;i<n;i++)
        h[a[i]]++;
    for(i=min;i<=max;i++)
    {
        if(h[i]==0)
            printf("%d ",i);
    }
    return 0;
}