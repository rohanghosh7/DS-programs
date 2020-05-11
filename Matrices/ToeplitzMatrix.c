//Implementation of Toeplitz matrix

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,j,i;
    int *a;
    printf("Enter value of n for NXN matrix=");
    scanf("%d",&n);
    a=(int *)malloc((2*n-1)*(sizeof(int)));
    printf("Enter the elements=");
    for(i=0;i<2*n-1;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i<=j)
                printf("%d  ",a[j-i]);
            else
                printf("%d  ",a[n+i-j-1]);
        }
        printf("\n");
    }
    return 0;
}