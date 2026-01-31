//33. Write a program to check find out the sum of digits of a positive integer. 
#include <stdio.h>
void main()
{
    int n, sum = 0, r;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(; n != 0; n = n / 10)
    {
        r = n % 10;
        sum = sum + r;
    }
    printf("Sum of digits is: %d\n", sum);
}