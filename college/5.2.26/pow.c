//Power of a no
#include <stdio.h>
int power(int base,int p)
{
    if(p==0)
        return 1;
    else
        return base*power(base,p-1);
}
void main()
{
    int base, p;
    printf("Enter base and power: ");
    scanf("%d%d", &base, &p);
    printf("%d^%d = %d", base, p, power(base, p));
}