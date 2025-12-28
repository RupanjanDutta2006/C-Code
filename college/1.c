#include <stdio.h>

int main() 
{
 FILE *fp1, *fp2;
 char ch;
 
 fp1 = fopen("Profile.txt", "w");
 if (fp1 == NULL) 
    {
     printf("Error creating Profile.txt\n");
     return 1;
    }

 fprintf(fp1, "Name: Sudipta Hazra\n");
 fprintf(fp1, "Department: Computer Science and Engineering\n");
 fprintf(fp1, "Institution: MCKV Institute of Engineering\n");
 fprintf(fp1, "Email: sudiptahazra.nitdgp@gmail.com\n");

 fclose(fp1);

 fp1 = fopen("Profile.txt", "r");
 if (fp1 == NULL) 
    {
     printf("Error opening Profile.txt\n");
     return 1;
    }

  fp2 = fopen("myProfile.txt", "w");
  if (fp2 == NULL) 
     {
      printf("Error creating myProfile.txt\n");
      fclose(fp1);
      return 1;
    }

  while ((ch = fgetc(fp1)) != EOF) 
        fputc(ch, fp2);
    

  fclose(fp1);
  fclose(fp2);

  return 0;
}