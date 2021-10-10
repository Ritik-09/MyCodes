//Given two sorted arrays and a number x, find the pair whose sum is equal to x and the pair has an element 
//from each array.

#include <stdio.h>
int main()
{
    int n1,n2,x,sum=0;
    printf("Enter the size of array 1 and array 2: ");
    scanf("%d%d",&n1,&n2);
    int arr1[n1],arr2[n2];
    printf("Enter the elements in array 1: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements in array 2: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d",&arr2[i]);
    }
    printf("Enter the value of x: ");
    scanf("%d",&x);
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
           sum =arr1[i]+arr2[j];
           if(sum == x){
               printf("pair of %d and %d\n",arr1[i],arr2[j]);
               break;
           }
        }
    }

    return 0;
}