/*
Name: celcius.c
Purpose: Converts a temperature from Fahrenheit to Celsius.
Author: Rishi Latchmepersad
*/

#include <stdio.h>

#define FREEZING_POINT_F (32.0)
#define SCALING_FACTOR (5.0f / 9.0f)

int main(void)
{
    float fahrenheit, celsius;
    printf("Welcome to the Fahrenheit to Celsius Converter!\n");
    printf("Please enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - FREEZING_POINT_F) * SCALING_FACTOR;
    printf("The temperature in Celsius is: %.2f C\n", celsius);
    return 0;
}