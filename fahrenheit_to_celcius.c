/*
NAME:Caleb gitau ngara
REG NO:CT100/G/26176/25
Description:CONVersion of-Fahrenheit-TO-CELSIUS
*/
#include <stdio.h>

int main() {
    float temperature, celsius;
    printf("Enter your temperature in Fahrenheit: ");
    scanf("%f", &temperature);

    
    celsius = (temperature - 32) * 5 / 9;

    printf("Your Celsius temperature is %.2f\n", celsius);
    return 0;
}
    