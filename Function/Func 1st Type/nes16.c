//question no 16 1st type
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
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}