//question no 37 1st type
#include<stdio.h>
void nes();
void main()
{
    nes();
}
void nes()
{
    int n,i, j, a, b, s;
    printf("Enter the range =");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        a = 0;
        b = 1;
        for(j = 1; j <= i; j++)
        {
            if(j == 1)
                printf("1 ");
            else
            {
                s = a + b;
                printf("%d ", s);
                a = b;
                b = s;
            }
        }
        printf("\n");
    }
}
