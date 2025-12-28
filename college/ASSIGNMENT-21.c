#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return (b,a%b);
}
void main()
{
    int a,b;
    printf("Enter the 2 no = ");
    scanf("%d%d",&a,&b);
    printf("The GCD is= %d",gcd(a,b));
}
