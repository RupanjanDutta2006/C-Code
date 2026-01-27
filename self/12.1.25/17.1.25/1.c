//WAP to make a integer array and print the array
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
}