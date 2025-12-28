#include<stdio.h>
int fact(int a)
{
    if(a==1)
        return a;
    else
        return a*fact(a-1);
}
void main()
{
    float y=0.0;
    int x;
    for(x=1;x<=5;x++)
        y=y+(1.0/(float)fact(x));
    printf("Sum  = %f",y);
}