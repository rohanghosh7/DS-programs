//How to declare and initialise(numbers will be user input) and then print array dynamically using malloc

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a,i,n;
    printf("Enter number of elements=");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter the array=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Your array=");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}