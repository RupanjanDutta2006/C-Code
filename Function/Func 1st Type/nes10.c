// Question no 10 – Function 1st type
#include <stdio.h>

void pattern();   // function declaration

void main()
{
    pattern();    // function call
}

void pattern()    // function definition
{
    int i, j;
    int n;
    printf("Enter the range = ");
    scanf("%d", &n);
    for(i = n; i >= 1; i -= 2)
    {
        for(j = i; j <= n; j += 2)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
