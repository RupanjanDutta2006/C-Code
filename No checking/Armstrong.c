//WAP to check whether a no is Armstrong no
#include<stdio.h>
#include<math.h>
int main()
{
    int a,x,c=0,s=0,p,rem;
    printf("Enter the No=");
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
        s=s+p;
        x=x/10;
    }
    if(s==a)
        printf("%d is a Armstrong No",a);
    else
        printf("%d is NOT a Armstrong No",a);
    return 0;
}
