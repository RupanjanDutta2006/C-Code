//Customized Strcat function...
#include <stdio.h>
void custom_strcat(char *dest, const char *src) {
    while (*dest) {
        dest++;
    }
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}
void main() {
    char str1[200], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Remove newline character from str1 if present
    char *newline_pos = str1;
    while (*newline_pos) {
        if (*newline_pos == '\n') {
            *newline_pos = '\0';
            break;
        }
        newline_pos++;
    }
    custom_strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}