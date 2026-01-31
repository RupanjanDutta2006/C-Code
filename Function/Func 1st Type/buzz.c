//wap to check whether a no. is buzz or not 1st type
#include<stdio.h>
void buzz();//func. declaration
void main()
{
   buzz();//calling
}
void buzz()  //func. definition
{
    int x;
    printf("Enter the No. = ");
    scanf("%d",&x);
    if(x%7==0 && x%10==7)
      printf("%d is Buzz No.",x);
    else
      printf("%d is NOT Buzz No.",x);
}