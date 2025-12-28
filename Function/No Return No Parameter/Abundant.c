//WAP to check whether a no is Abundant no or not
#include<stdio.h>
void abun();//func. declaration
void main()
{
    abun();//calling
}
void abun()//func. definition
{
    int a,x,i,s=0;
    printf("Enter the No = ");
    scanf("%d",&a);
    x=a;
    for(i=1;i<x;i++)
        if(a%i==0)
            s=s+i;
    (s>a)?printf("%d is a Abundant No",a):printf("%d is NOT a Abundant No",a);
}