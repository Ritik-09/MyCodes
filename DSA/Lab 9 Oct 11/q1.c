#include <stdio.h>
#include <stdlib.h>
#define size 10
int front = -1;
int rear = -1;
int cq[size];

void insert()
{
    int element;
    if ((rear == size - 1 && front == 0) || front == rear + 1)
    {
        printf("Overflow\n");
        return;
    }
    if (front == -1) //queue is empty
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if (rear == size - 1)
            rear = 0;
        else
            rear += 1;
    }
    scanf("%d", &element);
    cq[rear] = element;
}

void delete ()
{
    if (front == -1)
    {
        printf("Underflow\n");
        return;
    }
    printf("The deleted element is %d\n", cq[front]);
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        if (front == size - 1)
            front = 0;
        else
            front += 1;
    }
}

void traverse()
{
    int i = front;
    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    if (front <= rear)
    {
        while (i <= rear)
            printf("%d ", cq[i++]);
    }
    else
    {
        while (i <= size - 1)
        {
            printf("%d ", cq[i++]);
        }
        i = 0;
        while (i <= rear)
            printf("%d ", cq[i++]);
    }
    printf("\n");
}
int main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice \n");
        }
    }
    return 0;
}