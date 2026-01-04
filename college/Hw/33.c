//WAP to print the sum of all perfect no of a given range
#include<stdio.h>
void main()
{
    int i,j,range,sum=0,perfectSum=0;
    printf("Enter the range: ");
    scanf("%d",&range);
    for(i=1;i<=range;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
                sum=sum+j;
        }
        if(sum==i)
        {
            printf("%d is a perfect number\n",i);
            perfectSum=perfectSum+i;
        }
    }
    printf("Sum of all perfect numbers in the given range is %d",perfectSum);
}