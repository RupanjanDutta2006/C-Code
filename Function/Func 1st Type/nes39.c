///question no 39 1st type
#include<stdio.h>
void nes();
void main()
{
    nes();
}
void nes()
{
    int n,i,j,sp,k=0;
    printf("Enter the range =");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d ",j);
        }
        for(sp=1;sp<=2*k;sp++)
        {
            printf(" * ");
        }
        k++;
        for(j=i;j>=1;j--)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
}