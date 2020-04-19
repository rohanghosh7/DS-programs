#include<stdio.h>
#include<math.h>

void TOH(int n,int A,int B,int C)
{
    if(n>0)
    {
        TOH(n-1,A,C,B);
        printf("Move disk from %d to %d\n",A,C);
        TOH(n-1,B,A,C);
    }
}

int main()
{
    int n,move;
    printf("A is 1st tower B is 2nd tower and C is 3rd tower\n");
    printf("Enter number of rings=");
    scanf("%d",&n);
    printf("These are the required moves\n");
    TOH(n,1,2,3);
    move=pow(2,n)-1;
    printf("Total number of moves required=%d",move);
    return 0;
}