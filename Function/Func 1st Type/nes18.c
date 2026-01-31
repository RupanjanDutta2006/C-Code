//question no 18 1st type
#include<stdio.h>
void nes();
void main()
{
    nes();
}
void nes()
{
    int n;
    printf("Enter the range =");
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}