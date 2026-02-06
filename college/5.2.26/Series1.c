/*
39. Write a C program to add the following series for given value of n.
1/4! - 1/6! + 1/8! - …………..1/n!
*/
#include<stdio.h>
void main()
{
    int n,i,f=1,j;
    float s=0.0;
    printf("Enter the Range = ");
    scanf("%d",&n);
    for(i=2;i<=n+1;i++)
    {   
        f=1;
        for(j=1;j<=i*2;j++)
            f=f*j;
        if(i==2)
        {
            printf(" 1/%d! ",i*2);
            s=s+(1.0/(float)f);
        }
        else if(i%2==0)
        {
            printf(" - 1/%d! ",i*2);
            s=s-(1.0/(float)f);
        }
        else
        {
            printf(" + 1/%d! ",i*2);
            s=s+(1.0/(float)f);
        }
    }
    printf("\nSum = %f",s);
}
