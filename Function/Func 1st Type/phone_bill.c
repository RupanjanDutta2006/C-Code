/*
 ph bill calc.  exceeds   hw
        0  to 100    1.5/- unit
      100 to 200   3.5/- unit
       200 to 400 5.5/- unit
      400 to 600 7.5/- unit
     600  to 800   10.5 unit
     >800   12.5/- unit
 1st type
*/
#include<stdio.h>
void bill();
void main()
{
  bill();
}
void bill()
{
  int rs; float unit;
    printf("Enter the Unit = ");
    scanf("%f",&unit);
    if(unit>0 && unit<=100)
     rs=(int) (unit*1.5);
    else if(unit>100 && unit<=200)
     rs=(int) ((unit-100)*3.5+150);
   else if(unit>200 && unit<=400)
     rs=(int) ((unit-200)*5.5+500);
   else if(unit>400 && unit<=600)
     rs=(int) ((unit-400)*7.5+1600); 
   else if(unit>600 && unit<=800)
     rs=(int) ((unit-600)*10.5+3100); 
   else
     rs=(int) ((unit-800)*12.5+5200); 
    printf("Your Bill = %d",rs);
}