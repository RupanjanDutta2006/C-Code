//WAp in c to sum of 2 no
#include<stdio.h>
void sum(); //initialize
void main()
{
    sum();  //calling
}
void sum()  //defination
{   
    int a,b;
    printf("Enter the 2 no  ");
    scanf("%d%d",&a,&b);
    printf("%d",a+b);
}