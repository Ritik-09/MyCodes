#include <stdlib.h>
#include <stdio.h>

void create();
void display();

struct node
{
    int info;
    struct node *next;
};
struct node *start = NULL;
int main()
{
    printf("press the following keys to perform operation:\n");
    printf("press 1 for enter element\n");
    printf("press 2 for display list\n");
    printf("press 3 for exit\n");
    int choice;
    while (1)
    {

        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;

        case 3:
            exit(0);
            break;

        default:
            printf("n Wrong Choice:n");
            break;
        }
    }
    return 0;
}
void create()
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Out of Memory Space:n");
        exit(0);
    }
    printf("Enter the data value for the node: ");
    scanf("%d", &temp->info);
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void display()
{
    struct node *ptr;
    if (start == NULL)
    {
        printf("List is empty: ");
        return;
    }
    else
    {
        ptr = start;
        printf("The List elements are: ");
        while (ptr != NULL)
        {
            printf("%d ", ptr->info);
            ptr = ptr->next;
        }
        printf("\n");
    }
}