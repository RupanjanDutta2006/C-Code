#include<stdio.h>
int fibo(int a,int b,int n)
{
    if(n==0)
        return;
    printf("%d ",a);
    fibo(b,a+b,n-1);
}
void main()
{
    int a;
    printf("Enter the Range = ");
    scanf("%d",&a);
    fibo(0,1,a);
}