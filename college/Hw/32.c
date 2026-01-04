//WAP to find out the sum of first n prime numbers
#include<stdio.h>
void main()
{
    int n,i,j,flag,sum=0;
    printf("Enter the number of prime numbers to sum: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        flag=1;
        for(j=2;j<i;j++)
            if(i%j==0)
            {
                flag=0;
                break;
            }
        if(flag==1)
            sum=sum+i;
    }
    printf("Sum of first %d prime numbers is %d",n,sum);
}