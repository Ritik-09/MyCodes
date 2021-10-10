//Given an array of n distinct elements, find all elements in array which have at-least two smaller elements 
//than themselves.

#include <stdio.h>
int main()
{
    int n, temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            if (arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                }
            }
   }
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}