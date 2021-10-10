// Reverse the elements of an array without using a 2nd array. (Don’t print the original array in reverse order)

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
    i=0;
    j=n-1;
      while(i<j){
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;  
    j--;  
  }  
  for(i=0;i<n;i++){
      printf("%d ",arr[i]);
  }
    return 0;
}