//Checking if there is a loop in the linked list

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
    struct Node *head,*p,*t,*q,*t1,*t2;
    head=NULL;
    printf("Enter number of elements=");
    scanf("%d",&n);
    head=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the first element=");
    scanf("%d",&head->data);
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
    t1=head->next->next;
    t2=head->next->next->next;
    t2->next=t1;
    p=q=head;
    do
    {
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    }while(p!=NULL && q!=NULL && p!=q);
    if(p==q)
        printf("There is loop in linked list");
    else
    {
        printf("There is no loop in the linked list");
    }
    return 0;
}