/*
   1 + 2/2! + 3/3! + 4/4!   --n/n!
*/
#include<stdio.h>
void main()
{
    int i,n,f=1,s=0,s1=0;
    printf("Enter the Range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
        if(i==1)
          printf("%d + ",i);
        else if(i==n)
          printf("%d/%d ",i,f);
        else
          printf("%d/%d + ",i,f);
        s=s+i;
        s1=s1+f;
    }
    printf(" = %d/%d ",s,s1);
}