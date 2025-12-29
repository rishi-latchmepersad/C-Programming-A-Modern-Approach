#include <stdio.h>

int main(void)
{
    float dollars_and_cents;
    float tax_rate = 0.05f;
    float amount_with_tax;
    printf("Enter the amount of money (in dollars and cents): ");
    scanf("%f", &dollars_and_cents);
    amount_with_tax = dollars_and_cents * (1 + tax_rate);
    printf("The total amount with a 5%% tax added is : $%.2f\n", amount_with_tax);
    return 0;
}