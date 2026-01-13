#include<stdio.h>
#include<malloc.h>
void main()
{
    char o='s',*p;
    p=&o;
    printf("X = %c\n",o);
    printf("X = %c\n",*p);
    printf("X's ADDress = %u\n",&o);
    printf("X's ADDress = %u\n",&p);
    printf("P's ADDress = %u\n",&p);
}