//Delete the head position of a circular linked list

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int i,n;
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
    while(p->next!=NULL)
        p=p->next;
    p->next=head;
    p=head;
    while(p->next!=head)
        p=p->next;
    p->next=head->next;
    int del_data=head->data;
    free(head);
    head=p->next;
    p=head;
    printf("Linked list after deleting %d is: ",del_data);
    do
    {
        printf("%d ",p->data);
        p=p->next;
    } while (p!=head);
    return 0;
}