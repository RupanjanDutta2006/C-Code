#include<stdio.h>
void main()
{
    int n,i,sr,j,f=0;
    printf("Enter the  range = ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the Element for %d no index = ",i);
        scanf("%d",&arr[i]);
    }
    printf("The array is = \n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\nEnter the Final No = ");
    scanf("%d",&sr);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(arr[i]+arr[j]==sr)
            {
                f=1;
                break;
            }
            if(f=1)
                break;
    }
    (f==0)?printf("No number is not used in this case"):printf("Add %d and %d index element to get %d",i,j,sr);
}
