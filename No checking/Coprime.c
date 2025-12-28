//WAP to check whether two numbers are coprime or not
#include <stdio.h>
void main()
{
    int a, b, i, gcd;
    printf("Enter two numbers = ");
    scanf("%d %d", &a, &b);
    for (i = 1; i <= a && i <= b; i++)
        if (a % i == 0 && b % i == 0)
            gcd = i;
    printf("%d and %d are%sCoprime numbers", a, b, (gcd == 1) ? " " : " NOT ");
}   