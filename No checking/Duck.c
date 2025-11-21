//WAP to check whether a no is Duck no or not 
#include<stdio.h>
void main()
{
    int x,n,c=0,i,f=0,rem;
    printf("Enter the No = ");
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        c++;
        n=n/10;
    }
    n=x;
    int a[c];
    for(i=c;i>0;i--)
    {
        rem=n%10;
        a[i]=rem;
    }
    a[c+1]='\0';
    for(i=0;a[i]!='\0';i++)
    {
        if(a[0]==0)
        {
            f=1;
            break;
        }
        else if(a[i]==0)
            continue;
        else
        {
            f=1;
            break;
        }
    }
    if(f==1)
        printf("%d is Not a Duck no",n);
    else
        printf("%d is a Duck no",n);
}