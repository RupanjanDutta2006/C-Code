//Swipping of two number without using third variable
#include <stdio.h>
void main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before Swapping: a = %d, b = %d\n", a, b);
    a = a + b; // sum of a and b is stored in a
    b = a - b; // original value of a is stored in b
    a = a - b; // original value of b is stored in a
    printf("After Swapping: a = %d, b = %d\n", a, b);
}