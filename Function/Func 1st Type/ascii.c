//WAP to take character input & print the character & it's ASCII value 1st type
// A=65   Z=90     a=97  z=122    0=48   9=57
#include<stdio.h>
void ascii();
void main()
{
    ascii();
}
void ascii()
{
    char x;
    printf("Enter the Character = ");
    scanf("%c",&x);
    printf("The Charcater = %c\nASCII value = %d",x,x);
}