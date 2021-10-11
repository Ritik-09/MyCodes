#include <stdio.h>
#include <stdlib.h>

struct node
{
    char info;
    struct node *link;
} * temp, *q, *start;

void createList(char);
void display();
int priority(char);
void sortList();

int main()
{
    int n;
    char data;
    start = NULL;
    printf("Enter number of values you want to store: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &data);
        createList(data);
    }
    printf("Elements Before Sorting: ");
    display();
    sortList();
    printf("\nElements After sorting: ");
    display();
}

void createList(char data)
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

int priority(char data)
{
    if (data == 'O' || data == 'o')
        return 5;
    if (data == 'E' || data == 'e')
        return 4;
    if (data == 'A' || data == 'a')
        return 3;
    if (data == 'B' || data == 'b')
        return 2;
    if (data == 'C' || data == 'c')
        return 1;
}

void sortList()
{
    struct node *index = NULL;
    q = start;
    while (q != NULL)
    {
        index = q->link;
        while (index != NULL)
        {
            if (priority(q->info) < priority(index->info))
            {
                int temp = q->info;
                q->info = index->info;
                index->info = temp;
            }
            index = index->link;
        }
        q = q->link;
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
        printf("%c ", q->info);
        q = q->link;
    }
}