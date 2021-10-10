#include <stdio.h> 
 
#define MaxStackSize 100 
 
int StackA[MaxStackSize],StackB[MaxStackSize]; 
 
int SizeA=0,SizeB=0; 
 
void Push(int *stack,int item, int *StackSize) 
{ 
	if((*StackSize)>MaxStackSize)	printf("\n\tSTACK OVERFLOW\n"); 
	else 
	{ 
		stack[*StackSize] = item; 
		(*StackSize)++; 
	} 
} 
 
int Pop(int *stack, int *StackSize) 
{ 
	if( (*StackSize) <= 0 ) return -1; 
	else 
	{ 
		int a = stack[(*StackSize)-1]; 
		(*StackSize)--; 
		return a; 
	} 
} 
 
void StackCopy(int n) 
{ 
	int a[n],k=0; 
	printf("\n\nAfter copying from A to B,\nStack-B Contents: ");
	while (SizeA > 0 )   { a[k] = Pop(StackA, &SizeA); k++;} 
	for(k=n-1;k>=0;k--) 
	{
		Push(StackB, a[k], &SizeB); 
		printf("%d, ",a[k]);
	}
} 
 
int main() 
{ 
	int i,N; 
	int Nums[] = {0, 2, 3, 5, 7, 12, 14, 19, 23, 30};
	N = sizeof(Nums)/sizeof(Nums[0]);
	
	printf("\nStack-A Contents: ");
	for(i=0;i<N;i++) 
	{
		Push(StackA, Nums[i], &SizeA); 
		printf("%d, ",Nums[i]);
	}
	StackCopy(N); 
	return 0; 
}