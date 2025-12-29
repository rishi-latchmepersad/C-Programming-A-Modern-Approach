/*
Name: dweight.c
Purpose: Computes the dimensional weight of a package based on its dimensions.
Author: Rishi Latchmepersad
*/

#include <stdio.h>
#define INCHES_PER_POUND (166)

int main(void)
{
    int height, length, width, volume, weight;
    printf("Welcome to the Dimensional Weight Calculator!\n");
    printf("First, please enter the height of the package (in inches): ");
    scanf("%d", &height);
    printf("Next, please enter the length of the package (in inches): ");
    scanf("%d", &length);
    printf("Finally, please enter the width of the package (in inches): ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND; // Adding 165 before division to round up
    printf("Dimensions of the package (in inches): %d x %d x %d\n", height, length, width);
    printf("Volume (in cubic inches): %d\n", volume);
    printf("Dimensional Weight (in pounds): %d\n", weight);
    return 0;
}