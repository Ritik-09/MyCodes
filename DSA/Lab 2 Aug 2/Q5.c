//Given three arrays sorted in non-decreasing order, print all common elements in these arrays.

#include <stdio.h>
void common(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3)
{
	int i = 0, j = 0, k = 0;
	while (i<n1&&j<n2&&k<n3)
	{
		if (arr1[i]==arr2[j]&&arr2[j] == arr3[k])
		{ 
		    printf("%d ",arr1[i]);
		i++;
		j++;
		k++;
		}
		else if (arr1[i]<arr2[j])
			{
			    i++;
			}
		else if (arr2[j]<arr3[k])
			{
			    j++;
			    
			}
		else
			{
			    k++;
			}
	}
}

int main()
{
    int n1,n2,n3;
	printf("Enter the size of three array: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	int arr1[n1];
	int arr2[n2];
	int arr3[n3];
	printf("Enter elements in array 1: ");
	for (int i = 0; i < n1; i++) {
	    scanf("%d",&arr1[i]);
	}
	printf("Enter elements in array 2: ");
	for (int i = 0; i < n2; i++) {
	    scanf("%d",&arr2[i]);
	}
	printf("Enter elements in array 3: ");
	for (int i = 0; i < n3; i++) {
	    scanf("%d",&arr3[i]);
	}

	printf("Common Elements are: ");
	common(arr1, arr2, arr3, n1, n2, n3);
	return 0;
}