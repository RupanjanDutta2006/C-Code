//52(ii) Write down the C code to multiply a 3x2 matrix with its transpose.
#include <stdio.h>
void main()
{
    int a[3][2], t[2][3], m[3][3],i, j, k;
    printf("Enter elements of 3x2 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
    }
    /* Transpose of matrix */
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            t[j][i] = a[i][j];
    }
    /* Multiplication A x A^T */
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            m[i][j] = 0;
            for (k = 0; k < 2; k++)
                m[i][j] = m[i][j]+a[i][k] * t[k][j];
        }
    }
    printf("Resultant Matrix (3x3):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}
