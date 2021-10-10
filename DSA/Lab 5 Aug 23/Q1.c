#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int info;
    struct node *next;
} * temp, *q, *start;

void reverse();
void display();
void createList(int);

int main()
{
    int n, i, e, choice, pos;
    start = NULL;
    printf("Enter NO. of nodes: ");
    scanf("%d", &n);
    printf("Enter Data: ");
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &e);
        createList(e);
    }
    reverse();
    printf("Reversed list: ");
    display();
}
void createList(int data)
{
    temp = malloc(sizeof(struct node));
    temp->info = data;
    temp->next = NULL;
    if (start == NULL)
    {
        temp->prev = NULL;
        start = temp;
    }
    else
    {
        q = start;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = temp;
        temp->prev = q;
    }
}
void reverse()
{
    struct node *p1, *p2;
    p1 = start;
    p2 = p1->next;
    p1->next = NULL;
    p1->prev = p2;
    while (p2 != NULL)
    {
        p2->prev = p2->next;
        p2->next = p1;
        p1 = p2;
        p2 = p2->prev;
    }
    start = p1;
}

void display()
{
    if (start == NULL)
    {
        printf("List is empty\n");
        return;
    }
    q = start;
    while (q != NULL)
    {
        printf("%d ", q->info);
        q = q->next;
    }
    printf("\n");
}