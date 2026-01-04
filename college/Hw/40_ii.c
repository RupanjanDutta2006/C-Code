//Series: 11+22/2!+33/3!+....+n terms
#include<stdio.h>
void main()
{
    int n,i,j;
    float sum=0,fact;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
            fact=fact*j;
        sum=sum+(11*i)/fact;
    }
    printf("Sum: %.2f",sum);
}