// WAP to check whether a no is Armstrong no or not(using function type 1 (No Return No Parameter)).
//  Armstrong no: A number that is equal to the sum of its digits raised to the power of the number of digits.
//  Example: 153 (1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153), 9474 (9^4 + 4^4 + 7^4 + 4^4 = 6561 + 256 + 2401 + 256 = 9474)
#include <stdio.h>
#include <math.h>
int n, temp, rem, result = 0, dig = 0;
void checkArmstrong()
{
    printf("Enter an integer: ");
    scanf("%d", &n);
    for( temp = n; temp != 0; temp /= 10)
        dig++;
    for( temp = n; temp != 0; temp /= 10)
        result += pow(temp % 10, dig);
    (result == n)?printf("%d is an Armstrong number.\n", n):printf("%d is not an Armstrong number.\n", n);
}
void main()
{
    checkArmstrong();
}