///question no 8 1st type
#include<stdio.h>
void nes();
void main()
{
    nes();
}
void nes()
{
    int n;
    printf("Enter the range = ");
    scanf("%d", &n);
    int i,j;
    for(i=1;i<=n;i+=2)
    {
        for(j=i;j>=1;j-=2)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}