/*Implementation of triband matrix
Elements are stored starting from lower diagonal,then main and then upper
Also known as tridiagonal matrix*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,j,i;
    int *a;
    printf("Enter value of n for NXN matrix=");
    scanf("%d",&n);
    a=(int *)malloc(3*n-2*(sizeof(int)));
    printf("Enter the elements=");
    for(i=0;i<3*n-2;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i-j)==1)
                printf("%d  ",a[i-2]);
            else if((i-j)==0)
                printf("%d  ",a[n+i-2]);
            else if((i-j)==-1)
                printf("%d  ",a[2*n+i-2]);
            else
                printf("0  ");
        }
        printf("\n");
    }
    return 0;
}