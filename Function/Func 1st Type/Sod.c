//Sum of digit of a no.   125  =5+2+1=8 1st type
#include<stdio.h>
void sum();
void main()
{
    sum();
}
void sum()
{
    int n,rem,s=0,x;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        s=s+rem;
    }
     printf("Sum of digit = %d ",s);
}