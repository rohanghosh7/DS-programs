//Duplicates in a string using the concept of hashing

#include<stdio.h>

int main()
{
    char a[100];
    int h[26]={0},i;
    printf("Enter a string=");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        h[a[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(h[i]>1)
            printf("%c is appearing %d times\n",i+97,h[i]);
    }
    return 0;
}