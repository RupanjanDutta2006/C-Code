/*
   WAp to calc. electric bill
   >0  <200    --->1/- unit
   >200 <400   -->3/- unit exceeds 200
   >400 <600   -->5/- unit exceeds 400
   >600 <800 -->7/- unit exceeds 600
   >800    -->10/- unit exceeds 800
 1st type */
#include<stdio.h>
void bill();
void main()
{
  bill();
}
void bill()
{
  int unit,rs,category;
   printf("Enter the Unit = ");
   scanf("%d",&unit);
   if(unit>0 && unit<=200)
     category=1;
   else if(unit>200 && unit<=400)
     category=2;
   else if(unit>400 && unit<=600)
     category=3;
   else if(unit>600 && unit<=800)
     category=4;
   else
     category=5;
    
   switch(category) 
   {
        case 1:
            rs = unit * 1;
            break;
        case 2:
            rs = (unit - 200) * 3 + 200;
            break;
        case 3:
            rs = (unit - 400) * 5 + 800;
            break;
        case 4:
            rs = (unit - 600) * 7 + 1800;
            break;
        case 5:
            rs = (unit - 800) * 10 + 3200;
            break;
        default:
         printf("Invalid unit\n"); 
    }
    printf("Your Bill = %d",rs);
}