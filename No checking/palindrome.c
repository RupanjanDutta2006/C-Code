//WAP to check whether a no is Palindrome no or not
#include<stdio.h>
void main()
{
    int a,x,rem,s=0;
    printf("Enter the No = ");
    scanf("%d",&a);
    x=a;
    while(x>0)
    {
        rem=x%10;
        s=s*10+rem;
        x=x/10;
    }
    x=a;
    if (x==s)
        printf("%d is a Palindrome no ",x);
    else
        printf("%d is NOT a Palindrome no ",x);    
}