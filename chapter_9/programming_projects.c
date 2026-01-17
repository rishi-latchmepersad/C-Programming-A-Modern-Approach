#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>

void selection_sort(int arr[], int n)
{
    // base case
    if (n <= 1)
        return;
    int i, max_index, temp;
    max_index = n - 1;
    // search for the maximum element in the array
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[max_index])
            max_index = i;
    }
    // temporarily store the last element
    temp = arr[n - 1];
    // move the maximum element to the end
    arr[n - 1] = arr[max_index];
    // move the last element to the position of the maximum element
    arr[max_index] = temp;
    // call itself to sort the remaining elements
    selection_sort(arr, n - 1);
}

float compute_tax(float income)
{
    float tax;
    if (income <= 750.00f)
        tax = income * 0.01f;
    else if (income <= 2250.00f)
        tax = 7.50f + 0.02f * (income - 750.00f);
    else if (income <= 3750.00f)
        tax = 37.50f + 0.03f * (income - 2250.00f);
    else if (income <= 5250.00f)
        tax = 82.50f + 0.04f * (income - 3750.00f);
    else if (income <= 7000.00f)
        tax = 142.50f + 0.05f * (income - 5250.00f);
    else
        tax = 230.00f + 0.06f * (income - 7000.00f);
    return tax;
}

void generate_random_walk(char array[10][10])
{
    // initialize the array
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            array[i][j] = '.';
        }
    }
    int current_position_row = 0;
    int current_position_col = 0;
    char current_letter = 'A';
    srand((unsigned)time(NULL));
    // always start the random walk at the top-left corner
    array[current_position_row][current_position_col] = 'A';
    // continue the walk until we reach 'Z' or cannot move
    // there is a chance that we may get stuck before reaching 'Z' if all adjacent positions have been visited
    bool can_move = true;
    while (current_letter < 'Z' && can_move)
    {
        // ensure that we don't move to a position that has been walked to before
        bool valid_direction_found = false;
        while (!valid_direction_found)
        {
            // before we decide on our next direction, ensure that we can actually move
            can_move = false;
            // check up
            if (current_position_row - 1 >= 0 && !can_move)
            {
                if (array[current_position_row - 1][current_position_col] == '.')
                {
                    can_move = true;
                }
            }
            // check down
            if (current_position_row + 1 < 10 && !can_move)
            {
                if (array[current_position_row + 1][current_position_col] == '.')
                {
                    can_move = true;
                }
            }

            // check left
            if (current_position_col - 1 >= 0 && !can_move)
            {
                if (array[current_position_row][current_position_col - 1] == '.')
                {
                    can_move = true;
                }
            }
            // check right
            if (current_position_col + 1 < 10 && !can_move)
            {
                if (array[current_position_row][current_position_col + 1] == '.')
                {
                    can_move = true;
                }
            }
            // if we cannot move, then break out of the loop
            if (!can_move)
                break;
            // decide on our next random direction (up,down,left,right in 1 space)
            int direction = rand() % 4; // 0 = up, 1 = down, 2 = left, 3 = right
            int new_row = current_position_row;
            int new_col = current_position_col;
            if (direction == 0)
            {
                // if we are going up, then decrement the row
                new_row -= 1;
                // if we have moved off the board, then try again
                if (new_row < 0)
                    continue;
            }
            else if (direction == 1)
            {
                // if we are going down, then increment the row
                new_row += 1;
                // if we have moved off the board, then try again
                if (new_row >= 10)
                    continue;
            }
            else if (direction == 2)
            {
                // if we are going left, then decrement the column
                new_col -= 1;
                // if we have moved off the board, then try again
                if (new_col < 0)
                    continue;
            }
            else if (direction == 3)
            {
                // if we are going right, then increment the column
                new_col += 1;
                // if we have moved off the board, then try again
                if (new_col >= 10)
                    continue;
            }
            if (array[new_row][new_col] == '.')
            {
                // if the new position is unvisited, then we can move there
                valid_direction_found = true;
                current_letter++;
                current_position_row = new_row;
                current_position_col = new_col;
                array[current_position_row][current_position_col] = current_letter;
            }
            else
            {
                // if the new position is visited, then we cannot move there
                // so just continue the loop to find a new direction
                continue;
            }
        }
    }
}

void print_array(char array[10][10])
{
    // print the final array to show the walk
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }
}

void read_word(int counts[26])
{
    char temp_char;
    while ((temp_char = getchar()) != '\n')
    {
        // if the character is a letter
        temp_char = tolower(temp_char);
        // for each letter in word1, increment the corresponding count
        if (temp_char >= 'a' && temp_char <= 'z')
        {
            int letter_count_index = temp_char - 'a';
            counts[letter_count_index]++;
        }
    }
}

bool equal_array(int counts1[26], int counts2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (counts1[i] != counts2[i])
        {
            return false;
        }
    }
    return true;
}

