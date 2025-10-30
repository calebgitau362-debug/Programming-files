/*
NAME:caleb gitau
REG NO:CT100/G/26176/25
Description:1dimensional array
*/
#include <stdio.h>

int main(){

    float record[7];  
    float sum = 0.0;
    int i;

    
    char *days[] = {"Mon", "Tue", "Wed", "Thur", "Fri", "Sat", "Sun"};

    
    for (i = 0; i < 7; i++)
    {
        printf("Enter %s record: ", days[i]);
        scanf("%f", &record[i]);
        sum += record[i]; 
    }

    
    printf("\nTotal record for the week = %.2f\n", sum);

    return 0;
}

    