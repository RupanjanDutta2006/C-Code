//WAP to check whether a no is Kaprekar no or not
#include<stdio.h>
#include<math.h>
void main()
{
    int c=0,rem1,rem2,sq,n,x,p=1,i;
    printf("Enter the No = ");
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        c++;
        n=n/10;
    }
    n=x;
    sq=n*n;
    //p=pow(10,c);
    for ( i = 0; i < c; i++) 
        p= 10*p;
    rem1=sq%p;
    rem2=sq/p;
    if(x==(rem1+rem2))
        printf("%d is a kaprekar no",x);
    else
        printf("%d is a NOT kaprekar no",x);
}