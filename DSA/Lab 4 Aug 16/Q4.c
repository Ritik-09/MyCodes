#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};
struct node *start=NULL, *ptr, *temp;

void createList(int data){
    temp=malloc(sizeof(struct node));
    temp->info=data;
    temp->next=NULL;
    if(start==NULL){
        start=temp;
    }
    else{
        ptr=start;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}

int main()
{
    char ch;
    int sum=0,n,data;
    printf("Enter no. of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        createList(data);
    }
    ptr=start;
    struct node *q=start;
    printf("\n");
    int c=0;
    while(ptr->next!=NULL)
    {
        if(sum==ptr->info)
        {
            while(q!=ptr)
            {
                printf("%d ", q->info);
                q=q->next;
            }
            printf("\n");
            sum=0;
            c++;
            q=ptr->next;
            ptr=ptr->next;
        }
        sum= sum+ ptr->info;
        ptr=ptr->next;
    }
    if(sum==ptr->info)
    {
        while(q!=ptr)
        {
            printf("%d ", q->info);
            q=q->next;
        }
        c++;
    }
    printf("\nNo. of summation groups: %d", c);
}