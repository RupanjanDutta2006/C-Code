/*
51. i) Write down the C code for linear search which will show the positions of all 
the occurrences of the searched value assuming the input array accepts duplicate 
values. */
#include<stdio.h>
void main()
{
    int n,i,ser,a[100],f=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the value to be searched: ");
    scanf("%d",&ser);
    for(i=0;i<n;i++)
        if(a[i]==ser)
        {
            f=1;
            printf("Element %d found at position %d\n",ser,i+1);
        }
    if(f==0)
        printf("Element %d not found in the array.\n",ser);
}