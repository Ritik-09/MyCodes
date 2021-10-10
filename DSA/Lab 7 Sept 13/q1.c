#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int info;
    struct node *next;
} * temp, *q, *start;

void createList(int);
void display();
void delete (int);

int main()
{
    int n, i, e, choice, pos;
    start = NULL;
    while (1)
    {
        printf("\nEnter choice: \n1.create list\n2.display\n3.Delete\n4.Exit\n\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter NO. of nodes: ");
            scanf("%d", &n);
            start = NULL;
            printf("Enter Data: ");
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &e);
                createList(e);
            }
            break;
        case 2:
            display();
            break;
        case 3:
            if (start == NULL)
            {
                printf("List is empty\n");
            }
            else
            {
                int t=0;
                q = start;
                while (q != NULL)
                {
                    if (q->info % 7 == 0)
                    {
                        t=1;
                        delete (q->info);
                    }
                    q = q->next;
                }
                if(t==0) printf("Element not found\n");
                else printf("Element deleted\n");
            }
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Wrong choice\n");
        }
    }
    return 0;
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

void delete (int data)
{
    if (start->info == data)
    {
        temp = start;
        start = start->next;
        start->prev = NULL;
        free(temp);
        return;
    }
    q = start;
    while (q->next->next != NULL)
    {
        if (q->next->info == data)
        {
            temp = q->next;
            q->next = temp->next;
            free(temp);
            return;
        }
        q = q->next;
    }
    if (q->next->info == data)
    {
        temp = q->next;
        free(temp);
        q->next = NULL;
        return;
    }
    printf("Element not found\n");
}
