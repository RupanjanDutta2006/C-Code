//WAP to check whether a no is evil no
#include<stdio.h>
void main()
{
    int i,n,a,c=0,c1=0,x;
    int arr[5];
    printf("Enter the no = ");
    scanf("%d",&a);
    x=a;
    for(n=a,i=0;a>0;a/=2,i++)
    {
        arr[i]=a%2;
        (arr[i]==0)?c++:c1++;
    }
    printf("Binary of %d is = ",x);
    for(int j=i;j!=0;j--)
    {
        printf("%d",arr[j]);
    }
    printf("\n%d is %s a Evil No",x,(c!=0)?"":"NOT");
}