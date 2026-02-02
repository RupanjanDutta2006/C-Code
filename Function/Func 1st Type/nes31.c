///question no 31 1st type
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
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(k=i-1;k>=1;k--)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}