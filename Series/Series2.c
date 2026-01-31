/*
    1 - (3x/9*1!) + (6x^4/10*3!) - (9x^7/11*5!) + ...
*/
#include<stdio.h>
#include<math.h>
void main()
{
    int n,x,i,a=7,j,f=1;
    float s=0.0;
    printf("Enter the Range and the base Value(x) = ");
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            printf("1");
            s=s+1;
        }
        else if(i%2==0)
        {
            for(j=1;j<=i;j++)
                f=f*j;
            printf(" - (%d*x^%d)/%d*%d!",3*(i-1),(3*i-2),(a+i),(2*i-3));
            s=s-(float)(3*(i-1)*pow(x,i*3-2))/(float)((a+i)*f);
        }
        else
        {
            for(j=1;j<=i;j++)
                f=f*j;
            printf(" + (%d*x^%d)/%d*%d!",3*(i-1),(3*i-2),(a+i),(2*i-3));
            s=s+(float)(3*(i-1)*pow(x,i*3-2))/(float)((a+i)*f);
        }
    }
    printf(" = %f ",s);
}