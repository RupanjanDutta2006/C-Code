//WAP to check whether a no is Caprekar no or not(using function type 1 (No Return No Parameter)).
// Caprekar no: A number whose square can be split into two parts that add up to the original number.
// Example: 9 (9^2=81 and 8+1=9), 45 (45^2=2025 and 20+25=45), 297 (297^2=88209 and 88+209=297)
#include<stdio.h>
#include<math.h>
void checkCaprekar()
{
    int n, sq, count=0, rpart, lpart, temp;
    printf("Enter an integer: ");
    scanf("%d", &n);
    sq = n * n;
    for(temp = n; temp != 0; count++, temp /= 10);
    for (int i = 0; i <= count; i++) {
        rpart = sq % (int)pow(10, i);
        lpart = sq / (int)pow(10, i);
        if (lpart + rpart == n) {
            printf("%d is a Caprekar number.\n", n);
            return;
        }
    }
    printf("%d is not a Caprekar number.\n", n);
}
void main()
{
    checkCaprekar();   
}