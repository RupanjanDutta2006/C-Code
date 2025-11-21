#include<stdio.h>
void main()
{
    int i,j,sp;
    for(i=1;i<=4;i++)
    {
        for(sp=3;sp>=i;sp--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }
    for(i=1;i<=3;i++)
    {
        for(sp=1;sp<=i;sp++)
            printf(" ");
        for(j=3;j>=1;j--)
            printf("* ");
        printf("\n");
    }
}