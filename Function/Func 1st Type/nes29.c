///question no 29 1st type
#include<stdio.h>
void nes();
void main()
{
    nes();
}
void nes()
{
    int n,i,j;
    printf("Enter the range =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*i)-1;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}