//question no 4 1st type
#include<stdio.h>
void nes();
void main()
{
    nes();
}
void nes()
{
    int n;
    printf("Enter the range = ");
    scanf("%d", &n);
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}