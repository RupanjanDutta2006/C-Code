//fibo
#include<stdio.h>
void main()
{
    int n,i,a=0,b=1,s;
    printf("Enter the Range = ");
    scanf("%d",&n);
    printf("The Fibonacci Series is = \n");
    for(i=0;i<n;i++)
    {
            s=a+b;
            printf("%d ",b);
            a=b;
            b=s;
    }
}
