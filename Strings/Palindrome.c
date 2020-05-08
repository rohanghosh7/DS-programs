//Checks whether a string is palindrome or not

#include<stdio.h>

int main()
{
    char a[100],b[100];
    int i,j,flag=0;
    printf("Enter a string=");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
    }
    i--;
    for(j=0;i>=0;i--,j++)
        b[j]=a[i];
    b[j]='\0';
    for(i=0,j=0;a[i]!='\0' && b[j]!='\0';i++,j++)
    {
        if(a[i]!=b[j])
        {
            printf("String is not palindrome");
            flag++;
            break;
        }
    }
    if(flag==0)
        printf("String is palindrome");
    return 0;
}