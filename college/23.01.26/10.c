//swap with call by address
#include<stdio.h>
void swapByAddress(int *a, int *b) 
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void main() 
{
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swapByAddress(&x, &y);
    printf("After swapping (call by address): x = %d, y = %d\n", x, y);
}