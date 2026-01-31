// 31. Write a C program to find the sum of the first n prime numbers, where n should be given by the user.
#include <stdio.h>
void main()
{
    int n, sum = 0, i, j;
    printf("Enter the Range of Prime no = ");
    scanf("%d", &n);
    printf("Prime no are:\n");
    for (i = 0; i < n; i++)
    {
        int count = 0;
        for (j = 2; j < i / 2; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 0 && i != 1 && i != 0)
        {
            printf("%d ", i);
            sum = sum + i;
        }
    }
    printf("\nSum of first %d prime numbers is: %d\n", n, sum);
}