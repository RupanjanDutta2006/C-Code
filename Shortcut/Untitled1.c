#include<stdio.h >
int main()
{
int a,b[ ],c,d,f;
printf("enter the size of the list");
Scanf("%d",&a);
Printf("now enter %d numbers for the list");
Scanf("%d ",&b[a]);
For(c=0;c<a;c++)
{
PRINTF("ENTER %dth value : ",c+1);
Scanf("%d",&a[c]);
}
Printf("enter the number you want to search : ");
Scanf("%d",&d);
For(c=0;c<a;c++)
{
 If(b[c]==d)
{
Printf("position : %d",c+1);
F=0;
}
Else
{
F=1;
CONTINUE;
}
}
If(f==1)
{
PRINTF("SORRY,ITEM NOT FOUND.");
}
return 0;
}
