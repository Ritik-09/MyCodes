#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int top = -1, stack[MAX];
void push();
void pop();
void display(int[], int);

void main()
{
    int ch;
    while (1)
    {
        printf("\nEnter choice:\n");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display(stack, top);
            break;
        case 4:
            exit(0);
        default:
            printf("\nWrong Choice!!");
        }
    }
}

void push()
{
    int val;
    if (top == MAX - 1)
    {
        printf("\nStack is full!!");
    }
    else
    {
        printf("\nEnter element to push:");
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nDeleted element is %d", stack[top]);
        top = top - 1;
    }
}

void display(int arr[], int i)
{
    if (i < 0)
    {
        printf("\n");
        return;
    }
    printf("%d ", arr[i]);
    display(arr, i - 1);
}