#include<stdio.h>
#include<math.h>
void main()
{
    int rem,rem1,c1=0,c,a,x,f=0,i,s,y,j;
    printf("Enter the No = ");
    scanf("%d",&a);
    x=a;
    y=a;
    while(x>0)
    {
        c1++;
        x=x/10;
    }
    for(i=0;i<c1;i++)
    {
        c=0;
        for(j=1;j<=y;j++)
        {
            if(y%j==0)
                c++;
        }
        if(c!=2)
        {
            f=1;
            break;
        }
        rem=y%10;
        rem1=y/10;
        s=rem*pow(10,c1-1)+rem1;
        y=s;
    }
    if(f==1)
        printf("%d is Not a Circular Prime No ",a);
    else
        printf("%d is a Circular Prime No ",a);
}