void create_magic_square(int n, int magic_square[n][n])
{
    // initialize the magic square
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            magic_square[i][j] = 0;
        }
    }
    int value = 1;
    // start in the middle of the first row
    int row = 0;
    int col = n / 2;
    while (value <= n * n)
    {
        // place the next value in the magic square
        magic_square[row][col] = value;
        // move to the next position
        value++;
        // calculate the new row and column
        int new_row = (row - 1 + n) % n;
        int new_col = (col + 1) % n;
        // if the new position is already occupied, move down one row instead
        if (magic_square[new_row][new_col] != 0)
        {
            row = (row + 1) % n;
        }
        else
        {
            row = new_row;
            col = new_col;
        }
    }
}

void print_magic_square(int n, int magic_square[n][n])
{
    // print the magic square
    printf("Magic Square of size %d:\n", n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d ", magic_square[i][j]);
        }
        printf("\n");
    }
}

int compute_polynomial(int x)
{
    return 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
}

int power(int base, int exponent)
{
    if (exponent == 0)
        return 1;
    int result = 1;
    // if n is even, then base^(n/2) * base^(n/2) = base^n
    if (exponent % 2 == 0)
    {
        result = power(base, exponent / 2);
        result = result * result;
    }
    // if n is odd, then base^(n-1) * base = base^n
    if (exponent % 2 == 1)
    {
        result = power(base, exponent - 1);
        result = result * base;
    }
    return result;
}

int main()
{
    // // question 1
    // printf("Please enter a series of integers (0 to end, maximum of 100 integers):\n");
    // int num[100];
    // scanf("%d", &num[0]);
    // selection_sort(num, 100);
    // // question 2
    // printf("Please enter your taxable income: ");
    // float income;
    // scanf("%f", &income);
    // float tax;
    // tax = compute_tax(income);
    // printf("Your tax is: $%.2f\n", tax);
    // question 3
    // char array[10][10];
    // generate_random_walk(array);
    // print_array(array);
    // question 4
    // // read both words into two character arrays
    // printf("Enter first word: ");
    // int word1_letter_count[26] = {0};
    // read_word(word1_letter_count);
    // printf("Enter second word: ");
    // int word2_letter_count[26] = {0};
    // read_word(word2_letter_count);
    // // now check if they are anagrams by counting the occurrences of each letter
    // // note that anagrams must have the same letters with the same frequency
    // // create an array to count the occurrences of each letter
    // // we will end up with all counts being zero if they are anagrams
    // bool are_anagrams = equal_array(word1_letter_count, word2_letter_count);
    // if (are_anagrams)
    // {
    //     printf("The words are anagrams.\n");
    // }
    // else
    // {
    //     printf("The words are not anagrams.\n");
    // }
    // // question 5
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
    // create_magic_square(n, magic_square);
    // // print the magic square
    // print_magic_square(n, magic_square);
    // // question 6
    // printf("Enter an integer value for x: ");
    // int x;
    // scanf("%d", &x);
    // int result = compute_polynomial(x);
    // printf("The result of the polynomial is: %d\n", result);
    // // question 7
    // printf("Enter values for x and n to compute x^n: ");
    // int x, n;
    // scanf("%d %d", &x, &n);
    // int result = 1;
    // result = power(x, n);
    // printf("%d to the power of %d is %d\n", x, n, result);
    // question 8
    char user_input = 'y';
    // initiate random seed
    srand(time(NULL));
    do
    {
        int first_dice_num, second_dice_num;
        // roll the dice for the first roll
        first_dice_num = (rand() % 6) + 1;
        second_dice_num = (rand() % 6) + 1;
        int sum = first_dice_num + second_dice_num;
        switch (sum)
        {
        case 2:
        case 3:
        case 12:
            printf("You rolled %d + %d = %d. You lose!\n", first_dice_num, second_dice_num, sum);
            break;
        case 7:
        case 11:
            printf("You rolled %d + %d = %d. You win!\n", first_dice_num, second_dice_num, sum);
            break;
        default:
            printf("You rolled %d + %d = %d. Point is established to %d. Rolling again...\n", first_dice_num, second_dice_num, sum, sum);
            // roll again until we either roll the point again (win) or roll a 7 (lose)
            // set the established point
            int point = sum;
            bool game_over = false;
            while (!game_over)
            {
                // roll the dice again, and add 1 to each die to get a number between 1 and 6
                first_dice_num = (rand() % 6) + 1;
                second_dice_num = (rand() % 6) + 1;
                sum = first_dice_num + second_dice_num;
                printf("You rolled %d + %d = %d.\n", first_dice_num, second_dice_num, sum);
                if (sum == point)
                {
                    printf("You matched your point! You win!\n");
                    game_over = true;
                }
                else if (sum == 7)
                {
                    printf("You rolled a 7 before matching your point. You lose!\n");
                    game_over = true;
                }
            }
            break;
        }
        printf("Play again? (y/n): ");
        scanf(" %c", &user_input);
    } while (user_input == 'y' || user_input == 'Y');
    return 0;
}