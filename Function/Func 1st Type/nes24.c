//question no 24 1st type
#include<stdio.h>
void nes();
void main()
{
     nes();
}
void nes()
{
   int n;
    printf("Enter the range =");
    scanf("%d",&n);
    int i,j;
     for(i=1;i<=n;i++)
      {
        for(j=i;j>=1;j--)
        {
         printf("%d",j%2);
        }
         printf("\n");
      }
}
