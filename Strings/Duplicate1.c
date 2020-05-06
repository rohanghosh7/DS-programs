//Find duplicate letters in a string

#include<stdio.h>

int main()
{
    char a[100];
    int i,j,count;
    printf("Enter a string=");
    scanf("%s",&a);
    for(i=0;a[i+1]!='\0';i++)
    {
        if(a[i]!=-1)
        {
            count=1;
            for(j=i+1;a[j]!='\0';j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    a[j]=-1;
                }
            }
            if(count>1)
                printf("%c is appearing %d times\n",a[i],count);
        }
    }
    return 0;
}