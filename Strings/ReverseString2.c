//Reverse a given string and store value in that string only

#include<stdio.h>

int main()
{
    char a[100],b[100],t;
    int i,j;
    printf("Enter a string=");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
    }
    i--;
    for(j=0;j<i;i--,j++)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    printf("Reversed string=%s",a);
    return 0;
}