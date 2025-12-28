#include<stdio.h>
void main()
{
    int n,i,temp;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Elements = ");
    for(i=0;i<n;i++)
    {
        printf("Enter the Element for %d Index = ");
        scanf("%d",&a[i]);
    }
    printf("The Integer Array will be = \n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\nAfter ADD -1 = \n");
    for(i=0;i<n;i++)
    {
        if(a[i]%5==0)
        {
            temp=a[i];
            a[i]=-1;
            a[i+1]=temp;
            n++;
        }
    }
}