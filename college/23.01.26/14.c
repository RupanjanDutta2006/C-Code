//Famouse pattern
/*
      1
    3 5
  7 9 1
3 5 7 9
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
            printf("%d ", num);
            num += 2;
            if(num > 10)
                num %= 10;
        }
        printf("\n");
    }
}