//WAP to check whether a no is Abundant no or not
#include<stdio.h>
void main()
{
    int a,x,i,s=0;
    printf("Enter the No = ");
    scanf("%d",&a);
    x=a;
    for(i=1;i<x;i++)
    {
        if(a%i==0)
            s=s+i;
    }
    if(s>a)
        printf("%d is a Abundant No",a);
    else
        printf("%d is NOT a Abundant No",a);
}