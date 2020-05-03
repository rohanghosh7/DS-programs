//Check 2 strings are anagram or not

#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,h[26]={0};
    printf("Enter string A=");
    scanf("%s",&a);
    printf("Enter string B=");
    scanf("%s",&b);
    for(i=0;a[i]!='\0';i++)
        h[a[i]-97]++;
    for(i=0;b[i]!='\0';i++)
    {
        h[b[i]-97]--;
        if(h[b[i]-97]<0)
        {
            printf("Not anagram");
            break;
        }
    }
    if(b[i]=='\0')
        printf("They are Anagram");
    return 0;
}