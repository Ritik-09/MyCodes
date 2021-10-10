#include <stdlib.h>
#include <stdio.h>

void createList();
void display();
void insert(int,int);
void delete (int);
void reverse();

struct node
{
    int info;
    struct node *next;
} * temp, *q, *head;
struct node *start = NULL;

int main()

{
    printf("press the following keys to perform operation:\n");
    printf("1.Create List\n");
    printf("2.Display\n");
    printf("3.Insert\n");
    printf("4.Delete\n");
    printf("5.Reverse\n");
    printf("6.Exit\n");

    int choice,n,data;
    while (1)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter NO. of nodes: ");
            scanf("%d",&n);
            for(int i=0;i<n;i++){
                scanf("%d",&data);
                createList(data);
            }   
            break;
        case 2:
            display();
            break;

        case 3:
            printf("1)Insert at begining\n2)Insert after position\n");
            scanf("%d",&choice);
            switch(choice){
                case 1: 
                    printf("Enter data: ");
                    scanf("%d",&data);
                    insert(data,0);
                    break;
                case 2: 
                    printf("Enter the position and data:  ");
                    scanf("%d%d", &n, &data);
                    insert(data,n);
                    break;
                default: printf("Invalid");
            }
            break;

        case 4:
            printf("Enter the position: ");
            scanf("%d", &n);
            delete (n);
            break;

        case 5:
            reverse();
            break;
        case 6:
            exit(0);

        default:
            printf("Enter valid Choice");
        }
    }
    return 0;
}

void createList(int data){
    temp=malloc(sizeof(struct node));
    temp->info=data;
    temp->next=NULL;
    if(start==NULL){
        start=temp;
    }
    else{
        q=start;
        while(q->next!=NULL){
            q=q->next;
        }
        q->next=temp;
    }
}

void insert(int data,int x)
{
    temp = malloc(sizeof(struct node));
    temp->info = data;
    if (x == 0)
    {
        temp->next = start;
        start = temp;
    }
    else
    {
        int i;
        q = start;
        for (i = 1; i < x; i++)
        {
            q = q->next;
        }
        temp->info = data;
        temp->next = q->next;
        q->next = temp;
    }
    display();
}

void delete (int x)
{
    temp = malloc(sizeof(temp));
    q = start;
    if (x == 1)
    {
        temp = start;
        start = start->next;
        free(temp);
        return;
    }
    for (int i = 1; i < x - 1; i++)
    {
        q = q->next;
    }
    temp = q->next;
    q->next = temp->next;
    free(temp);
}

void reverse()
{

    struct node *current = start;
    struct node *prev = NULL, *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    start = prev;
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