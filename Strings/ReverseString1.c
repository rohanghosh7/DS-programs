//Reverse a given string in a new string(variable)

#include<stdio.h>

int main()
{
    char a[100],b[100];
    int i,j;
    printf("Enter a string=");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
    }
    i--;
    for(j=0;i>=0;i--,j++)
        b[j]=a[i];
    b[j]='\0';
    printf("Reversed string=%s",b);
    return 0;
}