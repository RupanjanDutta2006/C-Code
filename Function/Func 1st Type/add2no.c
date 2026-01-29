//WAP to add 2 no. 
void add();
#include<stdio.h>
void main()
{
    add();
}
void add()
{
    int a,b,c;

    printf("Enter the 1st No. = ");

    scanf("%d",&a);

    printf("Enter the 2nd No. = ");

    scanf("%d",&b);

    c=a+b;

    printf("Addition = %d",c);

}