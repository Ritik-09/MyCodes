#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head=NULL, *n;

int main()
{
    struct node *ptr;
    int size;
    printf("Enter no. of nodes: ");
    scanf("%d", &size);
    if(size==0)
    {
        printf("EMPTY");
        exit(1);
    }
    printf("Enter Data: ");
    for(int i=0;i<size;i++)
    {
        n=(struct node*)malloc(sizeof(struct node));
        scanf("%d", &n->data);
        n->next=NULL;
        if(head==NULL)
        head=n;
        else
        {
            ptr=head;
            while(ptr->next!=NULL)
            ptr=ptr->next;
            ptr->next=n;
        }
    }
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
    ptr=head;
    struct node *pr;
    while(ptr->next!=NULL)
    {
        pr=ptr->next;
        while(pr!=NULL)
        {
            if(pr->data>ptr->data)
            {
                ptr->data=pr->data;
            }
            pr=pr->next;
        }
        ptr=ptr->next;
    }
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
}