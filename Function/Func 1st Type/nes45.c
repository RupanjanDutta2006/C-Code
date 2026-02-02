//question  no 45 1st type
#include<stdio.h>
void nes();
void main()
{
    nes();
}
void nes()
{
    int n,i,j,k;
    printf("Enter the range =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}