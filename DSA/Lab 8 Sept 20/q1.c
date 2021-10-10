#include <stdio.h>
#include <stdlib.h>

struct node
{
	int info;
	struct node* link;
}*fin = NULL, * rin = NULL, *fout = NULL, *rout = NULL, *top = NULL;

void stack_push(int data)
{
	struct node* tmp = (struct node*)malloc(sizeof(struct node));
	tmp->info = data;
	tmp->link = top;
	top = tmp;
}

int stack_pop()
{
	struct node* tmp;
	int ret;
	if (top == NULL)
		printf("Underflow");
	else
	{
		tmp = top;
		top = top->link;
		ret = tmp->info;
		free(tmp);
	}
	return ret;
}

void insert(int data)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->info = data;
	temp->link = NULL;
	if (fin == NULL)
		fin = temp;
	else
		rin->link = temp;
	rin = temp;
}


void insert_out(int data)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->info = data;
	temp->link = NULL;
	if (fout == NULL)
		fout = temp;
	else
		rout->link = temp;
	rout = temp;
}

int delete_()
{
	struct node* temp;
	int ret;
	if (fin == NULL)
		printf("underflow\n");
	else
	{
		temp = fin;
		fin = fin->link;
		ret = temp->info;
		free(temp);
	}
	return ret;
}

void traverse()
{
	struct node* q;
	q = fout;
	if (fout == NULL)
		printf("Queue is empty\n");
	else
	{
		while (q != NULL)
		{
			printf("%d ", q->info);
			q = q->link;
		}
		printf("\n");
	}
}

int check(int min, int n)
{
	int trigger = 0;
	for (int i = 0; i < n; i++)
	{
		int start = delete_();
		if (start == min)
		{
			insert_out(start);
			min++;
		}
		else
		{
			if (top == NULL)
			{
				stack_push(start);
			}
			else if (top != NULL && top->info < start)
				return 0;
			else
				stack_push(start);
		}
		int ins;
		while (top != NULL && top->info == min)
		{
			ins = stack_pop();
			insert_out(ins);
			min++;
		}
	}
	if (min-1 == n && top == NULL)
		return 1;
	return 0;
}

int main()
{
	int n;
	printf("No. of elements: ");
	scanf("%d", &n);
	int d,min,max;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &d);
        if(i==0){
            max=min=d;
        }
		if (d < min)
			min = d;
		if (d > max)
			max = d;
		insert(d);
	}
	if (check(min, n))
	{
		printf("YES\n");
		traverse();
	}
	else
		printf("NO\n");
    return 0;
}