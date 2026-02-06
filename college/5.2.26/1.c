#include <stdio.h>
size_t square(size_t x) 
{
    return x * x;
}
void main() 
{
    size_t n = 5.2;
    size_t result = square(n);
    printf("Result = %zu\n", result);
}