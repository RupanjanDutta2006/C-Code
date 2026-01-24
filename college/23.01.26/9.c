//swap with call by value 
#include <stdio.h>
void swapByValue(int a, int b) 
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void main() 
{
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After swapping (call by value): x = %d, y = %d\n", x, y);
}