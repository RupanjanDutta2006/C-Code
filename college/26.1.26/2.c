//Leap year using ternary operator
#include<stdio.h>
void main()
{
    int yr;
    printf("Enter the Year = ");
    scanf("%d",&yr);
    printf("%d is%sa Leap Year",yr,((yr%400==0) || (yr%4==0 && yr%100!=0))?(" "):(" NOT "));
}