#include <stdio.h>
#include <stdlib.h>

struct node{
        int info;
        struct node *link;
    }*temp,*q,*top=NULL;

void push();
void pop();
void display();

int main(){
    int choice;
    while(1){
        printf("1)Push\n2)Pop\n3)Display\n4)Quit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice\n");
        }
    }
}

void push(){
    temp=malloc(sizeof(struct node));
    int data;
    printf("Enter element: ");
    scanf("%d",&data);
    temp->info=data;
    temp->link=top;
    top=temp;
}

void pop(){
    if(top==NULL)
        printf("Underflow\n");
    else{
        temp=top;
        top=top->link;
        free(temp);
    }
}

void display(){
    if(top == NULL){
        printf("No list found\n");
        return;
    }
    q=top;
    while(q!=NULL){
        printf("%d ",q->info);
        q=q->link;
    }
    printf("\n");
}