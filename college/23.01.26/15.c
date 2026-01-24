//Famouse pattern
/*
      2
    4 6
  8 2 4
6 8 2 4
*/
#include <stdio.h>
void main()
{
    int i, j, n, num = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
            printf("  ");
        for (j = 1; j <= i; j++)
        {
            printf("%d ", num*2);
            num ++;
            if (num == 10)
                continue;
            else if(num> 5 )
                num%=5;
            else
                num=num;
        }
        printf("\n");
    }
}