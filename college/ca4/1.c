#include<stdio.h>
void main()
{
    int a[20],n,f=0,ser,i;
    printf("Enter the Range = ");
    scanf("%d",&n);
    printf("Enter the Elements = ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The array is = ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nEnter the Element u Wanna Search = ");
    scanf("%d",&ser);
    for(i=0;i<n;i++)
        if(a[i]==ser)
        {
            f=1;
            break;
        }
    (f==1)?printf("%d found at %d no index",ser,i):printf("%d is not present in this array",ser);
}