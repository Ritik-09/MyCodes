#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the size to arr1 and arr2 : ");
    scanf("%d%d",&a,&b);
    int arr1[a];
    int arr2[b];
    printf("enter the element in arr1 in sorted order ");
    for (int i = 0; i < a; i++) {
        scanf("%d",&arr1[i]);
    }
    printf("enter the element of arr2 in sorted order ");
    for (int i = 0; i < b-a; i++) {
        scanf("%d",&arr2[i]);
    }
    for (int i = 0; i < a; i++) {
        arr2[(b-a)+i]=arr1[i];
    }
    
    return 0;
}