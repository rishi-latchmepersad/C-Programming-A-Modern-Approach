#include <stdio.h>

int main()
{
    printf("Please enter a value for x: ");
    float x;
    scanf("%f", &x);
    float polynomial_result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("The result of the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 for x = %.2f is: %.2f\n", x, polynomial_result);
}