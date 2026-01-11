#include <stdio.h>
#include <stdbool.h>

int main()
{
    // question 1
    // it is an inferior technique because the type of an element in an array may change later on.
    // setting a[0] forces the type to always match the actual type of the array
    // question 2
    // the ascii for the character '0' is 48
    printf("The ASCII value of character '0' is: %d\n", '0');
    // therefore we can use digits '0' to '9' in calculations by subtracting '0' from the character
    char digit = '5';
    int number = digit - '0';
    printf("The number is: %d\n", number);
    // question 3
    int weekend[7] = {true, false, false, false, false, false, true};
    // question 4
    int weekend2[7] = {[0] = true, [6] = true};
    // question 5
    int fib_numbers[40];
    fib_numbers[0] = 0;
    fib_numbers[1] = 1;
    for (int i = 2; i < 40; i++)
    {
        fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
    }
    printf("The first 40 Fibonacci numbers are:\n");
    for (int i = 0; i < 40; i++)
    {
        printf("%d ", fib_numbers[i]);
    }
    // question 6
    // make a multidimensional array for a 7 segment display
    const int segment[10][7] = {
        {1, 1, 1, 1, 1, 1, 0}, // 0
        {0, 1, 1, 0, 0, 0, 0}, // 1
        {1, 1, 0, 1, 1, 0, 1}, // 2
        {1, 1, 1, 1, 0, 0, 1}, // 3
        {0, 1, 1, 0, 0, 1, 1}, // 4
        {1, 0, 1, 1, 0, 1, 1}, // 5
        {1, 0, 1, 1, 1, 1, 1}, // 6
        {1, 1, 1, 0, 0, 0, 0}, // 7
        {1, 1, 1, 1, 1, 1, 1}, // 8
        {1, 1, 1, 1, 0, 1, 1}  // 9
    };
    // question 7
    const int segment2[10][7] = {
        {1, 1, 1, 1, 1, 1},                                     // 0
        {[1] = 1, [2] = 1},                                     // 1
        {[0] = 1, [1] = 1, [3] = 1, [4] = 1, [6] = 1},          // 2
        {[0] = 1, [1] = 1, [2] = 1, [3] = 1, [6] = 1},          // 3
        {[1] = 1, [2] = 1, [5] = 1, [6] = 1},                   // 4
        {[0] = 1, [2] = 1, [3] = 1, [5] = 1, [6] = 1},          // 5
        {[0] = 1, [2] = 1, [3] = 1, [4] = 1, [5] = 1, [6] = 1}, // 6
        {[0] = 1, [1] = 1, [2] = 1},                            // 7
        {1, 1, 1, 1, 1, 1, 1},                                  // 8
        {[0] = 1, [1] = 1, [2] = 1, [3] = 1, [5] = 1, [6] = 1}  // 9
    };
    // question 8
    int temperature_readings[30][24];
    // question 9
    float average_monthly_temp = 0;
    for (int day = 0; day < 30; day++)
    {
        int daily_sum = 0;
        for (int hour = 0; hour < 24; hour++)
        {
            daily_sum += temperature_readings[day][hour];
        }
        float daily_average = daily_sum / 24.0;
        average_monthly_temp += daily_average;
    }
    average_monthly_temp /= 30;
    // question 10
    char chess_board[8][8] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
        {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
        {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
        {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
    // question 11
    char checker_board[8][8];
    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            if ((row + col) % 2 == 0)
            {
                checker_board[row][col] = 'B';
            }
            else
            {
                checker_board[row][col] = 'R';
            }
        }
    }
    printf("Checkerboard pattern:\n");
    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            printf("%c ", checker_board[row][col]);
        }
        printf("\n");
    }
    return 0;
}