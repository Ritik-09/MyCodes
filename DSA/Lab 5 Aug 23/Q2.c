#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
} * temp, *q, *start;

void display();
void createList(int);
void remove_node();

int main()
{
    int n, i, e, choice, pos;
    start = NULL;
    printf("Enter NO. of nodes: ");
    scanf("%d", &n);
    printf("Enter Data: ");
    start = NULL;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &e);
        createList(e);
    }
    remove_node();
    display();
}

void createList(int data)
{
    temp = malloc(sizeof(struct node));
    temp->info = data;
    temp->next = NULL;
    if (start == NULL)
    {
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
    }
}

void remove_node()
{
    struct node *current = start, *q = NULL;
    if (start == NULL)
    {
        return;
    }
    else
    {
        while (current != NULL)
        {
            temp = current;
            q = current->next;
            while (q != NULL)
            {
                if (current->info == q->info)
                {
                    temp->next = q->next;
                }
                else
                {
                    temp = q;
                }
                q = q->next;
            }
            current = current->next;
        }
    }
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