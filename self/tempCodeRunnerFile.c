#include <stdio.h>

void main() {
    int a, i, j, temp;
    printf("Enter the RANGE = ");
    scanf("%d", &a);
    int arr[a];
    for(i = 0; i < a; i++) {
        printf("Enter the value of arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("The values in the array are:\n");
    for(i = 0; i < a; i++)
        printf("%d ", arr[i]);

    // Selection sort:
    for(i = 0; i < a - 1; i++) {
        int min_idx = i;
        for(j = i + 1; j < a; j++) {
            if(arr[j] < arr[min_idx])
                min_idx = j;
        }
        // Swap minimum element with the first unsorted element
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    printf("\nSorted array is = \n");
    for(i = 0; i < a; i++)
        printf("%d\n", arr[i]);
}
