//WAP to add,sub,multi,div of 2 no. by using func. 1st type
#include<stdio.h>
void input();//func. declaration
void add();//func. declaration
void sub();//func. declaration
void multi();//func. declaration
void divi();//func. declaration
int a,b;  //global variable
void main()
{
   input();//calling
   add();
   sub();
   multi();
   divi();
}
void input()//func. definition
{
    printf("Enter 2 No. = ");
    scanf("%d%d",&a,&b);
}
void add()
{
    printf("Addition = %d\n",a+b);
}
void sub()
{
    printf("Subtraction = %d\n",a-b);
}
void multi()
{
    printf("Multiplication = %d\n",a*b);
}
void divi()
{
    printf("Division = %d\n",a/b);
}