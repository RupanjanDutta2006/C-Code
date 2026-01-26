// WAP array of pointer.
#include <stdio.h>
void main()
{
    int n, i, len, f = 0;
    printf("Enter the range=");
    scanf("%d", &n);
    int *a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the element=");
        scanf("%d", a[i]);
    }
    for (; a <= &a[n - 1]; a++)
        printf("The element = %d address = %p", *a, a);
}