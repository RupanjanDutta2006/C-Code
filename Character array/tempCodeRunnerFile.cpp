#include<stdio.h>
//WAP to concatenate 2 string
#include<stdio.h>
void main()
{
    char x[20],v[20],c[20];
    int i,j,k,sp=0,vo=0,co=0;
    printf("Enter the String= ");
    gets(x);
    printf("Enter the String = %s\n",x);
    for(i=0;x[i]!='\0';i++)
        if(x[i]>=65 && x[i]<=90)
            x[i]=x[i]+32;
    for(j=0,k=0,i=0;x[i]!='\0';i++)
        (x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u') ? (v[k++]=x[i]) && vo++:(x[i]==' ') ? sp++ :(c[j++]=x[i]) && co++;
    v[k]='\0';
    c[j]='\0';
    printf("Vowel = %s\nConsonant = %s",v,c);
    printf("No of Vowel = %d\nNo of Space = %d\nNo of Consonant = %d",vo,sp,co);
}