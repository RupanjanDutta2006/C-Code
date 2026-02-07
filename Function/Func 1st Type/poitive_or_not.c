//Wap to check wheater a no is pos or not 1st type
#include<stdio.h>
void pos();
void main()
{
    pos();
}
void pos()
{
  int x;
    printf("Enter the No =");
    scanf("%d",&x);
    if(x>0)
      printf("%d is positive no",x);
    else if(x==0)
     printf("%d is neutral no",x);
    else
     printf("%d is negative no",x);
}