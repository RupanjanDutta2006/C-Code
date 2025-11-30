//WAP to check whether a no is Palindrome no or not
#include<stdio.h>
void main()
{
    int a,x,rem,s=0;
    printf("Enter the No = ");
    scanf("%d",&a);
    for(x=a;x>0;x/=10)
    {
        rem=x%10;
        s=s*10+rem;
    }        
    printf("%d is%sa Palindrome no ",a,(a==s)?(" "):(" NOT "));
}
