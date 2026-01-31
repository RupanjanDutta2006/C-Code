/*
36. Write a C program to print the following pattern for n number of rows, where 
n is supplied externally.
*
* *
* * * *
* * * * * *
* * * * * * * *
* * * * * * * * * *
*/
#include <stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the No of Rows = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}