//WAP to check whether a no is Disarium no or not
#include<stdio.h>
#include<math.h>
void main()
{
    int rem,x,a,c=0,s=0,p;
    printf("Enter the no = ");
    scanf("%d",&a);
    x=a;
    while(x>0)
    {
        rem=x%10;
        p=(int)pow(rem,c);
        s=s+p;
        x=x/10;
    }
    if(s==a)
        printf("%d is a Krishnamurti No",a);
    else
        printf("%d is NOT a Krishnamurti No",a);
}