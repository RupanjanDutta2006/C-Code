//WAP to check whether a no is Spy no or not
#include<stdio.h>
void main()
{
    int x,a,rem,f=1,s=0;
    printf("Enter the No = ");
    scanf("%d",&a);
    x=a;
    while(a>0)
    {
        rem=a%10;
        s=s+rem;
        f=f*rem;
        a=a/10;
    }
    if(s==f)
        printf("%d is a Spy no",x);
    else
        printf("%d is not a spy no",x);
}