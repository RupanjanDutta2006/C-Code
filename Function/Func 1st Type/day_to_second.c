//day to second 1st type
#include <stdio.h>
void d2s();
void main()
{
    d2s();
}
void d2s()
{
    int days;
    long seconds;  // long to handle large values
    printf("Enter number of days: ");
    scanf("%d", &days);
    seconds = days * 24 * 60 * 60;
    printf("%d day(s) = %ld seconds\n", days, seconds);
}
