//WAP to make a integer array and print the array and sum of array elements.
#include <stdio.h>
void main()
{
    int arr[5], i,s=0;
    printf("Enter 5 integers:\n");
    for(i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    //output the array elements
    printf("The integers in the array are:\n");
    for(i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
    //calculate sum of array elements
    for(i = 0; i <= 4; i++)
    {
        s = s + arr[i];
    }
    printf("\nSum of array elements is: %d", s);
}