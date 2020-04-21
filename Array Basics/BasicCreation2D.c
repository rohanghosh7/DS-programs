//How to declare and initialise(numbers will be user input) and then print  A 2D array

#include<stdio.h>

int main()
{
    int a[100][100],i,n,j,m;
    printf("Enter number of rows=");
    scanf("%d",&m);
    printf("Enter number of columns=");
    scanf("%d",&n);
    printf("Enter the array=\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter value for [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);    
        }
    }   
    printf("Your array-\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);    
        printf("\n");
    }
    return 0;
}