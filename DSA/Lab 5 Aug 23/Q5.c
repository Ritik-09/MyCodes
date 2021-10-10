#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
} *start, *startEven, *startOdd;

struct node *createList(struct node *, int);
void display(struct node *);
void split();

int main()
{
    int n, data;
    printf("Enter number of nodes : ");
    scanf("%d", &n);
    start = NULL;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        start = createList(start, data);
    }
    printf("Linked List : ");
    display(start);
    split();
    printf("Updated Linked List : ");
    display(start);
}

struct node *createList(struct node *p, int data)
{
    struct node *temp, *q;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->next = NULL;
    if (p == NULL)
        p = temp;
    else
    {
        q = p;
        while (q->next != NULL)
            q = q->next;
        temp->next = q->next;
        q->next = temp;
    }
    return p;
}

void display(struct node *q)
{
    while (q != NULL)
    {
        printf("%d", q->info);
        q = q->next;
        if (q != NULL)
            printf("->");
    }
    printf("\n");
}

void split()
{
    struct node *q = start;
    int n = 0;
    while (q != NULL)
    {
        if (n % 2 == 0)
        {
            startEven = createList(startEven, q->info);
        }
        if (n % 2 == 1)
        {
            startOdd = createList(startOdd, q->info);
        }
        n++;
        q = q->next;
    }
    q = startOdd;
    while (q != NULL)
    {
        start = createList(startEven, q->info);
        q = q->next;
    }
}