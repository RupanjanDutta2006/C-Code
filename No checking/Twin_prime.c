//WAP to check whether a no is Twin prime or not
#include<stdio.h>
void main()
{
    int i,a,b,c1=0,c2=0;
    printf("Enter the 2 no = ");
    scanf("%d%d",&a,&b);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            c1++;
            break;
        }
    }
    for(i=2;i<b;i++)
    {
        if(b%i==0)
        {
            c2++;
            break;
        }
    }
    if(c1==0 && c2==0 && ((a-b)==2 || (b-a)==2))
        printf("%d and %d are Twin Prime",a,b);
    else
        printf("%d and %d are NOT Twin Prime",a,b);
}