#include <stdio.h>
int main()
{
    int i[] = {1, 2, 3}, *p;
    p = i;
    printf("%d %d", *p, *p++);
    return 0;
}
