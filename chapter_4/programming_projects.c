#include <stdio.h>

int main()
{
    // // question 1
    // printf("Enter a two-digit number: ");
    // int number;
    // scanf("%2d", &number);
    // int tens = number / 10;
    // int units = number % 10;
    // int reversed_number = units * 10 + tens;
    // printf("Reversed number: %02d\n", reversed_number);
    // // question 2
    // printf("Enter a three-digit number: ");
    // int number;
    // scanf("%3d", &number);
    // int hundreds = number / 100;
    // int tens = (number / 10) % 10;
    // int units = number % 10;
    // int reversed_number = units * 100 + tens * 10 + hundreds;
    // printf("Reversed number: %03d\n", reversed_number);
    // // question 3
    // printf("Enter a three-digit number: ");
    // int digit1, digit2, digit3;
    // scanf("%1d%1d%1d", &digit1, &digit2, &digit3);
    // // reverse number without arithmetic operators
    // printf("Reversed number: %1d%1d%1d\n", digit3, digit2, digit1);
    // // question 4
    // printf("Enter a number between 0 and 32767: ");
    // int base_10_number;
    // scanf("%d", &base_10_number);
    // int octal_number = 0;
    // int place_value = 1;
    // while (base_10_number > 0)
    // {
    //     int remainder = base_10_number % 8;
    //     octal_number += remainder * place_value;
    //     base_10_number /= 8;
    //     place_value *= 10;
    // }
    // printf("Equivalent octal number: %d\n", octal_number);
    // return 0;
    // // question 5
    // printf("Enter the first 11 digits of a UPC: ");
    // int digit1, digit2, digit3, digit4, digit5, digit6,
    //     digit7, digit8, digit9, digit10, digit11;
    // scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
    //       &digit1, &digit2, &digit3, &digit4, &digit5, &digit6,
    //       &digit7, &digit8, &digit9, &digit10, &digit11);
    // int sum_odd_positions = digit1 + digit3 + digit5 + digit7 + digit9 + digit11;
    // int sum_even_positions = digit2 + digit4 + digit6 + digit8 + digit10;
    // int total_sum = sum_odd_positions * 3 + sum_even_positions;
    // int check_digit = total_sum % 10;
    // printf("Check digit: %d\n", check_digit);
    // return 0;
    // // question 6
    // // now we calculate the EAN instead of the UPC
    // printf("Enter the first 12 digits of an EAN: ");
    // int digit1, digit2, digit3, digit4, digit5, digit6,
    //     digit7, digit8, digit9, digit10, digit11, digit12;
    // scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
    //       &digit1, &digit2, &digit3, &digit4, &digit5, &digit6,
    //       &digit7, &digit8, &digit9, &digit10, &digit11, &digit12);
    // int sum_odd_positions = digit1 + digit3 + digit5 + digit7 + digit9 + digit11;
    // int sum_even_positions = digit2 + digit4 + digit6 + digit8 + digit10 + digit12;
    // int total_sum = sum_even_positions * 3 + sum_odd_positions;
    // total_sum -= 1; // adjust for check digit calculation
    // int remainder = total_sum % 10;
    // int check_digit = 9 - remainder;
    // printf("Check digit: %d\n", check_digit);
    // return 0;
}