//c programming 
/*
Name:caleb Gitau
Reg:CT100/G/26176/25
Description:prompt to enter height contact &age

*/
#include<stdio.h>

int main(int argc, char** argv)
   {
          int height;
          printf("enter ur height:"); 
          scanf("%d", &height);
          printf("your height is %d \n", height);
          int contact;
          printf("enter ur contact:");
          scanf("%d" , &contact);
          printf("your contact is %d \n", contact);
          int age;
          printf("enter ur age:");
          scanf("%d", &age);
          printf("your age is %d \n", age);
          return 0;
   }      