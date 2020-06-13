//Delete a given node of a double linked list

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};

int main()
{
    int i,n,pos,data;
    struct Node *head,*t,*p;
    printf("Enter elements to enter=");
    scanf("%d",&n);
    head=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter first element=");
    scanf("%d",&head->data);
    head->next=head->prev=NULL;
    p=head;
    printf("Enter rest elements=");
    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        scanf("%d",&t->data);
        p->next=t;
        t->prev=p;
        t->next=NULL;
        p=t;
    }
    printf("Enter position to delete=");
    scanf("%d",&pos);
    p=head;
    for(i=0;i<pos-1;i++)
        p=p->next;
    p->prev->next=p->next;
    if(p->next)
        p->next->prev=p->prev;
    data=p->data;
    free(p);
    printf("Linked list after deleting %d is: ",data);
    p=head;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    return 0;
}