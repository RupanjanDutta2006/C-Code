/*
    log(1+x)= x - x^2/2 + x^3/3 - x^4/4 + ...
*/
#include <stdio.h>
void main()
{
    int n, i;
    float x, sum = 0, term = 1;
    printf("Enter value of x:");
    scanf("%f", &x);
    printf("Enter number of terms:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        term = term * x;
        if (i % 2 == 0)
            sum = sum - (term / i);
        else
            sum = sum + (term / i);
    }
    printf("log(1+x)=%f", sum);
}
