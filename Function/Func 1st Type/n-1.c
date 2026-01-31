//WAP to print n-1 by using while loop 1st type
#include<stdio.h>
void hi();
void main()
{
    hi();
}
void hi()
{
    int i,n;
    printf("Enter the Range = ");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        printf("%d ",i);
        i--;
    }   
}