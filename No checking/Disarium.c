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
        c++;
        x=x/10;
    }
    x=a;
    while(x>0)
    {
        rem=x%10;
        p=pow(rem,c);
        c--;
        s=s+p;
        x=x/10;
    }
    if(s==a)
        printf("%d is a Disarium No",a);
    else
        printf("%d is NOT a Disarium No",a);
}