#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    // question 1
    // int i, n;
    // printf("This program prints a table of squares.\n");
    // printf("Enter number of entries in table: ");
    // scanf("%d", &n);
    // for (i = 2; i <= n; i = i * i)
    // {
    //     printf("%15d%15d\n", i, i * i);
    // }
    // // overflows after i = 65536 (int is 32 bits)
    // short i2, n2;
    // printf("This program prints a table of squares.\n");
    // printf("Enter number of entries in table: ");
    // scanf("%hu", &n2);
    // for (i2 = 2; i2 <= n2; i2++)
    // {
    //     printf("%15hd%15hd\n", i2, i2 * i2);
    // }
    // // overflows after i2 = 32767 (short is 16 bits)
    // long i3, n3;
    // printf("This program prints a table of squares.\n");
    // printf("Enter number of entries in table: ");
    // scanf("%ld", &n3);
    // for (i3 = (long)2; i3 <= n3; i3 = i3 * i3)
    // {
    //     printf("%15ld%15ld\n", i3, i3 * i3);
    // }
    // // overflows at i3=65536 (long is 32 bits)
    // // question 2
    // int i, n;
    // printf("This program prints a table of squares.\n");
    // printf("Enter number of entries in table: ");
    // scanf("%d", &n);
    // /* consume leftover newline after scanf */
    // int ch;
    // while ((ch = getchar()) != '\n' && ch != EOF)
    // {
    // }
    // for (i = 1; i <= n; i++)
    // {
    //     printf("%15d%15d\n", i, i * i);
    //     if (i % 24 == 0)
    //     {
    //         printf("Press Enter to continue...");
    //         getchar();
    //     }
    // }
    // // question 3
    // double n, sum = 0.0;
    // printf("This program sums a series of double values.\n");
    // printf("Enter numbers (0 to end): ");
    // scanf("%lf", &n);
    // while (n != 0.0)
    // {
    //     sum += n;
    //     scanf("%lf", &n);
    // }
    // printf("The sum is %.10g\n", sum);
    // // question 4
    // printf("Enter phone number (alphabetic): ");
    // char ch;
    // while ((ch = getchar()) != '\n' && ch != EOF)
    // {
    //     switch (ch)
    //     {
    //     case 'A':
    //     case 'B':
    //     case 'C':
    //         printf("2");
    //         break;
    //     case 'D':
    //     case 'E':
    //     case 'F':
    //         printf("3");
    //         break;
    //     case 'G':
    //     case 'H':
    //     case 'I':
    //         printf("4");
    //         break;
    //     case 'J':
    //     case 'K':
    //     case 'L':
    //         printf("5");
    //         break;
    //     case 'M':
    //     case 'N':
    //     case 'O':
    //         printf("6");
    //         break;
    //     case 'P':
    //     case 'Q':
    //     case 'R':
    //     case 'S':
    //         printf("7");
    //         break;
    //     case 'T':
    //     case 'U':
    //     case 'V':
    //         printf("8");
    //         break;
    //     case 'W':
    //     case 'X':
    //     case 'Y':
    //     case 'Z':
    //         printf("9");
    //         break;
    //     default:
    //         printf("%c", ch);
    //     }
    // // question 5
    // printf("Enter a scrabble word: \n");
    // char ch;
    // int word_score = 0;
    // while ((ch = toupper(getchar())) != '\n' && ch != EOF)
    // {
    //     switch (ch)
    //     {
    //     case 'A':
    //     case 'E':
    //     case 'I':
    //     case 'O':
    //     case 'U':
    //     case 'L':
    //     case 'N':
    //     case 'R':
    //     case 'S':
    //     case 'T':
    //         word_score += 1;
    //         break;
    //     case 'D':
    //     case 'G':
    //         word_score += 2;
    //         break;
    //     case 'B':
    //     case 'C':
    //     case 'M':
    //     case 'P':
    //         word_score += 3;
    //         break;
    //     case 'F':
    //     case 'H':
    //     case 'V':
    //     case 'W':
    //     case 'Y':
    //         word_score += 4;
    //         break;
    //     case 'K':
    //         word_score += 5;
    //         break;
    //     case 'J':
    //     case 'X':
    //         word_score += 8;
    //         break;
    //     case 'Q':
    //     case 'Z':
    //         word_score += 10;
    //         break;
    //     }
    // }
    // printf("The scrabble score is %d\n", word_score);
    // // question 6
    // printf("%d ", sizeof(short));
    // printf("%d ", sizeof(int));
    // printf("%d ", sizeof(long));
    // printf("%d ", sizeof(float));
    // printf("%d ", sizeof(double));
    // printf("%d ", sizeof(long double));
    // // question 7
    // printf("Enter two fractions separated by a +,-,* or / sign (eg. a/b + c/d): ");
    // int num1, denom1, num2, denom2;
    // char op;
    // scanf("%d/%d %c %d/%d", &num1, &denom1, &op, &num2, &denom2);
    // switch (op)
    // {
    // case '+':
    //     printf("The sum is %d/%d\n", num1 * denom2 + num2 * denom1, denom1 * denom2);
    //     break;
    // case '-':
    //     printf("The difference is %d/%d\n", num1 * denom2 - num2 * denom1, denom1 * denom2);
    //     break;
    // case '*':
    //     printf("The product is %d/%d\n", num1 * num2, denom1 * denom2);
    //     break;
    // case '/':
    //     printf("The quotient is %d/%d\n", num1 * denom2, denom1 * num2);
    //     break;
    // }
    // // question 8
    // printf("Enter a time (in hh:mm AM/PM or A/P, using a 12 hour clock): ");
    // int hh, mm;
    // char am_pm_a_or_p;
    // scanf("%d:%d %c", &hh, &mm, &am_pm_a_or_p);
    // switch (am_pm_a_or_p)
    // {
    // case 'A':
    // case 'a':
    //     if (hh == 12)
    //         // if it's already 12 a.m.
    //         hh = 0;
    //     break;
    // case 'P':
    // case 'p':
    //     // if it's already 12 p.m.
    //     if (hh != 12)
    //         hh += 12;
    //     break;
    // }
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
    // printf("Enter a 12-hour time (hh:mm am/pm or a/p): ");
    // int hh, mm;
    // char am_pm_a_or_p;
    // scanf("%d:%d %c", &hh, &mm, &am_pm_a_or_p);
    // switch (am_pm_a_or_p)
    // {
    // case 'A':
    // case 'a':
    //     if (hh == 12)
    //         // if it's already 12 a.m.
    //         hh = 0;
    //     break;
    // case 'P':
    // case 'p':
    //     // if it's already 12 p.m.
    //     if (hh != 12)
    //         hh += 12;
    //     break;
    // }
    // printf("Equivalent 24-hour time: %02d:%02d\n", hh, mm);
    // // question 10
    // printf("Enter a sentence: ");
    // char letter;
    // int num_vowels = 0;
    // while ((letter = getchar()) != '\n')
    // {
    //     letter = tolower(letter);
    //     if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    //         num_vowels++;
    // }
    // printf("Your sentence contains %d vowels: \n", num_vowels);
    // // question 11
    // printf("Enter a first and last name: \n");
    // // read firstname lastname, and output lastname, firstname without arrays or strings
    // char first_initial, ch;
    // // read first initial and store it
    // first_initial = getchar();
    // // consume rest of first name (without doing anything with it)
    // while ((ch = getchar()) != ' ')
    //     ;
    // // then read the last name and print it
    // while ((ch = getchar()) != '\n')
    //     printf("%c", ch);
    // // then print our formatting and the first initial
    // printf(", %c.\n", first_initial);
    // // question 12
    // float current_value = 0.0f;
    // float next_value = 0.0f;
    // char operator_character = ' ';

    // printf("Enter an expression: ");

    // // ensure that the expression starts with a number
    // if (scanf("%f", &current_value) != 1)
    // {
    //     printf("Invalid expression.\n");
    //     return 1;
    // }

    // // read the rest of the expression
    // while (1)
    // {
    //     // read the operator
    //     if (scanf("%c", &operator_character) != 1)
    //         break; // EOF or error

    //     if (operator_character == '\n')
    //         break; // user pressed Enter

    //     if (operator_character == ' ')
    //         continue; // ignore spaces (optional)

    //     // read the next value
    //     if (scanf("%f", &next_value) != 1)
    //         break;
    //     switch (operator_character)
    //     {
    //     case '+':
    //         current_value += next_value;
    //         break;
    //     case '-':
    //         current_value -= next_value;
    //         break;
    //     case '*':
    //         current_value *= next_value;
    //         break;
    //     case '/':
    //         if (next_value == 0.0f)
    //         {
    //             printf("Error: division by zero.\n");
    //             return 1;
    //         }
    //         current_value /= next_value;
    //         break;
    //     default:
    //         printf("Unknown operator: %c\n", operator_character);
    //         return 1;
    //     }
    // }

    // printf("Value of expression: %g\n", current_value);
    // // question 13
    // printf("Enter a sentence: ");
    // float average_word_length = 0.0f;
    // int total_num_letters = 0;
    // int num_words = 0;
    // // average_word_length = (total num_letters / num_words);
    // char ch;
    // while ((ch = getchar()) != '\n' && ch != EOF)
    // {
    //     if (ch == ' ' || ch == '\t')
    //     {
    //         // increment the num of words
    //         num_words++;
    //     }
    //     else
    //     {
    //         // else we are still in a word, so keep counting letters only
    //         total_num_letters++;
    //     }
    // }
    // // account for last word if there were letters counted
    // if (total_num_letters > 0)
    //     num_words++;
    // // ensure we don't divide by zero
    // if (num_words > 0)
    //     average_word_length = (float)total_num_letters / (float)num_words;
    // printf("Average word length: %.1f\n", average_word_length);
    // // question 14
    // printf("Enter a positive number: ");
    // double x;
    // double x_div_y;
    // double avg_y_and_x_div_y;
    // // compute the square root using Newton's method
    // if (scanf("%lf", &x) != 1 || x < 0.0)
    // {
    //     printf("Please enter a positive number.\n");
    //     return 1;
    // }
    // double y = 1.0f;
    // double y_diff_prev_y = 99999.0f;
    // while (fabs(y_diff_prev_y) >= (0.00001 * y))
    // {
    //     double prev_y = y;
    //     x_div_y = x / y;
    //     avg_y_and_x_div_y = (y + x_div_y) / 2.0;
    //     y = avg_y_and_x_div_y;
    //     y_diff_prev_y = prev_y - y;
    //     printf("Intermediate value: %.5f\n", y);
    // }
    // printf("Square root: %.5f\n", y);
    // // question 15
    printf("Enter a positive integer: ");
    int num = 0;
    if (scanf("%d", &num) != 1 || num < 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    // // compute the factorial of num
    // // part a, using a short
    // short factorial = 1;
    // for (int i = 2; i <= num; i++)
    // {
    //     factorial *= i;
    // }
    // printf("Factorial: %hd\n", factorial);
    // // only works correctly for num <=7
    // // part b, using an int
    // int factorial2 = 1;
    // for (int i = 2; i <= num; i++)
    // {
    //     factorial2 *= i;
    // }
    // printf("Factorial: %d\n", factorial2);
    // // only works correctly for num <= 12
    // // part c, using a long
    // long factorial3 = 1;
    // for (int i = 2; i <= num; i++)
    // {
    //     factorial3 *= i;
    // }
    // printf("Factorial: %ld\n", factorial3);
    // // only works correctly for num <= 12
    // // part d, using a long long
    // long long factorial4 = 1;
    // for (int i = 2; i <= num; i++)
    // {
    //     factorial4 *= i;
    // }
    // printf("Factorial: %lld\n", factorial4);
    // only works correctly for num <= 20
    // part e, using a float
    // float factorial5 = 1.0f;
    // for (int i = 2; i <= num; i++)
    // {
    //     factorial5 *= i;
    // }
    // printf("Factorial: %f\n", factorial5);
    // // only works correctly for num <= 34
    // part f, using a double
    double factorial6 = 1.0;
    for (int i = 2; i <= num; i++)
    {
        factorial6 *= i;
    }
    printf("Factorial: %lf\n", factorial6);
    // only works correctly for num <= 170
    // part g, using a long double
    long double factorial7 = 1.0L;
    for (int i = 2; i <= num; i++)
    {
        factorial7 *= i;
    }
    printf("Factorial: %Lf\n", factorial7);
    // only works correctly for num <= 1754
    return 0;
}