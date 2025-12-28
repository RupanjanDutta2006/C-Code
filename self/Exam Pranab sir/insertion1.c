//self
#include<stdio.h>
void main()
{
    int i,j,temp,k=1,n;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Element = ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i;j>0 && a[j-1]>a[j];j--)
        {
            temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
        }
        printf("\nAfter %d n Itteration = ",k++);
        for(j=0;j<n;j++)
            printf("%d ",a[j]);
    }
}