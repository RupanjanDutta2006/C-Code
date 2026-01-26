//
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*p,i;
    printf("Enter the Range of the ARRAy = ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
        printf("Not Possible");
    else
    {
        for(i=0;i<n;i++)
        {
            printf("Enter the Element for %d no index = ");
            scanf("%d",&p[i]);
        }
        printf("The Array will be = \n");
        for(i=0;i<n;i++)
            printf("%d ",p[i]);
    }
}