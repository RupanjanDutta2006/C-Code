//greater between 2 no in switch case 1st type
#include<stdio.h>
void gb2();
void main()
{
    gb2();
}
void gb2()
{
    int a,b;
    printf("enter 2 no =");
    scanf("%d%d",&a,&b);
    switch (a>b)
    {
        case 1:
         printf("1st no %d is greater",a);
         break;
        case 0:
         switch (b>a)
         {
            case 1:
             printf("%d is greater", b);
              break;
            case 0:
                    printf("Both numbers are equal\n");
                    break;
         }
         
    }
}