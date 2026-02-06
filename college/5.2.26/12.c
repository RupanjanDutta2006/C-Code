#include <stdio.h>

size_t my_strlen(const char *str)
{
    size_t count = 0;

    while (*str != '\0')
    {
        count++;
        str++;
    }

    return count;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Length = %zu", my_strlen(str));

    return 0;
}
