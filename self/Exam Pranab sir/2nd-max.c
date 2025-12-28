#include<stdio.h>
void main()
{
    int n,max,smax,i,j,k;
    printf("Enter the range = ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the Element for %d no Index = ",i);
        scanf("%d",&a[i]);
    }
    printf("The Integer ARRAY is = \n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            j=i;
        }
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
    printf("\nMAX element = %d found at %d position\n2nd MAX element = %d found at %d position\n",max,j,smax,k);
}