//WAp to find the sum of all integer ranging grom 100 to 300 which are divisible by 5
#include<stdio.h>
void main()
{
    int i,sum=0;
    for(i=100;i<=300;i++)
    {
        if(i%5==0)
            sum=sum+i;
    }
    printf("Sum: %d",sum);
}