//with return type and parameter passing
//WAP in c to sum of 2 no
#include<stdio.h>
int sum(int,int); //initialize
void main()
{
    int a,b,s;
    printf("Enter the 2 no  ");
    scanf("%d%d",&a,&b);//a=9 b=11
    s = sum(a,b);  //calling
    printf("%d",s);
}
int sum(int x,int y)  //defination
{   
    int c;
    c=x+y;//c=20
    return c;
}