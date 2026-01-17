// Median of Two Sorted Arrays
#include <stdio.h>
void main()
{
    int n1, n2, i, j, k;
    printf("Enter the number of elements in the first sorted array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of the first sorted array:\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);
    printf("Enter the number of elements in the second sorted array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements of the second sorted array:\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);
    int merged[n1 + n2];
    i = j = k = 0;
    // Merge two sorted arrays
    for(int k=0;k<n1;k++)
        merged[k]=arr1[k];
    for(int k=0;k<n2;k++)
        merged[n1+k]=arr2[k];
    // Sort the merged array
    for (i = 0; i < n1 + n2 - 1; i++)
        for (j = 0; j < n1 + n2 - i - 1; j++)
            if (merged[j] > merged[j + 1])
            {
                int temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
    printf("Merged Sorted Array:\n");
    for (i = 0; i < n1 + n2; i++)
        printf("%d ", merged[i]);
    float median;
    int total = n1 + n2;
    if (total % 2 == 0)
        median = (merged[total/2 - 1] + merged[total/2]) / 2.0;
    else
        median = merged[total/2];
    printf("\nMedian of the two sorted arrays: %.2f\n", median);
}
