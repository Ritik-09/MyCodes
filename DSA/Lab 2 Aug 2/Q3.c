//Given an array of positive integers of size n, find the maximum repeating number in this array.

#include<stdio.h>
int mostElement(int a[], int n)
{
    for (int i = 0; i < n; i++)   
    {    
        int temp;
        for (int j = i+1; j < n; j++) 
        {     
           if(a[i] > a[j]) 
           {    
               temp = a[i];    
               a[i] = a[j];    
               a[j] = temp;    
           }     
        }     
    }        

    int max = 1, res = a[0], c = 1; 
    for (int i = 1; i < n; i++) { 
        if (a[i] ==a[i - 1]) 
            c++; 
        else { 
            if (c>max) { 
                max=c; 
                res = a[i - 1]; 
            } 
            c = 1; 
        } 
    }   

    if (c > max) 
    { 
        max = c; 
        res = a[n - 1]; 
    }   
    return res; 
}

int main()
{
    int n;          
    printf("Enter the number of elements ");
    scanf("%d",&n);    
    int arr[n];    
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    } 
    int maxElement = mostElement(arr, n);    
    printf("\n Maximum Repeating Element : %d",maxElement);   
    return 0;
}