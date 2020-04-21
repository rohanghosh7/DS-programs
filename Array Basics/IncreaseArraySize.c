//Increase array size dynamically

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m,n,i;
    int *p,*q;
    printf("Enter size of an array=");
        scanf("%d",&m);
    p=(int*)malloc(m*sizeof(int));
    printf("Enter the array=");
    for(i=0;i<m;i++)
        scanf("%d",&p[i]);
    printf("Your array=");
    for(i=0;i<m;i++)
        printf("%d ",p[i]);
    printf("\nEnter increased size=");
        scanf("%d",&n);
    q=(int*)malloc(n*sizeof(int));
    for(i=0;i<m;i++)
        q[i]=p[i];
    printf("Enter more elements into original array=");
    for(i=m;i<n;i++)
        scanf("%d",&q[i]);
    free(p);
    p=q;
    q=NULL;
    printf("Your increased array=");
    for(i=0;i<n;i++)
        printf("%d ",p[i]);
    return 0;
}