#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *my_strcpy_n(const char *src,size_t n)
{
    char *dest=(char *)malloc(n+1);
    if(dest==NULL)
        return NULL;
    char *ptr=dest;
    while(n-- && *src!='\0')
        *ptr++=*src++;
    *ptr='\0';
    return dest;
}
int main()
{
    const char *source="Hello, World!";
    size_t n=strlen(source);
    printf("Source string: %s\n", source);
    printf("Copied = %s", my_strcpy_n(source, n));
    return 0;
}