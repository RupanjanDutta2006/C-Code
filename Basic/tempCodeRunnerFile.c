//wap to calculate area and perimeter of circle
#include<stdio.h>
void main()
{
    float a,ar,pr;
    printf("Enter the Radius of the Circle = ");
    scanf("%f",&a);
    ar=3.14*a*a;
    pr=2*3.14*a;
    printf("Area = %f,Parameter =%f",ar,pr);
}