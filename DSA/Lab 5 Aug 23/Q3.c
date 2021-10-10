#include <stdio.h>
#include <stdlib.h>

struct node{
        int info;
        struct node *link;
    }*temp,*q,*start;

void createList();
void display();
void swap();

int main(){
    int n,data;
    start=NULL;
    printf("Enter number of values you want to store: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        createList(data);
    }
    swap();
    display();
}

void createList(int data){
    temp=malloc(sizeof(struct node));
    temp->info=data;
    temp->link=NULL;
    if(start==NULL){
        start=temp;
    }
    else{
        q=start;
        while(q->link!=NULL){
            q=q->link;
        }
        q->link=temp;
    }
}

void swap(){
    int p;
    q=start;
    while(q!=NULL&&q->link!=NULL){
        p=q->info;
        q->info=q->link->info;
        q->link->info=p;
        q=q->link->link;
    }  
}

void display(){
    if(start == NULL){
        printf("No list found");
        return;
    }
    q=start;
    while(q!=NULL){
        printf("%d ",q->info);
        q=q->link;
    }
}