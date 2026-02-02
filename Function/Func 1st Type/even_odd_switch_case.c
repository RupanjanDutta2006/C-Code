//WAP to check whether a No. is even or odd by using switch case 1st type
#include<stdio.h>
void even();
void main()
{
  even();
}
void even()
{
   int x;
   printf("Enter the No. = ");
   scanf("%d",&x);
   if(x==0)
     printf("%d is Neutral No. ",x);
   else
   {
   switch(x%2==0)
   {
      case 1:
           printf("%d is Even No.",x);
           break;
      case 0:
           printf("%d is Odd No.",x);
           break;
   }
  }
}