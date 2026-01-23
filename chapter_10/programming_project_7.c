#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>

#define MAX_DIGITS (10)
#define DIGIT_HEIGHT (4)
#define DIGIT_WIDTH_WITH_SPACER (4)
// make a multidimensional array for a 7 segment display
const int segments[10][7] = {
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
char digits[4][MAX_DIGITS * 4] = {' '};
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);
int main(void)
{
    printf("Enter a number: ");
    char number[MAX_DIGITS + 1];
    scanf("%s", number);
    // iterate over each digit entered
    for (int i = 0; i < strlen(number); i++)
    {
        // ignore non-digit characters
        if (number[i] < '0' || number[i] > '9')
            continue;
        // convert the digit to its seven-segment representation
        process_digit(number[i] - '0', i);
    }
    print_digits_array();
    return 0;
}

void clear_digits_array(void)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < MAX_DIGITS * 4; j++)
        {
            digits[i][j] = ' ';
        }
    }
}
void process_digit(int digit, int position)
{
    int col_start = position * 4; // each digit is represented by 3 cols + 1 space

    /* clear this digit slot to be super safe */
    for (int r = 0; r < 4; r++)
        for (int c = 0; c < 4; c++)
            digits[r][col_start + c] = ' ';

    // for each segment of the digit, draw a _ or | depending on if the segment is on or off
    // and according to its position
    /* Row 0: top (a) */
    if (segments[digit][0])
        digits[0][col_start + 1] = '_';

    /* Row 1: upper left (f), middle (g), upper right (b) */
    if (segments[digit][5])
        digits[1][col_start + 0] = '|';
    if (segments[digit][6])
        digits[1][col_start + 1] = '_';
    if (segments[digit][1])
        digits[1][col_start + 2] = '|';

    /* Row 2: lower left (e), bottom (d), lower right (c) */
    if (segments[digit][4])
        digits[2][col_start + 0] = '|';
    if (segments[digit][3])
        digits[2][col_start + 1] = '_';
    if (segments[digit][2])
        digits[2][col_start + 2] = '|';

    /* Row 3 stays blank */
}
void print_digits_array(void)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < MAX_DIGITS * 4; j++)
        {
            printf("%c", digits[i][j]);
        }
        printf("\n");
    }
}