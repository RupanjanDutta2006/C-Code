//WAP to check whether a no is armstrong or not 1st type
#include<stdio.h>
#include<math.h>
void arm();
void main()
{
   arm();
}
void arm()
{
    int n,x,rem,s=0,c=0,p;
      printf("enter the no = ");
      scanf("%d",&n);
      for(x=n;n>0;n=n/10)
      {
          c++;
      }
      for(n=x;n>0;n=n/10)
      {
         rem=n%10;
         p=pow(rem,c);
         s=s+p;
      }
      if(s==x)
      printf("%d is Armstrong no ",x);
      else 
      printf("%d is not Armstrong no ",x);
}