//No parameter but return type
//WAp in c to sum of 2 no
#include<stdio.h>
int sum(); //initialize
void main()
{
    int x=sum();//7
    printf("%d",x);  //calling
}
int sum()  //defination
{   
    int a,b,c;
    printf("Enter the 2 no  ");
    scanf("%d%d",&a,&b);//a=2 b=5
    c=a+b;//c==7
    return (c);
}