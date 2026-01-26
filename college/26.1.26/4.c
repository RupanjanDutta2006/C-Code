//Write a C program to find the factorial of a number using recursion.
#include<stdio.h>
int fact(int);
void main()
{
    int n;
    printf("Enter the no = ");
    scanf("%d",&n);
    printf("Factorial of %d is = %d",n,fact(n));
}
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*(fact(n-1));
}