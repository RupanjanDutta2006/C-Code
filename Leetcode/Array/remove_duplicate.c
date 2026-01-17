//Remove Duplicates from Sorted Array
#include <stdio.h>
void main()
{
    int n, i, j = 0;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the sorted array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("The array after removing duplicates is:\n");
    for (i = 0; i < n; i++)
         printf("%d ", arr[i]);
    for (i = 0; i < n - 1; i++)
        if(arr[i] != arr[i + 1])
            arr[j++] = arr[i];
    arr[j++] = arr[n - 1];
    printf("The array after removing duplicates is:\n");
    for (i = 0; i < j; i++)
         printf("%d ", arr[i]);
}