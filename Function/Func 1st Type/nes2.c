//question no 2 1st type
#include<stdio.h>
void nes();
void main()
{
   nes();
}
void nes()
{
    int i,j;
    int n;
    printf("Enter the range = ");
    scanf("%d", &n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}