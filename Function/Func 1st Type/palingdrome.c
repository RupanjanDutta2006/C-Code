//WAp to check whether a no. is Palindrome or not by uisng 1st type
#include<stdio.h>
void palindrome();
void main()
{
    palindrome();
}
void palindrome()
{
    int n,x,rem,rev=0;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        rev=rev*10+rem;
    }
    if(rev==x)
      printf("%d is Palindrome No. ",x);
    else
      printf("%d is Not Palindrome No. ",x);
}