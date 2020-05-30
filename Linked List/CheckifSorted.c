//Check if a linked list is sorted

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
    p=head->next;
    x=head->data;
    while(p!=NULL)
    {
        if(p->data>x)
        {
            x=p->data;
            p=p->next;
        }
        else
        {
            printf("Linked list is not sorted!!");
            break;
        }
    }
    if(p==NULL)
        printf("Linked list is sorted!!");
    return 0;
}