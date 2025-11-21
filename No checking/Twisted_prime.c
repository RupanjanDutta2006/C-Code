//WAP to check whether a no is Twisted prime or not
#include<stdio.h>
void main()
{
    int a,rem,x,i,c1=0,c2=0,s=0;
    printf("Enter the no = ");
    scanf("%d",&a);
    x=a;
    while(a>0)
    {
        rem=a%10;
        s=(s*10)+rem;
        a=a/10;
    }
    a=x;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            c1++;
            break;
        }
    }
    for(i=2;i<s;i++)
    {
        if(s%i==0)
        {
            c2++;
            break;
        }
    }
    if(c1==0 && c2==0)
        printf("%d is a Twisted Prime No",a);
    else
        printf("%d is NOT a Twisted Prime No",a);
}