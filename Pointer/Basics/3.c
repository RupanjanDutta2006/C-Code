//Pointer of pointer
#include<stdio.h>
void main()
{
    int z=10,*p,**q;
    p=&z;
    *q=&p;
    printf("Z = %d\n",z);
    printf("Z = %d\n",**q);
    printf("Z's ADDress = %u\n",**q);
}