/*
40. Write a C program to print the following pattern for n number of rows, where 
n is supplied externally.
i) 
1
2 3
4 5 6
7 8 9 10
*/
#include <stdio.h>
void main()
{
    int n, i, j, num = 1;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d ", num++);
        printf("\n");
    }
}
