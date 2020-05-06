//Counting number of words given in a sentence

#include<stdio.h>

int main()
{
    char s[100];
    printf("Enter a sentence=");
    gets(s);
    int i,word=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ' && s[i-1]!=' ')
            word++;
    }
    printf("Number of words=%d",word+1);
    return 0;
}