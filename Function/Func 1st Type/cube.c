//cube area perimeter function 1st type
#include<stdio.h>
void cube();   // function declaration
void main()
{
    cube();    // function call
}
void cube()    // function definition
{
    float a, area, peri;

    printf("Enter the side of cube = ");
    scanf("%f", &a);

    area = 6 * a * a;
    peri = 12 * a;

    printf("Total Surface Area of Cube = %.2f\n", area);
    printf("Perimeter of Cube = %.2f", peri);
}
