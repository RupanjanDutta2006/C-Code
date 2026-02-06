//decimal to binary conversion
#include<stdio.h>
void main()
{
    int d,b=0;
    printf("Enter the Decimal No = ");
    scanf("%d",&d);
    while(d>0)
    {
        b=b*10+d%2;
        d=d/2;
    }
    printf("Binary No = %d",b);
}