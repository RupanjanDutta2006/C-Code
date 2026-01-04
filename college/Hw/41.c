#include <stdio.h>

int main()
{
    int n, i, sign = 1;
    double sum = 0.0, fact;

    printf("Enter the value of n (even number >= 4): ");
    scanf("%d", &n);

    for (i = 4; i <= n; i += 2)
    {
        fact = 1;
        for (int j = 1; j <= i; j++)
            fact = fact * j;

        sum = sum + sign * (1.0 / fact);
        sign = -sign;   // change sign
    }

    printf("Sum of the series = %lf", sum);

    return 0;
}
