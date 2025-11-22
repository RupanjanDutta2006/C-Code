#include<stdio.h>
void main(){
    int l=0,i;
    char x[20],prev='\0';
    printf("Enter the String = ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]==' ')
        {
            printf(" ");
            l=(prev>='A' && prev<='Z')?1:0;
        }
        else
        {
            if(l==0)
            {
                if (x[i]>='a' && x[i]<='z')
                    printf("%c",x[i]-32);
                else
                    printf("%c",x[i]);
                prev = (x[i]>='a' && x[i]<='z')?(x[i]-32):x[i];
            }
            else
            {
                if(x[i]>='A' && x[i]<='Z')
                    printf("%c",x[i]+32);
                else
                    printf("%c",x[i]);
                prev = (x[i]>='A' && x[i]<='Z')?(x[i]+32):x[i];
            }
            l=!l;
        }
    }
}