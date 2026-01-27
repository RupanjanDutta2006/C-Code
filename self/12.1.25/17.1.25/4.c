//Print only even index elements of an array
#include <stdio.h>
void main()
{
    int arr[5], i;
    printf("Enter 5 integers:\n");
    for(i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The integers in the array are:\n");
    for(i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
    //print even index elements
    printf("\nThe even index elements are:\n");
    for(i = 0; i <= 4; i++)
        if(arr[i] % 2 == 0)
             printf("%d ", arr[i]);
}