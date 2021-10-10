 //Perform the union and intersection of two arrays. (In UNION, the common elements must come once)
 
 #include <stdio.h>
void unionArray(int arr1[], int arr2[], int n1, int n2) {
    int f, i, j, k = 0;
    int arr3[n1+n2];
    for (i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
        k++;
    }

    for (i = 0; i < n2; i++) {
        f = 0;
        for (j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                f = 1;
            }
        }
        if (f == 0) {
            arr3[k] = arr2[i];
            k++;
        }
    }
    printf("Union of two array is:");
    for (i = 0; i < k; i++) {
        printf("%d ", arr3[i]);
    }
}

void intersection(int arr1[], int arr2[], int n1, int n2) {

    int arr3[n1+n2];
    int i, j, k = 0;

    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                arr3[k] = arr1[i];
                k++;
            }
        }
    }
    printf("\nIntersection of two array is:");
    for (i = 0; i < k; i++) {
        printf("%d ", arr3[i]);
    }
}

int main() {

    int i, j, n1, n2;

    printf("Enter size of array 1 and array 2: ");
    scanf("%d%d", &n1,&n2);
    int arr1[n1],arr2[n2],arr3[n1+n2];
    printf("Enter 1st array elements:");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 2nd array elements:");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    unionArray(arr1, arr2, n1, n2);
    intersection(arr1, arr2, n1, n2);

    return 0;
}