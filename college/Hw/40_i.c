//WAP to find the real roots of a quadratic equation
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float d,r1,r2;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    d = b*b - 4*a*c;
    if (d < 0)
        printf("No real roots exist.");
    else
    {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are: %.2f and %.2f", r1, r2);
    }
}