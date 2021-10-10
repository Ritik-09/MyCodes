#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coef;
    int expo;
    struct node *next;
} * start3;

struct node *createList(struct node *);
struct node *insert_s(struct node *, int, int);
void display(struct node *);
void poly_add(struct node *, struct node *);
void poly_mult(struct node *, struct node *);

int main()
{
    struct node *start1 = NULL;
    struct node *start2 = NULL;
    printf("Enter 1st polynomial\n");
    start1 = createList(start1);
    printf("Enter 2nd polynomial\n");
    start2 = createList(start2);
    printf("1st polynomial is: ");
    display(start1);
    printf("2nd polynomial is: ");
    display(start2);
    poly_add(start1, start2);
    poly_mult(start1, start2);
}

struct node *createList(struct node *start)
{
    int n, i, ex, co;
    printf("Enter no. of nodes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter coefficient and exponent: ");
        scanf("%d%d", &co, &ex);
        start = insert_s(start, co, ex);
    }
    return start;
}

struct node *insert_s(struct node *start, int co, int ex)
{
    struct node *temp, *p;
    temp = malloc(sizeof(struct node));
    temp->coef = co;
    temp->expo = ex;
    if (start == NULL || ex > start->expo)
    {
        temp->next = start;
        start = temp;
    }
    else
    {
        p = start;
        while (p->next != NULL && p->next->expo >= ex)
        {
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
    }
    return start;
}

void display(struct node *p)
{
    while (p != NULL)
    {
        printf("%dx^%d", p->coef, p->expo);
        p = p->next;
        if (p != NULL)
            printf(" + ");
        else
            printf("\n");
    }
}

void poly_add(struct node *p1, struct node *p2)
{
    struct node *start3 = NULL;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->expo > p2->expo)
        {
            start3 = insert_s(start3, p1->coef, p1->expo);
            p1 = p1->next;
        }
        else if (p2->expo > p1->expo)
        {
            start3 = insert_s(start3, p2->coef, p2->expo);
            p2 = p2->next;
        }
        else if (p1->expo == p2->expo)
        {
            start3 = insert_s(start3, p1->coef + p2->coef, p1->expo);
            p1 = p1->next;
            p2 = p2->next;
        }
    }
    while (p1 != NULL)
    {
        start3 = insert_s(start3, p1->coef, p1->expo);
        p1 = p1->next;
    }
    while (p2 != NULL)
    {
        start3 = insert_s(start3, p2->coef, p2->expo);
        p2 = p2->next;
    }
    printf("polynomial after addition: \n");
    display(start3);
}

void poly_mult(struct node *p1, struct node *p2)
{
    struct node *start3 = NULL, *q, *temp;
    struct node *p2beg = p2;
    temp = malloc(sizeof(struct node));
    while (p1 != NULL)
    {
        p2 = p2beg;
        while (p2 != NULL)
        {
            start3 = insert_s(start3, p1->coef * p2->coef, p1->expo + p2->expo);
            p2 = p2->next;
        }
        p1 = p1->next;
    }
    printf("polynomial after multiplication:\n");
    display(start3);
}