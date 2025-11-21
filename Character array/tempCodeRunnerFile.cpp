//alternate letter caps(Vul)
/*
   input --> boys don't cry are not they?
   output-->BoYs DoN't CrY aRe NoT tHeY?
*/
#include<stdio.h>
void main()
{
    char x[20];
    int i,j,len;
    printf("Enter the Stirng = ");
    gets(x);
    printf("String = %s\n",x);
    for(i=0;x[i]!='\0';i++)
    {
        len++;
        if(x[i]==' ')
            len--;
        if(len%2==0)
        {
            
            if(x[len]>=97 && x[len]<=122)
               x[len]=x[len]-32;
        }
        }
  
    printf("%s",x);    
}
/*
        if(x[i]==' ')
          {
             if(x[i-1]>=65 && x[i-1]<=90)
               continue;
          }
        else if(i%2==0)
        {
            if(x[i]>=97 && x[i]<=122)
               x[i]=x[i]-32;
        }*/