#include<stdio.h>
int fibo(int);
void main()
{
    int a,i;
    printf("Enter the Range = ");
    scanf("%d",&a);
    printf("The Series will be  =\n");
    for(i=1;i<=a;i++)
        printf("%d ",fibo(i));
}
int fibo(int n)
{
    if(n==1 || n==2)
        return 1;
    else
        return(fibo(n-1)+fibo(n-2));
}