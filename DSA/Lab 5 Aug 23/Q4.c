#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int info;
    struct node *next;
} * temp, *q, *start, *last;

void display();
void createList(int);
void convertToCircular();

int main()
{
    int n, i, e, choice, pos;
    start = NULL;
    printf("Enter NO. of nodes: ");
    scanf("%d", &n);
    printf("Enter Data: ");
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &e);
        createList(e);
    }
    convertToCircular();
    display();
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

void convertToCircular()
{
    if (start == NULL)
    {
        printf("Empty List");
        return;
    }
    q = start;
    while (q->next != NULL)
    {
        q = q->next;
    }
    q->next = start;
    last = q;
}

void display(){
    struct node *q = last->next;  
    if(q == NULL){  
        printf("List is empty");  
    }  
    else{  
        printf("Nodes of the circular linked list: \n");  
         do{  
            printf("%d ", q->info);  
            q = q->next;  
        }while(q != last);
        printf("%d ",q->info);
        printf("\n");  
    } 
}