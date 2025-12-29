#include <stdio.h>

int main()
{
    printf("Enter amount of loan: ");
    float loan_amount;
    scanf("%f", &loan_amount);
    printf("Enter interest rate (as a percent): ");
    float interest_rate;
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    float monthly_payment;
    scanf("%f", &monthly_payment);
    // Convert annual interest rate to monthly by dividing by 12 (months in a year) and by 100 (to convert percent to decimal)
    float monthly_interest_rate = interest_rate / 1200.0f;
    // Calculate the remaining balance after 12 months
    float remaining_balance = loan_amount;
    for (int i = 0; i < 3; i++)
    // for the first 3 months of the year
    {
        // the new balance is the old balance plus interest minus the monthly payment
        remaining_balance = remaining_balance * (1 + monthly_interest_rate) - monthly_payment;
        // print the remaining balance after each payment
        switch (i)
        {
        case 0:
            printf("Balance after first payment: $%.2f\n", remaining_balance);
            break;
        case 1:
            printf("Balance after second payment: $%.2f\n", remaining_balance);
            break;
        case 2:
            printf("Balance after third payment: $%.2f\n", remaining_balance);
            break;
        }
    }
}