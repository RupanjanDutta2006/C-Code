//WAP to print second max. element within an array()
#include<stdio.h>
void main()
{
    int i,n,max,j=0,smax,k=0;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];
    //input
    for(i=0;i<n;i++)
    {
        printf("Enter the No. = ");
        scanf("%d",&a[i]);
    }
    //output
    max=a[0];    //  -7  -5 -3 -1 -9    max=-7
    printf("Array element = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        if(a[i]>max)
        {
          max=a[i];
          j=i;
        }
    }
    printf("\nMax Elemenet = %d Index= %d Position =%d",max,j,j+1);
    if(j==0)
      {
        k=1;
        smax=a[1];
      }
    else
    {
        k=0;
        smax=a[0];
    }  
    for(i=0;i<n;i++)
    {
        if(i!=j)
        {
        if(a[i]>smax)
        {
          smax=a[i];
          k=i;
        }
       }
    }
    printf("\nSecond Max Elemenet = %d Index= %d Position =%d",smax,k,k+1);
}