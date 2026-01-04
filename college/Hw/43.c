#include <stdio.h>
int main()
{
    int choice, i, n;
    printf("\nMENU");
    printf("\n1. Print even numbers (1 to 20)");
    printf("\n2. Print odd numbers (1 to 20)");
    printf("\n3. Check even or odd");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            for (i = 2; i <= 20; i += 2)
                printf("%d ", i);
            break;
        case 2:
            for (i = 1; i <= 20; i += 2)
                printf("%d ", i);
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%d", &n);
            if (n % 2 == 0)
                printf("Even number");
            else
                printf("Odd number");
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}
