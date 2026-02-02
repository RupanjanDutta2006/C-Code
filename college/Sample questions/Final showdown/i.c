#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c, d;
    float r1, r2;
    printf("Enter coefficients a,b and c: ");
    scanf("%d%d%d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct\n");
        printf("Root1=%.2f\n", r1);
        printf("Root2=%.2f\n", r2);
    }
    else if (d == 0)
    {
        r1 = -b / (2.0 * a);
        printf("Roots are real and equal\n");
        printf("Root1=Root2=%.2f", r1);
    }
    else
        printf("Roots are not real");
}
