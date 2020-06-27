//Insert an element at the last position in a linked list

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
    struct Node *head,*p,*t;
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
    p=head;
    printf("Linked list-");
    while(p!=NULL)
        {
            printf("%d ",p->data);
            p=p->next;
        }
    printf("\nEnter element=");
    scanf("%d",&x);
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    p=head;
    while((p->next)!=NULL)
        p=p->next;
    p->next=t;
    printf("Linked list after insertion-");
    p=head;
    while(p!=NULL)
        {
            printf("%d ",p->data);
            p=p->next;
        }
    return 0;
}