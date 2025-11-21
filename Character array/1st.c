//alternate letter caps(Vul)
/*
   input --> boys don't cry are not they?
   output-->BoYs DoN't CrY aRe NoT tHeY?
*/
#include<stdio.h>
void main()
{
    char x[20];
    int i,j;
    printf("Enter the Stirng = ");
    gets(x);
    printf("String = %s\n",x);
    for(i=0;x[i]!='\0';i++)
    {
        if(i%2==0)
            if(x[i]>=97 && x[i]<=122)
               x[i]=x[i]-32;
        if(x[i]==' ')
        {
            j=i;
            if(x[j-1]>=97 && x[j+1]<=122)
                j++;
            if(j%2==1)
            {
                if(x[j]>=97 && x[j]<=122)
                    x[j]=x[j]-32;
            }
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