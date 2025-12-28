#include<stdio.h>
void main()
{
    int n,k,smax,max,i,j,a[50];
    printf("Enter the Range  = ");
    scanf("%d",&n);
    printf("Enter %d No of Element = ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    j=0;
    for(i=0;i<n;i++)
        if(a[i]>max)
        {
            max=a[i];
            j=i;
        }
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
    printf("Max= %d\n2nd Max = %d",max,smax);
}