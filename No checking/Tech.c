//WAP to check whether a no is Tech no or not
#include<stdio.h>
#include<math.h>
void main()
{
    int a,x,rem1,rem2,s=0,p,c=0,i;
    printf("Enter the No = ");
    scanf("%d",&a);
    x=a;
    while(x>0)
    {
        c++;
        x=x/10;
    }
    x=a;
    for ( i = 0; i < c; i++) 
        p= 10*p;
    //p=pow(10,c);
    rem1=x/p;
    rem2=x%p;
    s=rem1+rem2;
    if((s*s)==a)
        printf("%d is a Tech No.",a);
    else
        printf("%d is NOT a Tech No.",a);    
}