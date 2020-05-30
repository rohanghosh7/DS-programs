//Permutation of string

#include<stdio.h>

void swap(char *a,char *b)
{
    char tmp=*a;
    *a=*b;
    *b=tmp;
}

void perm(char s[],int l,int h)
{
    int i;
    if(l==h)
        printf("%s\n",s);
    else
    {
        for(i=l;i<=h;i++)
        {
            swap(&s[l],&s[i]);
            perm(s,l+1,h);
            swap(&s[l],&s[i]);
        }
    }
}

int main()
{
    char a[10];
    int l,h,i;
    printf("Enter a string=");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
    }
    l=0,h=i-1;
    perm(a,l,h);
    return 0;
}