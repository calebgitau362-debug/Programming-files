/*
Name:caleb gitau
Reg:CT/100/G/26176/25
Description:password prompt
*/

#include<string.h>
#include<stdio.h>

int main() {

   char password[20];
   
   do {
   
      printf("enter password:");
      scanf("%19s",password);
      } while (strcmp(password, "1234") !=0);
      
      printf("granted access\n");
      
     
 return 0;
   }      