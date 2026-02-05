// Write a program in C to print the sum of the following series (up to n terms 
//where n should be given by the user):
//1 + 22/2! + 33/3! + ……..
#include <stdio.h>
void main()
{
    int n, i, j ,f=1;
    float s=0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if(i==1)
        {
            printf("1");
            s=s+1;
        }
        else
        {
            f=1;
            for(j=1;j<=i;j++)
            {
                f=f*j;
            }
            printf(" + %d/%d!",11*i,i);
            s=s+(11*(float)i)/(float)f;
        }
    }
    printf("\nSum of series is %.2f\n", s);
}