// 39. Write a C program to add the following series for given value of n.
// 1/4! - 1/6! + 1/8! - …………..1/n!
#include <stdio.h>

void main()
{
    int n, i, j, f;
    float sum = 0.0;
    printf("Enter value of n (even and >=4): ");
    scanf("%d", &n);

    for (i = 4; i <= n; i += 2)
    {
        f = 1;
        for (j = 1; j <= i; j++)
            f = f * j;
        if (((i / 2) % 2) != 0)
        {
            printf("1/%d!", i);
            sum = sum + (1.0 / f);
        }
        else
        {
            printf(" - 1/%d!", i);
            sum = sum - (1.0 / f);
        }
    }
    printf("\nSum of series = %f", sum);
}
