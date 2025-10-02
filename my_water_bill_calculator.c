/*
Name:caleb gitau
Reg:CT/100/G/26176/25
Description:A water bill calculator
*/

#include<stdio.h>

int main()
{

   float unit,cost_per_unit,total_cost;
   
   printf("My rage of consumption:");
   scanf("%f", &unit);
   
   if (unit <=30) {
       cost_per_unit=20;
   }else if  (unit>=31 && unit<=60) {
       cost_per_unit=25;
   }else {
       cost_per_unit=30;
   }    
   
   total_cost = unit* cost_per_unit;
   
   printf("total_cost for %.2f unit is: %.2f", unit, total_cost );
       
         return 0;
   }      