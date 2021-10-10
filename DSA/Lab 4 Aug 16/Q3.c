#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
} * temp, *q, *start;

void createList();
void display();
void delete ();

int main()
{
    int n, data, k;
    start = NULL;
    printf("Enter number of values you want to store: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        createList(data);
    }
    printf("Enter the value K: ");
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
        delete (k);
    display();
}

void createList(int data)
{
    temp = malloc(sizeof(struct node));
    temp->info = data;
    temp->link = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        q = start;
        while (q->link != NULL)
        {
            q = q->link;
        }
        q->link = temp;
    }
}

void delete (int k)
{
    if (start->info % k == 0)
    {
        temp = start;
        start = start->link;
        free(temp);
        return;
    }
    q = start;
    while (q->link->link != NULL)
    {
        if (q->link->info % k == 0)
        {
            temp = q->link;
            q->link = temp->link;
            free(temp);
            return;
        }
        q = q->link;
    }
    if (q->link->info % k == 0)
    {
        temp = q->link;
        free(temp);
        q->link = NULL;
        return;
    }
}

void display()
{
    if (start == NULL)
    {
        printf("No list found");
        return;
    }
    q = start;
    while (q != NULL)
    {
        printf("%d ", q->info);
        q = q->link;
    }
}