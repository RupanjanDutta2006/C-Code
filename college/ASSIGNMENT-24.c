#include<stdio.h>
void main()
{
    FILE *fp;
    char arr[200];
    printf("Enter the String = ");
    gets(arr); 
    fp=fopen("D:\\C\\C-Code\\Function\\6.txt","a+");
    fprintf(fp," %s",arr);
    fclose(fp);
}