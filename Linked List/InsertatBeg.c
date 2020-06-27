//Insert an element at the beginning of a linked list

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int i,n,x;
    struct Node *head,*p,*t,*q;
    head=NULL;
    printf("Enter number of elements to enter=");
    scanf("%d",&n);
    head=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the first element=");
    scanf("%d",&head->data);
    head->next=NULL;
    p=head;
    printf("Enter rest all elements=");
    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        scanf("%d",&t->data);
        t->next=NULL;
        p->next=t;
        p=p->next;
    }
    q=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter data to insert=");
    scanf("%d",&x);
    q->data=x;
    q->next=head;
    head=q;
    printf("Linked List after insertion=");
    p=head;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    return 0;
}