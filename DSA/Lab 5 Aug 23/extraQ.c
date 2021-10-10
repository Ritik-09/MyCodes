#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
} * start, *q, *p;

struct node *createList(struct node *, int);
struct node *reverse(struct node *);
struct node *reverseBetween(struct node *, int, int);
void display(struct node *);

int main()
{
    int n, data, a = 1, b = 1;
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
    q = start;
    while (b < n)
    {
        if (q->info < q->next->info)
        {
            while (q->info < q->next->info)
            {
                q = q->next;
                b++;
                if (q->next == NULL)
                    break;
            }
            if (q->next != NULL)
                q = q->next;
            start = reverseBetween(start, a, b);
            b++;
            a = b;
        }
        else if (q->info > q->next->info)
        {
            while (q->info > q->next->info)
            {
                q = q->next;
                b++;
                if (q->next == NULL)
                    break;
            }
            if (q->next != NULL)
                q = q->next;
            start = reverseBetween(start, a, b);
            b++;
            a = b;
        }
    }
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

struct node *reverseBetween(struct node *head, int m, int n)
{
    if (m == n)
        return head;
    struct node *revs = NULL, *revs_prev = NULL;
    struct node *revend = NULL, *revend_next = NULL;
    int i = 1;
    struct node *curr = head;
    while (curr && i <= n)
    {
        if (i < m)
            revs_prev = curr;
        if (i == m)
            revs = curr;
        if (i == n)
        {
            revend = curr;
            revend_next = curr->next;
        }
        curr = curr->next;
        i++;
    }
    revend->next = NULL;
    revend = reverse(revs);
    if (revs_prev)
        revs_prev->next = revend;
    else
        head = revend;
    revs->next = revend_next;
    return head;
}

struct node *reverse(struct node *head)
{
    struct node *prev = NULL;
    struct node *curr = head;
    while (curr)
    {
        struct node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
