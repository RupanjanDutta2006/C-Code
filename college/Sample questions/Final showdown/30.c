//30. Write a program to find the sum of all integers ranging from 100 to 300 which are divisible by 5. 
#include <stdio.h>
void main()
{
    int sum = 0;
    for (int i = 100; i <= 300; i++)
    {
        if (i % 5 == 0)
        {
            sum = sum + i;
        }
    }
    printf("Sum of all integers from 100 to 300 divisible by 5 is: %d\n", sum);
}