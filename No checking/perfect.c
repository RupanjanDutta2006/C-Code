//WAP to check whether a no is Perfect no or not
#include<stdio.h>
void main()
{
    int i,a,s=0;
    printf("Enter the No = ");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
            s=s+i;
    }
    if(a==s)
        printf("%d is a Perfect no",a);
    else
        printf("%d is NOT a Perfect no",a);
}