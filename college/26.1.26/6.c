#include<stdio.h>
int gcd(int,int);
void main()
{
    int a,b;
    printf("Enter the 2 No =");
    scanf("%d%d",&a,&b);
    printf("Gcd of %d & %d is = %d",a,b,gcd(a,b));
}
int gcd(int x,int y)
{
    if(y==0)
        return x;
    else
        return gcd(y,x%y);
}