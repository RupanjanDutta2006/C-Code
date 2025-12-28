#include<stdio.h>
void main()
{
    int i,n,a[10],min,smin,k,j;
    printf("Enter the Range = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the Elemen for %d Index = ",i);
        scanf("%d",&a[i]);
    }
    printf("The Integer Array is = \n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            j=i;
        }
    }
    if(j==0)
    {
        k=1;
        smin=a[1];
    }
    else
    {
        k=0;
        smin=a[0];
    }
    for(i=0;i<n;i++)
        if(i!=j)
        
            if(smin>a[i])
            {
                smin=a[i];
                k=i;
            }
    printf("\nMin = %d, %d index",min,j);
    printf("\n2nd Min = %d, %d index",smin,k);
}
