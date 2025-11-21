#include<stdio.h>
void main()
{
    int i,j,sp,a;
    printf("Enter the Range = ");
    scanf("%d",&a);
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            printf("%d",j);
        for(sp=1;sp<=(i-1)*2;sp++)
            printf(" ");
        for(j=5;j>=i;j--)
            printf("%d",j);
        printf("\n");
    }
}