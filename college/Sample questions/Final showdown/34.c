//Write a C Program to convert degree Fahrenheit into degree Celsius.
#include <stdio.h>
void main()
{
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Celsius: %.2f degree Celsius\n", celsius);
}