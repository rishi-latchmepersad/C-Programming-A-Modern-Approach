#include <stdio.h>

int main()
{
    // // question 1
    // float max_number = 1, entered_number = 1;
    // while (entered_number > 0)
    // {
    //     printf("Enter a number: ");
    //     scanf("%f", &entered_number);
    //     if (entered_number > max_number)
    //     {
    //         max_number = entered_number;
    //     }
    // }
    // printf("The largest number entered was: %.2f\n", max_number);
    // // question 2
    // printf("Enter two integers: ");
    // int num1, num2;
    // scanf("%d %d", &num1, &num2);
    // int greatest_common_divisor = 1;
    // for (int i = 1; i <= num1 && i <= num2; i++)
    // {
    //     if (num1 % i == 0 && num2 % i == 0)
    //     {
    //         greatest_common_divisor = i;
    //     }
    // }
    // printf("The greatest common divisor of %d and %d is %d\n", num1, num2, greatest_common_divisor);
    // // question 3
    // printf("Enter a fraction: ");
    // int numerator, denominator;
    // scanf("%d/%d", &numerator, &denominator);
    // int lowest_terms_numerator, lowest_terms_denominator;
    // for (int i = 1; i <= numerator && i <= denominator; i++)
    // {
    //     if (numerator % i == 0 && denominator % i == 0)
    //     {
    //         lowest_terms_numerator = numerator / i;
    //         lowest_terms_denominator = denominator / i;
    //     }
    // }
    // printf("The fraction in lowest terms is %d/%d\n", lowest_terms_numerator, lowest_terms_denominator);
    // // question 4
    // float commission = 1, value = 1.0f;
    // while (value > 0.0f)
    // {
    //     printf("Enter value of trade: ");
    //     scanf("%f", &value);
    //     if (value <= 0.0f)
    //         break;
    //     // else
    //     if (value < 2500.00f)
    //         commission = 30.00f + 0.017f * value;
    //     else if (value < 6250.00f)
    //         commission = 56.00f + 0.0066f * value;
    //     else if (value < 20000.00f)
    //         commission = 76.00f + 0.0034f * value;
    //     else if (value < 50000.00f)
    //         commission = 100.00f + 0.0022f * value;
    //     else if (value < 500000.00f)
    //         commission = 155.00f + 0.0011f * value;
    //     else
    //         commission = 255.00f + 0.0009f * value;
    //     if (commission < 39.00f)
    //         commission = 39.00f;
    //     printf("Commission: $%.2f\n", commission);
    // }
    // // question 5
    // int entered_num = 0, reversed_num = 0;
    // printf("Enter a number: ");
    // scanf("%d", &entered_num);
    // do
    // {
    //     reversed_num = reversed_num * 10 + entered_num % 10;
    //     entered_num /= 10;
    // } while (entered_num > 0);
    // printf("Reversed number: %d\n", reversed_num);
    // // question 6
    // int entered_num = 0, square_of_num = 0;
    // printf("Enter a number: ");
    // scanf("%d", &entered_num);
    // for (int i = 1; square_of_num <= entered_num; i++)
    // {
    //     square_of_num = i * i;
    //     if (square_of_num % 2 == 0)
    //         printf("%d \n", i * i);
    // }
    // // question 7
    // int n, odd, square = 1;
    // printf("This program prints a table of squares.\n");
    // printf("Enter number of entries in table: ");
    // scanf("%d", &n);
    // odd = 3;
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%10d%10d\n", i, square);
    //     square += odd;
    //     odd += 2;
    // }
    // // question 8
    // int days_in_month, starting_day, day, weekday_column;

    // printf("Enter number of days in month: ");
    // scanf("%d", &days_in_month);

    // printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    // scanf("%d", &starting_day);

    // /* Print leading blanks before day 1 */
    // for (weekday_column = 1; weekday_column < starting_day; weekday_column++)
    // {
    //     printf("   "); /* 3 spaces matches "%2d " */
    // }

    // /* Now print the days */
    // for (day = 1; day <= days_in_month; day++)
    // {
    //     printf("%2d ", day);

    //     if (weekday_column == 7)
    //     {
    //         printf("\n");
    //         weekday_column = 1;
    //     }
    //     else
    //     {
    //         weekday_column++;
    //     }
    // }

    // /* Finish with a newline if we didn't end exactly on Saturday */
    // if (weekday_column != 1)
    // {
    //     printf("\n");
    // }
    // // question 9
    // printf("Enter amount of loan: ");
    // float loan_amount;
    // scanf("%f", &loan_amount);
    // printf("Enter interest rate (as a percent): ");
    // float interest_rate;
    // scanf("%f", &interest_rate);
    // printf("Enter monthly payment: ");
    // float monthly_payment;
    // scanf("%f", &monthly_payment);
    // printf("Enter number of payments: ");
    // int number_of_payments;
    // scanf("%d", &number_of_payments);
    // // Convert annual interest rate to monthly by dividing by 12 (months in a year) and by 100 (to convert percent to decimal)
    // float monthly_interest_rate = interest_rate / 1200.0f;
    // // calculate the remaining balance after the specified number of payments
    // float remaining_balance;
    // // calculate remaining balance after each payment, without any library functions
    // remaining_balance = loan_amount;
    // int payment_index;
    // for (payment_index = 1; payment_index <= number_of_payments; payment_index++)
    // {
    //     remaining_balance = remaining_balance * (1.0f + monthly_interest_rate) - monthly_payment;
    //     if (remaining_balance < 0.0f)
    //         remaining_balance = 0.0f;
    //     printf("Balance after payment %d: $%.2f\n", payment_index, remaining_balance);
    //     if (remaining_balance == 0.0f)
    //         break;
    // }
    // // question 10
    // int earliest_day = 31, earliest_month = 12, earliest_year = 9999;
    // int user_day = 1, user_month = 1, user_year = 1111;
    // while (user_day != 0 && user_month != 0 && user_year != 0)
    // {
    //     if (user_year < earliest_year || (user_year == earliest_year && user_month < earliest_month) || (user_year == earliest_year && user_month == earliest_month && user_day < earliest_day))
    //     {
    //         earliest_year = user_year;
    //         earliest_month = user_month;
    //         earliest_day = user_day;
    //     }
    //     printf("Enter a date (mm/dd/yyyy): ");
    //     scanf("%d/%d/%d", &user_month, &user_day, &user_year);
    // }
    // printf("%d/%d/%d is the earliest date\n", earliest_month, earliest_day, earliest_year);
    // // question 11
    // int n;
    // float eulers_sum_approx;
    // printf("Please enter a value for n: ");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     float denominator = 1.0;
    //     for (int j = 1; j <= i; j++)
    //         denominator *= j;
    //     eulers_sum_approx += 1.0 / denominator;
    // }
    // printf("Euler's sum approximation for n = %d is %f\n", n, eulers_sum_approx);
    // question 12
    // int n;
    // float eulers_sum_approx = 0.0f;
    // printf("Please enter a value for n: ");
    // scanf("%d", &n);
    // float cutoff_num;
    // printf("Please enter a cutoff number: ");
    // scanf("%f", &cutoff_num);
    // for (int i = 1; i <= n; i++)
    // {
    //     float denominator = 1.0;
    //     for (int j = 1; j <= i; j++)
    //         denominator *= j;
    //     float new_term = 1.0f / denominator;
    //     if (new_term < cutoff_num)
    //         break;
    //     eulers_sum_approx += new_term;
    // }
    // printf("Euler's sum approximation for n = %d is %f\n", n, eulers_sum_approx);
    return 0;
}