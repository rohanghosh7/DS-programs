/*Seach an element in a linked list
Concept used-Linear Search
Element is moved to first position after searching*/

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int i,n,key;
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
    printf("Enter element to search=");
    scanf("%d",&key);
    p=head;
    q=p;
    while(p!=NULL)
    {
        if(key==p->data)
        {
            printf("Element %d found in linked list",key);
            q->next=p->next;
            p->next=head;
            head=p;
            break;
        }
        q=p;
        p=p->next;
    }
    if(p==NULL)
        printf("Element not found!!");
    printf("\nLinked List after %d moved to head position=\n",key);
    p=head;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    return 0;
}