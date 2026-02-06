//matrix Multiplication
#include<stdio.h>
void main()
{
    int a[5][5],t[5][5],re[5][5],r,c,i,j,k;
    printf("Enter the Row And Column of the matrix = ");
    scanf("%d%d",&r,&c);
    printf("Enter the Element of the matrix = \n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        {
            printf("Enter the Element for (%d,%d) index = ",i,j);
            scanf("%d",&a[i][j]);
        }
    printf("The Matrix is = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("The Transpose of the Matrix is = \n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            t[j][i]=a[i][j];
    for(i=0;i<c;i++)    {
        for(j=0;j<r;j++)
            printf("%d ",t[i][j]);
        printf("\n");
    }
    //multiplication
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            re[i][j]=0;
            for(k=0;k<c;k++)
                re[i][j]=re[i][j]+a[i][k]*t[k][j];
        }
    }
    printf("The Multiplication of the Matrix is = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
            printf("%d ",re[i][j]);
        printf("\n");
    }
}
