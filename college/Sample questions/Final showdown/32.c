/*
32. Write a C program to compute the s of all perfect numbers within a given 
range taken as input from the user. A number is called a perfect number when it is 
equal to the s of its positive divisors excluding the number itself. 
perfect no  are 6, 28, 496, 8128, etc.
Logic of perfect number: factors of 6 are 1, 2, 3, 6
1 + 2 + 3 = 6
*/
#include <stdio.h>
void main()
{
    int l,u,s=0,j,i;
    printf("Enter the Lower and Higher range to calculate Perfect no = ");
    scanf("%d%d", &l, &u);
    for(i=l;i<=u;i++)
    {
        s=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                s=s+j;
            }
        }
        if(s==i)
        {
            printf("%d ", i);
        }
    }
}