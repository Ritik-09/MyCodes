//Add, subtract, and multiply the elements of two arrays. (The size of the two arrays are same)

#include <stdio.h>

void add(int arr1[],int arr2[],int arr3[],int n){
    for(int i=0;i<n;i++){
        arr3[i]=arr1[i]+arr2[i];
    }
}
void subtract(int arr1[],int arr2[],int arr3[],int n){
    for(int i=0;i<n;i++){
        arr3[i]=arr1[i]-arr2[i];
    }
}
void multiply(int arr1[],int arr2[],int arr3[],int n){
    for(int i=0;i<n;i++){
        arr3[i]=arr1[i]*arr2[i];
    }
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr1[n],arr2[n],arr3[n];
    printf("Enter the elements in array 1: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements in array 2: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    add(arr1,arr2,arr3,n);
    printf("Addition of elements of both arrays: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr3[i]);
    }
    subtract(arr1,arr2,arr3,n);
    printf("\nSubtraction of elements of both arrays: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr3[i]);
    }
    multiply(arr1,arr2,arr3,n);
    printf("\nMultiplication of elements of both arrays: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr3[i]);
    }
    return 0;
}