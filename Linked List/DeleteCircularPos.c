//Delete any given position of a circular linked list

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int i,n,pos,del_data;
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
    p=head;
    while(p->next!=NULL)
        p=p->next;
    p->next=head;
    printf("Enter position to delete=");
    scanf("%d",&pos);
    p=head;
    for(i=0;i<pos-2;i++)
        p=p->next;
    q=p->next;
    p->next=q->next;
    del_data=q->data;
    free(q);
    p=head;
    printf("Linked list after deleting %d is: ",del_data);
    do
    {
        printf("%d ",p->data);
        p=p->next;
    } while (p!=head);
    return 0;
}