//Implementation of diagonal matrix

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    int *a;
    printf("Enter value of n for a NXN matrix=");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    printf("Enter the diagonal elements=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Diagonal matrix-\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
                printf("%d  ",a[i-1]);
            else
                printf("0  ");
        }
        printf("\n");
    }
    return 0;
}