//WAP to check whether a no is armstrong or not
#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,c=0,d=0,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n;i>0;i/=10)
        c++;
    for(i=n;i>0;i/=10)
    {
        r=i%10;
        d=d+pow(r,c);
    }
    (d==n)?printf("Armstrong"):printf("Not Armstrong");
}