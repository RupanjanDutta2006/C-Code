//WAP to check whether a no is neon no or not 
#include<stdio.h>
void main()
{
    int n,sq,rem,s=0;
    printf("Enter the No = ");
    scanf("%d",&n);
    sq=n*n;
    while(sq>0)
    {
        rem=sq%10;
        s=s+rem;
        sq=sq/10;
    }
    if(n==s)
        printf("%d is a Neon no",n);
    else
        printf("%d is NOT a Neon no",n);
}