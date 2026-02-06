#include<stdio.h>
void main()
{
    int i,j,sp,n;
    printf("Enter the Range = ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
            printf("* ");
        for(sp=1;sp<=(n-i)*2;sp++)
            printf("  ");
        for(j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }
}