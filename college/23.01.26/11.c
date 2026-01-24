//linear search
#include <stdio.h>
void main()
{
    int arr[100], n, i, item, found = 0;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    printf("Enter the item to search: ");
    scanf("%d", &item);
    for (i = 0; i < n; i++) 
        if (arr[i] == item) 
        {
            found = 1;
            break;
        }
    if(found==1)
        printf("Item %d found at position %d.\n", item, i + 1);
    else
        printf("Item %d not found in the array.\n", item);
}