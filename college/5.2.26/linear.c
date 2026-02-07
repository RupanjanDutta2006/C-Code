//linear
#include<stdio.h>
int ser(int a[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
        if(a[i]==key)
            return i;
    return -1;
}
void main()
{
    int a[5],n,i,key;
    printf("Enter the Range of the Array = ");
    scanf("%d",&n);
    printf("Enter the Elements = ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The Array is = ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("Enter the Element to be Search = ");
    scanf("%d",&key);
    int result=ser(a,n,key);
    if(result==-1)
        printf("Element is not found");
    else
        printf("Element is found at index %d",result);
}