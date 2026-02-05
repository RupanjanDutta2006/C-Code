//Simple interest in function 1st type
#include<stdio.h>
void simple();   // function declaration
void main()
{
    simple();    // function call
}
void simple()    // function definition
{
    float p, r, t, si;
    printf("Enter Principal = ");
    scanf("%f", &p);
    printf("Enter Rate = ");
    scanf("%f", &r);
    printf("Enter Time = ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("Simple Interest = %.2f\n Total = %.2f", si,si+p);
}
