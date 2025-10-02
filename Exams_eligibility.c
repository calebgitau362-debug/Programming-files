/*
Name:caleb gitau
Reg:CT/100/G/26176/25
Description:My final exams questionare 
*/

#include<stdio.h>

int main() 
     {
     int average_marks;
     int attendance;
     
     // user input
     printf("my overall attendance In percentage: ");
     scanf("%d", & attendance);
     printf("my average_marks");
     scanf("%d", & average_marks);
     
     // conditions
     if (attendance >=75 && average_marks >=40) {
     printf("You are eligible for the exams");
     }else  {
     printf("You are not eligible for the final exams");
     }
         return 0;
   }      