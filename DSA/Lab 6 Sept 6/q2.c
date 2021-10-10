#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * temp, *q,*start;
void createList(int data)
{
    temp = malloc(sizeof(struct node));
    temp->data = data;
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
void reverse(struct node *p)
{
    if (p->next == NULL)
    {
        start = p;
        return;
    }
    reverse(p->next);
    struct node *rev = p->next;
    rev->next = p;
    p->next = NULL;
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
        printf("%d ", q->data);
        q = q->next;
    }
}
int main()
{
    int data, n;
    start = NULL;
    printf("Enter number of values you want to store: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        createList(data);
    }
    printf("Linked List: ");
    display();
    reverse(start);
    printf("\nReversed Linked List: ");
    display();
}