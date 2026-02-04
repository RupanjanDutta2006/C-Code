//question  no 49 1st type
#include<stdio.h>
void nes();
void main()
{
    nes();
}
void nes()
{
    int i,j;
    for(i=68;i>=65;i--)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}