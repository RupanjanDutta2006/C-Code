//No return but parameter passing
//WAP in c to sum of 2 no
#include<stdio.h>
void sum(int,int); //initialize
void main()
{
    int a,b;
    printf("Enter the 2 no  ");
    scanf("%d%d",&a,&b);
    sum(a,b);  //calling
}
void sum(int x,int y)  //defination
{   
    int c;
    c=x+y;
    printf("%d",c);
}