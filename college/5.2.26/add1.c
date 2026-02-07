#include<stdio.h>
int add(int *,int *);
void main()
{
    int a,b;
    printf("Enter the 2 no = ");
    scanf("%d%d",&a,&b);
    printf("Sum = %d",add(&a,&b));
}
int add(int *x,int *y)
{
    return *x+*y;
}