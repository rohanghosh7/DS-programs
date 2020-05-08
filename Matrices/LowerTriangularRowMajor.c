//Implementation of lower triangular matrix by row-major method

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    int *a;
    printf("Enter value of n for a NXN matrix=");
    scanf("%d",&n);
    a=(int *)malloc(((n*n+n)/2)*sizeof(int));
    printf("Enter lower traingular elements=");
    for(i=0;i<((n*n+n)/2);i++)
        scanf("%d",&a[i]);
    printf("Lower Traingular Matrix-\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i>=j)
                printf("%d  ",a[i*(i-1)/2+j-1]);
            else
                printf("0  ");
        }
        printf("\n");
    }
    return 0;
}