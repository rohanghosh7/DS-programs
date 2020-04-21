//How to declare and initialise(numbers will be user input) and then print array

#include<stdio.h>

int main()
{
    int a[100],i,n;
    printf("Enter value of n=");
    scanf("%d",&n);
    printf("Enter the array=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Your array=");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}