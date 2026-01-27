//power of a no
#include<stdio.h>
int power(int,int);
void main()
{
    int b,n;
    printf("Enter the Power & Base = ");
    scanf("%d%d",&n,&b);
    printf("Result (%d^%d) = %d",b,n,power(b,n));
}
int power(int x,int y)
{
    if(y==0)
        return 1;
    else
        return x*power(x,y-1);
}
