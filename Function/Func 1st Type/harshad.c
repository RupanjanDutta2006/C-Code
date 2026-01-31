//Harshad no 1st type
#include<stdio.h>
void har();
void main()
{
    har();
}
void har()
{
    int n,s=0,x,rem;
    printf("enter the no =");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        s+=rem;
    }
    if (x%s== 0)
     printf("%d is harshad no",x);
    else
    printf("%d is not harshad no",x);
}