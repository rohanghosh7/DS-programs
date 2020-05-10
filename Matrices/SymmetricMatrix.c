//Implementation of Symmetric Matrix

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    int *a;
    printf("Enter value of n for a NXN matrix=");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("Enter elements of a symmetric elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<i)
                printf("%d  ",a[j-1]);
            else
                printf("%d  ",a[i-1]);
        }
        printf("\n");
    }
    return 0;
}