//Write a C code to find factorial of a number using recursion.
#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
void main()
{
    int n;
    printf("Enter the No = ");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,fact(n));
}