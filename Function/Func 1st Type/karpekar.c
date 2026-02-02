//kaprekar No.   45,99,297    45^2=2025   25+20=45    297^2=88209    209+88=297 1st type
#include<stdio.h>
#include<math.h>
void kar();
void main()
{
   kar();
}
void kar()
{
   int n,x,sq,c=0,p;
   printf("Enter the No. = ");
   scanf("%d",&n);
   for(x=n;n>0;n=n/10)
   {
      c++;
   }
   sq=x*x;
   p=pow(10,c);
   if(((sq%p)+(sq/p))==x)
      printf("%d is Kaprekar No. ",x);
   else
      printf("%d is NOT Kaprekar No. ",x);
}