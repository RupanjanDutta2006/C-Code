//Matrix transpose and multiplication
#include<stdio.h>
void main()
{
    int n,arr[5][5],t[5][5],m[5][5],r,c,i,j,k;
    printf("Enter the Row and Column = ");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the Element for (%d,%d) index =",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    //output
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    //transpose matrix
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            t[j][i]=arr[i][j];
    printf("Transpose matrix is =\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            printf("%d ",t[i][j]);
        printf("\n");
    }
    //Multiplication
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            m[i][j]=0;
            for(k=0;k<c;k++)
                m[i][j]+=arr[i][k]*t[k][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
            printf("%d ",m[i][j]);
        printf("\n");
    }
}