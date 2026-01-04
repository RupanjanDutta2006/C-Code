//WAP to read the content from the file 
#include<stdio.h>
//#include<windows.h>
void main()
{
    FILE *fp;//FILE datatype *fp pointer to point the file at memory
    char fo[15];//to store the file name
    char ch;//to store one char at a time from the file
    printf("Enter the filename to be opened =");
    scanf("%s", fo); //fo="souvik.txt"
    //open the file for reading 
    fp = fopen(fo, "r");//to open the file at runtime in read/write/append mode
    if (fp == NULL)
    {
     printf("Cannot open file \n");
    }
    else
    {
   ch = fgetc(fp);//to get a single char at a time
   while (ch != EOF)
   {
   printf ("%c", ch);//Thi
   //sleep(1);
   ch = fgetc(fp);//ch='EOF'
   }
  }
   fclose(fp);
}