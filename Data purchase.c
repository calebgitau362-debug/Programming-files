/*
Name:caleb gitau
Reg:CT/100/G/26176/25
Description:A mobile data bundle purchase
*/

#include<stdio.h>

int main()
{
    //menu dosplay
    printf("data bundles:\n ");
    printf("1. 100mb @ kes 50\n");
    printf("2. 500mb @ kes 200\n");
    printf("3. 1GB   @ kes 350\n");
    printf("4. 2GB   @ kes 600\n\n");
    
    int choice;
    printf("select bundle from no (1-4): ");
    scanf("%d", &choice);
    
    // process selection
    switch(choice) {
    case 1:
     printf("\nyou selected: 100mb\ntotal: kes50\n");break;
    case 2:
     printf("\nyou selected: 500mb\ntotal: kes200\n"); break;
    case 3:
     printf("\nyou selected: 1gb\ntotal: kes350\n"); break;
    case 4:
     printf("\nyou selected:2gb\ntotal: kes600\n"); break;
     
     default: printf("invalid choice!\n");
     }
         return 0;
   }      