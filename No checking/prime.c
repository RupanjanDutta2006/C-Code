//WAP to check whether a no is Prime no
#include<stdio.h>
void main()
{
    int a,k,i,c=0;
    printf("Enter the No = ");
    scanf("%d",&a);
    k=a;
    for(i=2;i<=a/2;i++)
    {
        if(k%i==0)
        {
            c=1;
            break;
        }
    }
    if(c==0)
        printf("%d is a Prime no",a);
    else
        printf("%d is NOT a Prime no",a);
}