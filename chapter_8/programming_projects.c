#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // // question 1
    // bool digit_seen[10] = {false};
    // bool digit_repeated[10] = {false};
    // int digit;
    // long n;
    // printf("Enter a number: ");
    // scanf("%ld", &n);
    // while (n > 0)
    // {
    //     // check the current digit by getting the remainder when dividing the number by 10
    //     digit = n % 10;
    //     if (digit_seen[digit])
    //     {
    //         // if the digit has been seen before, mark it as repeated
    //         digit_repeated[digit] = true;
    //     }
    //     else
    //     {
    //         // mark the digit as seen
    //         digit_seen[digit] = true;
    //     }
    //     // divide n by 10 to move to the next digit
    //     n /= 10;
    // }
    // printf("Repeated digits: ");
    // for (int i = 0; i < 10; i++)
    // {
    //     if (digit_repeated[i])
    //     {
    //         printf("%d ", i);
    //     }
    // }
    // // question 2
    // int num_times_digit_seen[10] = {0};
    // int digit;
    // long n;
    // printf("Enter a number: ");
    // scanf("%ld", &n);
    // while (n > 0)
    // {
    //     // check the current digit by getting the remainder when dividing the number by 10
    //     digit = n % 10;
    //     num_times_digit_seen[digit]++;
    //     // divide n by 10 to move to the next digit
    //     n /= 10;
    // }
    // printf("Digit: ");
    // for (int i = 0; i < 10; i++)
    // {
    //     if (i == 0)
    //     {
    //         printf("%8d ", i);
    //     }
    //     else
    //         printf("%2d ", i);
    // }
    // printf("\n");
    // printf("Occurrences: ");
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%2d ", num_times_digit_seen[i]);
    // }
    // // question 3
    // int num_times_digit_seen[10] = {0};
    // int digit;
    // long n;
    // long original_n = 1; // initialize to a non-zero value to enter the loop
    // while (true)
    // {
    //     printf("Please enter a number to check for repeated digits (0 to quit): ");
    //     scanf("%ld", &n);
    //     original_n = n;
    //     if (original_n == 0)
    //     {
    //         printf("Goodbye!\n");
    //         break;
    //     }
    //     else
    //     {
    //         while (n > 0)
    //         {
    //             // check the current digit by getting the remainder when dividing the number by 10
    //             digit = n % 10;
    //             num_times_digit_seen[digit]++;
    //             // divide n by 10 to move to the next digit
    //             n /= 10;
    //         }
    //         printf("Digit: ");
    //         for (int i = 0; i < 10; i++)
    //         {
    //             if (i == 0)
    //             {
    //                 printf("%8d ", i);
    //             }
    //             else
    //                 printf("%2d ", i);
    //         }
    //         printf("\n");
    //         printf("Occurrences: ");
    //         for (int i = 0; i < 10; i++)
    //         {
    //             printf("%2d ", num_times_digit_seen[i]);
    //         }
    //         printf("\n");
    //         // reset the counts for the next iteration
    //         for (int i = 0; i < 10; i++)
    //         {
    //             num_times_digit_seen[i] = 0;
    //         }
    //     }
    // }
    // // question 4
    // #define N (10)
    // #define ARRAY_SIZE ((int)(sizeof(a) / sizeof(a[0])))
    //     int a[N], i;
    //     printf("Enter %d integers: ", ARRAY_SIZE);
    //     for (i = 0; i < ARRAY_SIZE; i++)
    //     {
    //         scanf("%d", &a[i]);
    //     }
    //     printf("In reverse order: ");
    //     for (i = ARRAY_SIZE - 1; i >= 0; i--)
    //     {
    //         printf("%d ", a[i]);
    //     }
    //     printf("\n");
    // // question 5
    // #define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
    // #define INITIAL_BALANCE (100.00)
    //     int i, low_rate, num_years, year;
    //     double value[5];

    //     printf("Enter interest rates (in %%): ");
    //     // the user enters the lowest interest rate they will see (later years will be higher)
    //     scanf("%d", &low_rate);
    //     printf("Enter number of years: ");
    //     scanf("%d", &num_years);
    //     printf("\nYears");
    //     for (i = 0; i < NUM_RATES; i++)
    //     {
    //         // increment interest rate by 1 for each column
    //         printf("%6d%%", low_rate + i);
    //         value[i] = INITIAL_BALANCE;
    //     }
    //     printf("\n");
    //     // increment rows by year
    //     for (year = 1; year <= num_years; year++)
    //     {
    //         // within each year, calculate the value for each interest rate
    //         printf("%3d ", year);
    //         // iterate over the different interest rates, adding the initial value plus interest
    //         for (i = 0; i < NUM_RATES; i++)
    //         {
    //             double yearly_column_rate = (low_rate + i) / 100.0;
    //             double monthly_column_rate = yearly_column_rate / 12.0;
    //             for (int month = 1; month <= 12; month++)
    //             {
    //                 value[i] *= (1.0 + monthly_column_rate);
    //             }

    //             printf("%7.2f", value[i]);
    //         }
    //         printf("\n");
    //     }
    // // question 6
    // #define MAX_LENGTH 100
    //     printf("Enter message: ");
    //     char message[MAX_LENGTH];
    //     scanf(" %[^\n]", message); // read until newline
    //     // convert to biff speak
    //     printf("In B1FF-speak: ");
    //     for (int i = 0; message[i] != '\0' && i < MAX_LENGTH; i++)
    //     {
    //         char ch = message[i];
    //         switch (ch)
    //         {
    //         case 'a':
    //         case 'A':
    //             printf("4");
    //             break;
    //         case 'b':
    //         case 'B':
    //             printf("8");
    //             break;
    //         case 'e':
    //         case 'E':
    //             printf("3");
    //             break;
    //         case 'i':
    //         case 'I':
    //             printf("1");
    //             break;
    //         case 'o':
    //         case 'O':
    //             printf("0");
    //             break;
    //         case 's':
    //         case 'S':
    //             printf("5");
    //             break;
    //         default:
    //             // print the character as is, but uppercase
    //             printf("%c", toupper(ch));
    //             break;
    //         }
    //     }
    //     printf("!!!!!!!!!!\n");
    // // question 7
    // int row_1[5], row_2[5], row_3[5], row_4[5], row_5[5];
    // printf("Enter row 1: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &row_1[i]);
    // }
    // printf("Enter row 2: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &row_2[i]);
    // }
    // printf("Enter row 3: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &row_3[i]);
    // }
    // printf("Enter row 4: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &row_4[i]);
    // }
    // printf("Enter row 5: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &row_5[i]);
    // }
    // int row_sums[5] = {0};
    // int column_sums[5] = {0};
    // for (int i = 0; i < 5; i++)
    // {
    //     row_sums[0] += row_1[i];
    //     row_sums[1] += row_2[i];
    //     row_sums[2] += row_3[i];
    //     row_sums[3] += row_4[i];
    //     row_sums[4] += row_5[i];

    //     column_sums[i] += row_1[i];
    //     column_sums[i] += row_2[i];
    //     column_sums[i] += row_3[i];
    //     column_sums[i] += row_4[i];
    //     column_sums[i] += row_5[i];
    // }
    // printf("Row totals: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", row_sums[i]);
    // }
    // printf("\nColumn totals: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", column_sums[i]);
    // }
    // printf("\n");
    // // question 8
    // // let the columns be the quiz scores for each student
    // int student_1[5], student_2[5], student_3[5], student_4[5], student_5[5];
    // printf("Enter quiz scores for student 1: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &student_1[i]);
    // }
    // printf("Enter quiz scores for student 2: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &student_2[i]);
    // }
    // printf("Enter quiz scores for student 3: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &student_3[i]);
    // }
    // printf("Enter quiz scores for student 4: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &student_4[i]);
    // }
    // printf("Enter quiz scores for student 5: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &student_5[i]);
    // }
    // int student_sums[5] = {0};
    // int quiz_sums[5] = {0};
    // float student_averages[5];
    // float quiz_averages[5];
    // int quiz_high_scores[5] = {0};
    // int quiz_low_scores[5] = {100};
    // for (int i = 0; i < 5; i++)
    // {
    //     student_sums[0] += student_1[i];
    //     student_sums[1] += student_2[i];
    //     student_sums[2] += student_3[i];
    //     student_sums[3] += student_4[i];
    //     student_sums[4] += student_5[i];

    //     quiz_sums[i] += student_1[i];
    //     quiz_sums[i] += student_2[i];
    //     quiz_sums[i] += student_3[i];
    //     quiz_sums[i] += student_4[i];
    //     quiz_sums[i] += student_5[i];

    //     if (student_1[i] > quiz_high_scores[i])
    //         quiz_high_scores[i] = student_1[i];
    //     if (student_2[i] > quiz_high_scores[i])
    //         quiz_high_scores[i] = student_2[i];
    //     if (student_3[i] > quiz_high_scores[i])
    //         quiz_high_scores[i] = student_3[i];
    //     if (student_4[i] > quiz_high_scores[i])
    //         quiz_high_scores[i] = student_4[i];
    //     if (student_5[i] > quiz_high_scores[i])
    //         quiz_high_scores[i] = student_5[i];

    //     if (student_1[i] < quiz_low_scores[i])
    //         quiz_low_scores[i] = student_1[i];
    //     if (student_2[i] < quiz_low_scores[i])
    //         quiz_low_scores[i] = student_2[i];
    //     if (student_3[i] < quiz_low_scores[i])
    //         quiz_low_scores[i] = student_3[i];
    //     if (student_4[i] < quiz_low_scores[i])
    //         quiz_low_scores[i] = student_4[i];
    //     if (student_5[i] < quiz_low_scores[i])
    //         quiz_low_scores[i] = student_5[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     student_averages[i] = student_sums[i] / 5.0f;
    //     quiz_averages[i] = quiz_sums[i] / 5.0f;
    // }
    // printf("Student totals: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", student_sums[i]);
    // }

    // printf("\nStudent averages: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%.2f ", student_averages[i]);
    // }
    // printf("\nQuiz averages: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%.2f ", quiz_averages[i]);
    // }
    // printf("\nQuiz high scores: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", quiz_high_scores[i]);
    // }
    // printf("\nQuiz low scores: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", quiz_low_scores[i]);
    // }
    // printf("\n");
    // // question 9
    // char array[10][10];
    // // initialize the array
    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         array[i][j] = '.';
    //     }
    // }
    // int current_position_row = 0;
    // int current_position_col = 0;
    // char current_letter = 'A';
    // srand((unsigned)time(NULL));
    // // always start the random walk at the top-left corner
    // array[current_position_row][current_position_col] = 'A';
    // // continue the walk until we reach 'Z' or cannot move
    // // there is a chance that we may get stuck before reaching 'Z' if all adjacent positions have been visited
    // bool can_move = true;
    // while (current_letter < 'Z' && can_move)
    // {
    //     // ensure that we don't move to a position that has been walked to before
    //     bool valid_direction_found = false;
    //     while (!valid_direction_found)
    //     {
    //         // before we decide on our next direction, ensure that we can actually move
    //         can_move = false;
    //         // check up
    //         if (current_position_row - 1 >= 0 && !can_move)
    //         {
    //             if (array[current_position_row - 1][current_position_col] == '.')
    //             {
    //                 can_move = true;
    //             }
    //         }
    //         // check down
    //         if (current_position_row + 1 < 10 && !can_move)
    //         {
    //             if (array[current_position_row + 1][current_position_col] == '.')
    //             {
    //                 can_move = true;
    //             }
    //         }

    //         // check left
    //         if (current_position_col - 1 >= 0 && !can_move)
    //         {
    //             if (array[current_position_row][current_position_col - 1] == '.')
    //             {
    //                 can_move = true;
    //             }
    //         }
    //         // check right
    //         if (current_position_col + 1 < 10 && !can_move)
    //         {
    //             if (array[current_position_row][current_position_col + 1] == '.')
    //             {
    //                 can_move = true;
    //             }
    //         }
    //         // if we cannot move, then break out of the loop
    //         if (!can_move)
    //             break;
    //         // decide on our next random direction (up,down,left,right in 1 space)
    //         int direction = rand() % 4; // 0 = up, 1 = down, 2 = left, 3 = right
    //         int new_row = current_position_row;
    //         int new_col = current_position_col;
    //         if (direction == 0)
    //         {
    //             // if we are going up, then decrement the row
    //             new_row -= 1;
    //             // if we have moved off the board, then try again
    //             if (new_row < 0)
    //                 continue;
    //         }
    //         else if (direction == 1)
    //         {
    //             // if we are going down, then increment the row
    //             new_row += 1;
    //             // if we have moved off the board, then try again
    //             if (new_row >= 10)
    //                 continue;
    //         }
    //         else if (direction == 2)
    //         {
    //             // if we are going left, then decrement the column
    //             new_col -= 1;
    //             // if we have moved off the board, then try again
    //             if (new_col < 0)
    //                 continue;
    //         }
    //         else if (direction == 3)
    //         {
    //             // if we are going right, then increment the column
    //             new_col += 1;
    //             // if we have moved off the board, then try again
    //             if (new_col >= 10)
    //                 continue;
    //         }
    //         if (array[new_row][new_col] == '.')
    //         {
    //             // if the new position is unvisited, then we can move there
    //             valid_direction_found = true;
    //             current_letter++;
    //             current_position_row = new_row;
    //             current_position_col = new_col;
    //             array[current_position_row][current_position_col] = current_letter;
    //         }
    //         else
    //         {
    //             // if the new position is visited, then we cannot move there
    //             // so just continue the loop to find a new direction
    //             continue;
    //         }
    //     }
    // }
    // // print the final array to show the walk
    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         printf("%c ", array[i][j]);
    //     }
    //     printf("\n");
    // }
    // // question 10
    // // set up arrays with the departure and arrival times in minutes since midnight
    // int departure_times[] = {8 * 60, 9 * 60 + 43, 11 * 60 + 19, 12 * 60 + 47, 14 * 60 + 7, 15 * 60 + 32, 17 * 60 + 1, 18 * 60 + 25, 19 * 60 + 50, 21 * 60 + 16, 22 * 60 + 40, 0};
    // int arrival_times[] = {10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60, 16 * 60 + 8, 17 * 60 + 55, 19 * 60 + 20, 21 * 60 + 58, 23 * 60 + 55, 1 * 60 + 30, 3 * 60 + 0, 0};
    // printf("Enter a time (in hh:mm, using a 24 hour clock): ");
    // int hh, mm;
    // scanf("%d:%d", &hh, &mm);
    // int minutes_since_midnight = hh * 60 + mm;
    // // iterate through the departure times to find the closest one
    // for (int i = 0; i < sizeof(departure_times) / sizeof(departure_times[0]); i++)
    // {
    //     if (minutes_since_midnight <= departure_times[i])
    //     {
    //         printf("Closest departure time is %d:%02d , arriving at %d:%02d \n", departure_times[i] / 60, departure_times[i] % 60, arrival_times[i] / 60, arrival_times[i] % 60);
    //         break;
    //     }
    // }
    // // question 11
    // printf("Enter phone number (alphabetic): ");
    // char ch[15] = {0};
    // scanf("%s", ch);
    // for (int i = 0; i < 15 && ch[i] != '\0'; i++)
    // {
    //     switch (ch[i])
    //     {
    //     case 'A':
    //     case 'B':
    //     case 'C':
    //         ch[i] = '2';
    //         break;
    //     case 'D':
    //     case 'E':
    //     case 'F':
    //         ch[i] = '3';
    //         break;
    //     case 'G':
    //     case 'H':
    //     case 'I':
    //         ch[i] = '4';
    //         break;
    //     case 'J':
    //     case 'K':
    //     case 'L':
    //         ch[i] = '5';
    //         break;
    //     case 'M':
    //     case 'N':
    //     case 'O':
    //         ch[i] = '6';
    //         break;
    //     case 'P':
    //     case 'Q':
    //     case 'R':
    //     case 'S':
    //         ch[i] = '7';
    //         break;
    //     case 'T':
    //     case 'U':
    //     case 'V':
    //         ch[i] = '8';
    //         break;
    //     case 'W':
    //     case 'X':
    //     case 'Y':
    //     case 'Z':
    //         ch[i] = '9';
    //         break;
    //     default:
    //         // leave the character as is
    //         break;
    //     }
    // }
    // printf("In numeric form: %s\n", ch);
    // // question 12
    // // set up an array to store the scrabble scores for each letter
    // int scrabble_scores[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    // printf("Enter a scrabble word: \n");
    // char ch;
    // int word_score = 0;
    // while ((ch = toupper(getchar())) != '\n' && ch != EOF)
    // {
    //     if (ch >= 'A' && ch <= 'Z')
    //     {
    //         // use the scrabble_scores array to get the score for the letter
    //         word_score += scrabble_scores[ch - 'A'];
    //     }
    // }
    // printf("The scrabble score is %d\n", word_score);
    // // question 13
    // printf("Enter a first and last name: ");
    // // read firstname lastname, and output lastname, firstname
    // char first_initial, ch;
    // // read first initial and store it
    // first_initial = getchar();
    // // consume rest of first name (without doing anything with it)
    // while ((ch = getchar()) != ' ')
    //     ;
    // // then read the last name and print it
    // char last_name[20] = {0};
    // scanf("%s", last_name);
    // printf("You entered the name: %s", last_name);
    // // then print our formatting and the first initial
    // printf(", %c.\n", first_initial);
    // // question 14
    // printf("Enter a sentence: ");
    // char sentence[100];
    // char ch;
    // int i = 0;
    // char terminating_char;
    // bool found_terminating_char = false;
    // // use a loop to read each character until newline
    // while (!found_terminating_char && i < 99)
    // {
    //     ch = getchar();
    //     if (ch == '?' || ch == '!' || ch == '.')
    //     {
    //         terminating_char = ch;
    //         found_terminating_char = true;
    //     }
    //     else
    //     {
    //         sentence[i] = ch;
    //         i++;
    //     }
    // }
    // // now print the sentence with the words in reverse order
    // printf("Reversal of sentence: ");
    // // the last word ends at i - 1
    // int word_end = i - 1;
    // // count backwards through the sentence to find words
    // for (int j = i - 1; j >= 0; j--)
    // {
    //     // use spaces to find the next word from the tail end
    //     if (sentence[j] == ' ' || j == 0)
    //     {
    //         // j is now at the start of the next word (from the tail end), so we print it
    //         int word_start;
    //         if (j == 0)
    //             word_start = 0;
    //         else
    //             word_start = j + 1;
    //         for (int k = word_start; k <= word_end; k++)
    //         {
    //             // print each character of the word, except the space
    //             if (sentence[k] != ' ')
    //                 printf("%c", sentence[k]);
    //         }
    //         word_end = j;
    //         if (j != 0)
    //             printf(" ");
    //     }
    // }
    // printf("%c\n", terminating_char);
    // // question 15
    // printf("Enter message to be encrypted: ");
    // char message[80] = {0};
    // char ch;
    // int index = 0;
    // while ((ch = getchar()) != '\n')
    // {
    //     message[index] = ch;
    //     index++;
    // }
    // printf("Enter shift amount (1-25): ");
    // int shift_amount = 0;
    // scanf("%d", &shift_amount);
    // // encrypt the message using a Caesar cipher
    // for (int i = 0; message[i] != '\0'; i++)
    // {
    //     // check if the character is a lower case letter
    //     if (message[i] >= 'a' && message[i] <= 'z')
    //     {
    //         message[i] = 'a' + (message[i] - 'a' + shift_amount) % 26;
    //     }
    //     // check if the character is an upper case letter
    //     else if (message[i] >= 'A' && message[i] <= 'Z')
    //     {
    //         message[i] = 'A' + (message[i] - 'A' + shift_amount) % 26;
    //     }
    //     // non-alphabetic characters are not changed
    //     continue;
    // }
    // printf("Encrypted message: %s\n", message);
    // // question 16
    // // read both words into two character arrays
    // printf("Enter first word: ");
    // char word1[40] = {0};
    // char temp_char;
    // int index = 0;
    // while ((temp_char = getchar()) != '\n')
    // {
    //     word1[index] = temp_char;
    //     index++;
    // }
    // printf("Enter second word: ");
    // char word2[40] = {0};
    // index = 0;
    // while ((temp_char = getchar()) != '\n')
    // {
    //     word2[index] = temp_char;
    //     index++;
    // }
    // // convert both words to lowercase for a case-insensitive comparison
    // for (int i = 0; word1[i] != '\0'; i++)
    // {
    //     word1[i] = tolower(word1[i]);
    // }
    // for (int i = 0; word2[i] != '\0'; i++)
    // {
    //     word2[i] = tolower(word2[i]);
    // }
    // // now check if they are anagrams by counting the occurrences of each letter
    // // note that anagrams must have the same letters with the same frequency
    // // create an array to count the occurrences of each letter
    // int letter_counts[26] = {0};
    // for (int i = 0; word1[i] != '\0'; i++)
    // {
    //     // for each letter in word1, increment the corresponding count
    //     if (word1[i] >= 'a' && word1[i] <= 'z')
    //     {
    //         int letter_count_index = word1[i] - 'a';
    //         letter_counts[letter_count_index]++;
    //     }
    // }
    // for (int i = 0; word2[i] != '\0'; i++)
    // {
    //     // for each letter in word2, decrement the corresponding count
    //     if (word2[i] >= 'a' && word2[i] <= 'z')
    //     {
    //         letter_counts[word2[i] - 'a']--;
    //     }
    // }
    // // we will end up with all counts being zero if they are anagrams
    // bool are_anagrams = true;
    // for (int i = 0; i < 26; i++)
    // {
    //     if (letter_counts[i] != 0)
    //     {
    //         // if any count is not zero, then they are not anagrams
    //         are_anagrams = false;
    //         break;
    //     }
    // }
    // if (are_anagrams)
    // {
    //     printf("The words are anagrams.\n");
    // }
    // else
    // {
    //     printf("The words are not anagrams.\n");
    // }
    // // question 17
    // printf("This program creates a magic square of a specified size.\n");
    // printf("The size must be an odd number between 1 and 99:\n");
    // int n;
    // printf("Enter size of magic square: ");
    // scanf("%d", &n);
    // // check if the size is valid
    // if (n < 1 || n > 99 || n % 2 == 0)
    // {
    //     printf("Invalid size.\n");
    //     return 1;
    // }
    // // create the magic square
    // int magic_square[n][n];
    // // initialize the magic square to all zeros
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         magic_square[i][j] = 0;
    //     }
    // }
    // int value = 1;
    // // start in the middle of the first row
    // int row = 0;
    // int col = n / 2;
    // while (value <= n * n)
    // {
    //     // place the next value in the magic square
    //     magic_square[row][col] = value;
    //     // move to the next position
    //     value++;
    //     // calculate the new row and column
    //     int new_row = (row - 1 + n) % n;
    //     int new_col = (col + 1) % n;
    //     // if the new position is already occupied, move down one row instead
    //     if (magic_square[new_row][new_col] != 0)
    //     {
    //         row = (row + 1) % n;
    //     }
    //     else
    //     {
    //         row = new_row;
    //         col = new_col;
    //     }
    // }
    // // print the magic square
    // printf("Magic Square of size %d:\n", n);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%4d ", magic_square[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}