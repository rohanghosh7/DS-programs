//Check 2 strings are equal or not

#include<stdio.h>

int main()
{
    char a[100],b[100];
    int i,j;
    printf("Enter string A=");
    scanf("%s",&a);
    printf("Enter string B=");
    scanf("%s",&b);
    for(i=0,j=0;a[i]!='\0' && b[j]!='\0';i++,j++)
    {
        if(a[i]!=b[j])
            break;
    }    
    if(a[i]==b[j])
        printf("Strings are equal");
    else if(a[i]<b[j])
        printf("String A is smaller");
    else
        printf("String B is smaller");
    return 0;
}