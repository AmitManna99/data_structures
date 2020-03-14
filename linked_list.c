#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *head=NULL;
node *create(node*,int);
void display(node*);
int main()
{
    head=create(head,1);
    head=create(head,8);
    head=create(head,3);
    display(head);
}
node *create(node *head, int x)
{
    node *q,*p;
    q=(node*)malloc(sizeof(node));
    q->data=x;
    q->next=NULL;
    //printf("%d\t",q->data);
    if(head==NULL)
        head=q;
    else
    {
        p=head;
        while(p->next!=NULL)
            p=p->next;
        p->next=q;
    }
    return head;
}
void display(node *head)
{
    node *p;
    p=head;

    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->next;
    }
}