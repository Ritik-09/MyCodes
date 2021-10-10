#include <stdio.h>

int main()
{
    
int i, max, min, size, avg,sum=0;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];
    
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }

    max = arr[0];
    min = arr[0];
    for(i=1; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    avg=sum/size;
    
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    printf("Average = %d",avg);
    return 0;
}