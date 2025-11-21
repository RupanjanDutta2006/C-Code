/*
   Pattern
    a b c d e
      f g h
        i
*/
#include<stdio.h>
void main()
{
   int i,j,sp,k=0;
   char a='a';
    for(i=5;i>=1;i=i-2)
    {
        for(sp=1;sp<=k;sp++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("%c ",a++);
        printf("\n");
        k++;
    }
}