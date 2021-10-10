#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
} *last = NULL;
struct node *start;

void createList()
{
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->info = data;
    if (last == NULL)
    {
        last = temp;
        temp->next = last;
    }
    else
    {
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}

void insertAtBeg()
{
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->info = data;
    temp->next = last->next;
    last->next = temp;
}

void insertAfterPos()
{
    struct node *temp, *q;
    int data, pos;
    printf("Enter data and pos: ");
    scanf("%d%d", &data, &pos);
    q = last->next;
    for (int i = 1; i < pos; i++)
        q = q->next;
    temp = malloc(sizeof(struct node));
    temp->info = data;
    temp->next = q->next;
    q->next = temp;
    if (q == last)
    {
        last = temp;
    }
}

void delete ()
{
    int data;
    printf("Enter data you want to delete: ");
    scanf("%d", &data);
    struct node *temp, *q;
    q = last->next;
    if (q->info == data)
    {
        temp = q;
        last->next = temp->next;
        free(temp);
        return;
    }
    while (q->next != last)
    {
        if (q->next->info == data)
        {
            temp = q->next;
            q->next = temp->next;
            free(temp);
        }
        q = q->next;
    }
    if (q->next->info == data)
    {
        temp = q->next;
        q->next = temp->next;
        free(temp);
        last = q;
    }
    return;
}

void display()
{
    struct node *q = last->next;
    if (q == NULL)
    {
        printf("List is empty");
    }
    else
    {
        printf("Nodes of the circular linked list: \n");
        do
        {
            printf("%d ", q->info);
            q = q->next;
        } while (q != last);
        printf("%d ", q->info);
        printf("\n");
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("\n1.Create\n2.Insert in begining\n3.Insert after position\n4.Delete\n5.Display\n6.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d", &choice);
        switch (choice)
        {
        case 1:
            createList();
            break;
        case 2:
            insertAtBeg();
            break;
        case 3:
            insertAfterPos();
            break;
        case 4:
            delete ();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        default:
            printf("Enter valid choice");
        }
    }
}
