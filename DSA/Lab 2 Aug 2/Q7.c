// Search an element in an array and count the number of times that element is present.

#include <stdio.h>
int main()
{
    int n,t=0,x;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the Element you want search:\n");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            t++;
        }
    }
    printf("No. of times : %d",t);
    return 0;
}