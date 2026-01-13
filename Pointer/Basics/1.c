#include<stdio.h>
//#include<malloc.h>
void main()
{
    int x=10,*p;
    p=&x;
    printf("X = %d\n",x);
    printf("X = %d\n",*p);
    printf("X's ADDress = %u\n",&x);
    printf("X's ADDress = %u\n",&p);
    printf("P's ADDress = %u\n",&p);
    free(p);
    printf("X = %d\n",x);
    printf("X = %d\n",*p);
    printf("X's ADDress = %u\n",&p);
}