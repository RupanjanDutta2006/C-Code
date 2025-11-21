//WAP to check whether a no is harshad or not
#include<stdio.h>
void main()
{
    int rem,a,s=0,x;
    printf("Enter the No = ");
    scanf("%d",&a);
    x=a;
    while(x>0)
    {
        rem=x%10;
        s=s+rem;
        x=x/10;
    }
    if(a%s==0)
        printf("%d is a Harshad no",a);
    else 
        printf("%d is a NOT Harshad no",a);
}