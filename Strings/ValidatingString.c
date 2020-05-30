/*Check validity of a string
A valid string contains either alphabets or numbers,no special characters*/

#include<stdio.h>

int main()
{
    char s[100];
    int flag=0;
    printf("Enter a string=");
    scanf("%s",&s);
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(!(s[i]>=65 && s[i]<=90) && !(s[i]>=97 && s[i]<=122) && !(s[i]>=48 && s[i]<=57))
        {
            printf("String is invalid");
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("String is valid");
    return 0;
}