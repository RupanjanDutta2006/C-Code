#include <stdio.h>
#include <math.h>
void main()
{
    int x, c = 1, n, s = 0;
    printf("Enter the No = ");
    scanf("%d", &x);
    for (n = x; x > 0; x /= 10)
        c++;
    for (x = n; x > 0; x /= 10)
        s += pow(x % 10, c);
    printf("%d is%sa Krishnamurthy no", n, (s == n) ? (" ") : (" Not "));
}