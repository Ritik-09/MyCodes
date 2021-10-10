// Sort the elements of an array both in ascending and descending order. (Use any sorting algorithm you know)

#include <stdio.h>
int main()
{
    int n,temp,i,j;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {     
        for (int j = i+1; j < n; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    } 
    printf("Elements of array sorted in ascending order: \n");   
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    for (int i = 0; i < n; i++) {     
        for (int j = i+1; j < n; j++) {     
           if(arr[i] < arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    } 
    
    printf("\nElements of array sorted in descending order: \n"); 
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}