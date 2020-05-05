//Uppercase changed to lower and vice versa

#include<stdio.h>

int main()
{
    char ch[100];
    printf("Enter a string=");
    scanf("%s",&ch);
    int i;
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>=65 && ch[i]<=90)
            ch[i]+=32;
        else if(ch[i]>=97 && ch[i]<=122)
            ch[i]-=32;
    }
    printf("String after case change=%s",ch);
    return 0;
}