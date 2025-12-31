//WAP to check whether a no is Ugly number or not
//Ugly number: A number whose only prime factors are 2, 3 or 5.
//Example: 6 (2 * 3), 8 (2 * 2 * 2), 15 (3 * 5), 1 (considered as an Ugly number)
#include <stdio.h>  
void main()
{
    int n, x;
    printf("Enter a number: ");
    scanf("%d", &n);
    x = n;
    if (n <= 0) {
        printf("%d is not an Ugly number.", x);
        return;
    }
    for(; n % 2 == 0; n /= 2);
    for(; n % 3 == 0; n /= 3);
    for(; n % 5 == 0; n /= 5);
    printf("%d is%s an Ugly number.", x, (n == 1) ? "" : " not");
}