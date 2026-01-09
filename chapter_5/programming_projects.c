#include <stdio.h>

int main()
{
    // // question 1
    // printf("Enter a number: ");
    // int n;
    // scanf("%d", &n);
    // if (0 <= n && n <= 9)
    //     printf("The number %d has 1 digit.\n", n);
    // else if (10 <= n && n <= 99)
    //     printf("The number %d has 2 digits.\n", n);
    // else if (100 <= n && n <= 999)
    //     printf("The number %d has 3 digits.\n", n);
    // else if (1000 <= n && n <= 9999)
    //     printf("The number %d has 4 digits.\n", n);
    // else
    //     printf("The number %d has more than 4 digits or is negative.\n", n);
    // // question 2
    // printf("Enter a 24-hour time (hh:mm): ");
    // int hh, mm;
    // scanf("%d:%d", &hh, &mm);
    // printf("Equivalent 12-hour time: ");
    // if (hh == 0)
    //     printf("12:%02d AM", mm);
    // else if (hh < 12)
    //     printf("%2d:%02d AM", hh, mm);
    // else if (hh == 12)
    //     printf("12:%02d PM", mm);
    // else
    //     printf("%2d:%02d PM", hh - 12, mm);
    // // question 3
    // float commission, price_per_share, value, rival_commission;
    // int number_of_shares;
    // printf("Enter the number of shares: ");
    // scanf("%d", &number_of_shares);
    // printf("Enter the price per share: ");
    // scanf("%f", &price_per_share);
    // value = number_of_shares * price_per_share;
    // if (value < 2500.00f)
    //     commission = 30.00f + 0.017f * value;
    // else if (value < 6250.00f)
    //     commission = 56.00f + 0.0066f * value;
    // else if (value < 20000.00f)
    //     commission = 76.00f + 0.0034f * value;
    // else if (value < 50000.00f)
    //     commission = 100.00f + 0.0022f * value;
    // else if (value < 500000.00f)
    //     commission = 155.00f + 0.0011f * value;
    // else
    //     commission = 255.00f + 0.0009f * value;
    // if (commission < 39.00f)
    //     commission = 39.00f;
    // // also compute commission for rival
    // if (number_of_shares < 2000)
    //     rival_commission = 33.00f + 0.03f * number_of_shares;
    // else
    //     rival_commission = 33.00f + 0.02f * number_of_shares;
    // printf("Our commission: $%.2f\n", commission);
    // printf("Rival's commission: $%.2f\n", rival_commission);
    // // question 4
    // printf("Please enter the current wind speed (in knots): ");
    // int wind_speed;
    // scanf("%d", &wind_speed);
    // if (wind_speed < 1)
    //     printf("Calm\n");
    // else if (wind_speed <= 3)
    //     printf("Light air\n");
    // else if (wind_speed <= 27)
    //     printf("Breeze\n");
    // else if (wind_speed <= 47)
    //     printf("Gale\n");
    // else if (wind_speed <= 63)
    //     printf("Storm\n");
    // else
    //     printf("Hurricane\n");
    // // question 5
    // printf("Please enter your taxable income: ");
    // float income;
    // scanf("%f", &income);
    // float tax;
    // if (income <= 750.00f)
    //     tax = income * 0.01f;
    // else if (income <= 2250.00f)
    //     tax = 7.50f + 0.02f * (income - 750.00f);
    // else if (income <= 3750.00f)
    //     tax = 37.50f + 0.03f * (income - 2250.00f);
    // else if (income <= 5250.00f)
    //     tax = 82.50f + 0.04f * (income - 3750.00f);
    // else if (income <= 7000.00f)
    //     tax = 142.50f + 0.05f * (income - 5250.00f);
    // else
    //     tax = 230.00f + 0.06f * (income - 7000.00f);
    // printf("Your tax is: $%.2f\n", tax);
    // // question 6
    // int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
    // printf("Enter the first (single) digit: ");
    // scanf("%1d", &d);
    // printf("Enter the first group of five digits: ");
    // scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    // printf("Enter the second group of five digits: ");
    // scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    // first_sum = d + i2 + i4 + j1 + j3 + j5;
    // second_sum = i1 + i3 + i5 + j2 + j4;
    // total = 3 * first_sum + second_sum;
    // int computed_check_digit = 9 - ((total - 1) % 10);
    // printf("Enter the check digit: ");
    // int entered_check_digit;
    // scanf("%1d", &entered_check_digit);
    // if (computed_check_digit == entered_check_digit)
    //     printf("The UPC is valid\n");
    // else
    //     printf("The UPC is not valid\n");
    // // question 7
    // printf("Enter four integers: ");
    // int a, b, c, d;
    // int min1, max1, min2, max2;
    // int final_min, final_max;
    // scanf("%d %d %d %d", &a, &b, &c, &d);
    // // first compare a and b
    // min1 = a;
    // max1 = b;
    // if (a > b)
    // {
    //     min1 = b;
    //     max1 = a;
    // }
    // // now compare c and d
    // min2 = c;
    // max2 = d;
    // if (c > d)
    // {
    //     min2 = d;
    //     max2 = c;
    // }
    // // now compare mins and maxs across both pairs
    // final_min = min1;
    // if (min2 < final_min)
    //     final_min = min2;
    // final_max = max1;
    // if (max2 > final_max)
    //     final_max = max2;
    // printf("Largest: %d\n", final_max);
    // printf("Smallest: %d\n", final_min);
    // // question 8
    // printf("Enter a time (in hh:mm, using a 24 hour clock): ");
    // int hh, mm;
    // scanf("%d:%d", &hh, &mm);
    // int minutes_since_midnight = hh * 60 + mm;
    // if (minutes_since_midnight <= 8 * 60)
    //     printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    // else if (minutes_since_midnight <= 9 * 60 + 43)
    //     printf("Closest departure is 9:43 a.m., arriving at 11:52 a.m.\n");
    // else if (minutes_since_midnight <= 11 * 60 + 19)
    //     printf("Closest departure is 11:19 a.m., arriving at 1:31 p.m.\n");
    // else if (minutes_since_midnight <= 12 * 60 + 47)
    //     printf("Closest departure is 12:47 p.m., arriving at 3:00 p.m.\n");
    // else if (minutes_since_midnight <= 14 * 60)
    //     printf("Closest departure is 2:00 p.m., arriving at 4:08 p.m.\n");
    // else if (minutes_since_midnight <= 15 * 60 + 45)
    //     printf("Closest departure is 3:45 p.m., arriving at 5:55 p.m.\n");
    // else if (minutes_since_midnight <= 19 * 60)
    //     printf("Closest departure is 7:00 p.m., arriving at 9:20 p.m.\n");
    // else
    //     printf("Closest departure is 9:45 p.m., arriving at 11:58 p.m.\n");
    // // question 9
    // printf("Enter first date (mm/dd/yy): ");
    // int month1, day1, year1;
    // scanf("%d/%d/%d", &month1, &day1, &year1);
    // printf("Enter second date (mm/dd/yy): ");
    // int month2, day2, year2;
    // scanf("%d/%d/%d", &month2, &day2, &year2);
    // if (year1 < year2 ||
    //     (year1 == year2 && month1 < month2) ||
    //     (year1 == year2 && month1 == month2 && day1 < day2))
    //     printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",
    //            month1, day1, year1, month2, day2, year2);
    // else if (year1 == year2 && month1 == month2 && day1 == day2)
    //     printf("The two dates are the same: %02d/%02d/%02d\n",
    //            month1, day1, year1);
    // else
    //     printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",
    //            month2, day2, year2, month1, day1, year1);
    // // question 10
    // printf("Enter numerical grade (0-100): ");
    // int grade;
    // scanf("%d", &grade);
    // if (grade < 0 || grade > 100)
    // {
    //     printf("Invalid grade\n");
    // }
    // else
    // {
    //     int first_digit = grade / 10;
    //     switch (first_digit)
    //     {
    //     case 10:
    //     case 9:
    //         printf("Letter grade: A\n");
    //         break;
    //     case 8:
    //         printf("Letter grade: B\n");
    //         break;
    //     case 7:
    //         printf("Letter grade: C\n");
    //         break;
    //     case 6:
    //         printf("Letter grade: D\n");
    //         break;
    //     default:
    //         printf("Letter grade: F\n");
    //         break;
    //     }
    // }
    // question 11
    int two_digit_number;
    int tens_digit;
    int ones_digit;

    printf("Enter a two-digit number: ");
    if (scanf("%d", &two_digit_number) != 1)
        return 1;

    if (two_digit_number < 10 || two_digit_number > 99)
    {
        printf("Please enter a two-digit number (10 to 99).\n");
        return 1;
    }

    tens_digit = two_digit_number / 10;
    ones_digit = two_digit_number % 10;

    printf("You entered the number ");

    if (tens_digit == 1)
    {
        switch (ones_digit)
        {
        case 0:
            printf("ten");
            break;
        case 1:
            printf("eleven");
            break;
        case 2:
            printf("twelve");
            break;
        case 3:
            printf("thirteen");
            break;
        case 4:
            printf("fourteen");
            break;
        case 5:
            printf("fifteen");
            break;
        case 6:
            printf("sixteen");
            break;
        case 7:
            printf("seventeen");
            break;
        case 8:
            printf("eighteen");
            break;
        case 9:
            printf("nineteen");
            break;
        }

        printf(".\n");
        return 0;
    }

    switch (tens_digit)
    {
    case 2:
        printf("twenty");
        break;
    case 3:
        printf("thirty");
        break;
    case 4:
        printf("forty");
        break;
    case 5:
        printf("fifty");
        break;
    case 6:
        printf("sixty");
        break;
    case 7:
        printf("seventy");
        break;
    case 8:
        printf("eighty");
        break;
    case 9:
        printf("ninety");
        break;
    }

    if (ones_digit != 0)
    {
        printf("-");

        switch (ones_digit)
        {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
        }
    }

    printf(".\n");
    return 0;
}