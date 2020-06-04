//Concatenate two linked lists

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int i,n,m;
    struct Node *first,*second,*p,*t1,*t2,*q;
    first=NULL;
    printf("Enter number of elements to enter in 1st linked list=");
    scanf("%d",&n);
    first=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the first element=");
    scanf("%d",&first->data);
    first->next=NULL;
    p=first;
    printf("Enter rest all elements=");
    for(i=1;i<n;i++)
    {
        t1=(struct Node *)malloc(sizeof(struct Node));
        scanf("%d",&t1->data);
        t1->next=NULL;
        p->next=t1;
        p=p->next;
    }
    second=NULL;
    printf("Enter number of elements to enter in 2nd linked list=");
    scanf("%d",&m);
    second=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the first element=");
    scanf("%d",&second->data);
    second->next=NULL;
    q=second;
    printf("Enter rest all elements=");
    for(i=1;i<m;i++)
    {
        t2=(struct Node *)malloc(sizeof(struct Node));
        scanf("%d",&t2->data);
        t2->next=NULL;
        q->next=t2;
        q=q->next;
    }
    p=first;
    while(p->next!=NULL)
        p=p->next;
    p->next=second;
    p=first;
    second=NULL;
    printf("Concatenated linked list- ");
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    return 0;
}