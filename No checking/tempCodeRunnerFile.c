// WAP to check whether a number is Disarium or not
#include <stdio.h>
#include <math.h>
void main()
{
    int rem, x, a, c = 0, s = 0, p;
    printf("Enter the number = ");
    scanf("%d", &a);
    for (x = a; x > 0; x = x / 10)
        c++;
    for (x = a; x > 0; x = x / 10)
    {
        rem = x % 10;
        p = pow(rem, c--);
        s = s + p;
    }
    printf("%d is%sa Disarium Number", a,(s == a)?printf(" "):printf(" NOT "));
}
