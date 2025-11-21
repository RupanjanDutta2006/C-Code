//WAP to check whether a no is Magic no or not
#include<stdio.h>
void main()
{
    int a,n,rem,s;
    printf("Enter the No = ");
    scanf("%d",&a);
    n=a;
    for(;;)
    {
        s=0;
        while(n>0)
        {
            rem=n%10;
            s=s+rem;
            n=n/10;
        }
        if(s>9)
        {
            n=s;
            continue;
        }
        else
            break;
    }
    if(s==1)
        printf("%d is a Magic No",a);
    else
        printf("%d is NOT a Magic No",a);
}