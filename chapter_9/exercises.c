#include <stdio.h>
#include <stdbool.h>

// question 1
double triangle_area(double base, double height) // both parameters must be defined as double
{
    double product; // this must be defined within the curly braces of the function
    product = base * height;
    return product / 2;
}

int check(int x, int y, int n)
{
    if (0 <= x && x <= (n - 1) && 0 <= y && y <= (n - 1))
        return 1;
    else
        return 0;
    return 0;
}

int gcd(int m, int n)
{
    // compute the greatest common divisor of m and n using the Euclidean algorithm
    int temp;
    while (n != 0)
    {
        temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}

int day_of_year(int month, int day, int year)
{
    // compute the day of the year for the given date
    // first initialize an array with the number of days in each month of the year.
    // We include a dummy 0 at index 0 to make the month indices line up
    int day_counts[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // check for leap year and adjust February days
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        day_counts[2] = 29;
    }
    int day_of_year = 0;
    // starting with jan at index 1, sum the days in the preceding months
    for (int i = 1; i < month; i++)
    {
        day_of_year += day_counts[i];
    }
    // then finally add the days in the current month
    day_of_year += day;
    return day_of_year;
}

int num_digits(int n)
{
    int num_digits = 0;
    if (n == 0)
        return 1;
    // else count digits
    while (n > 0)
    {
        n /= 10;
        num_digits++;
    }
    return num_digits;
}

int digit(int n, int k)
{
    if (n < 0 || k < 0)
        return -1; // invalid input
    // else
    // get the k-th digit of n, counting from right to left starting at k=0
    for (int i = 0; i < k; i++)
    {
        n /= 10;
    }
    return n % 10;
}

int largest(int a[], int n)
{
    // find the largest value in the array
    // a is an array of n integers
    // n is the number of elements in the array
    // set largest_value to the first value in the array
    int largest_value = a[0];
    // loop through the array
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest_value)
        {
            largest_value = a[i];
        }
    }
    return largest_value;
}
float average(int a[], int n)
{
    // compute the average of the values in the array
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum / n;
}

int num_positive(int a[], int n)
{
    // count the number of positive values in the array
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            count++;
        }
    }
    return count;
}

float compute_GPA(char grades[], int n)
{
    // compute the GPA given an array of letter grades
    int total_points = 0;
    for (int i = 0; i < n; i++)
    {
        switch (grades[i])
        {
        case 'A':
            total_points += 4;
            break;
        case 'B':
            total_points += 3;
            break;
        case 'C':
            total_points += 2;
            break;
        case 'D':
            total_points += 1;
            break;
        case 'F':
            total_points += 0;
            break;
        default:
            // invalid grade, ignore
            break;
        }
    }
    return (float)total_points / n;
}

double inner_product(double a[], double b[], int n)
{
    // compute the inner product of two arrays of doubles
    double sum_of_products = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum_of_products += a[i] * b[i];
    }
    return sum_of_products;
}

int evaluate_position(char board[8][8])
{
    // evaluate the state of a chess board
    // K,Q,R,B,N,P for white pieces
    // k,q,r,b,n,p for black pieces
    int piece_values[] = {0, 9, 5, 3, 3, 1}; // index 0 unused, Q,R,B,N,P or q,r,b,n,p
    int white_score = 0;
    int black_score = 0;
    // iterate through the board
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            char piece = board[i][j];
            switch (piece)
            {
            case 'Q':
                white_score += piece_values[1];
                break;
            case 'R':
                white_score += piece_values[2];
                break;
            case 'B':
                white_score += piece_values[3];
                break;
            case 'N':
                white_score += piece_values[4];
                break;
            case 'P':
                white_score += piece_values[5];
                break;
            case 'q':
                black_score += piece_values[1];
                break;
            case 'r':
                black_score += piece_values[2];
                break;
            case 'b':
                black_score += piece_values[3];
                break;
            case 'n':
                black_score += piece_values[4];
                break;
            case 'p':
                black_score += piece_values[5];
                break;
            default:
                // empty square or king, ignore
                break;
            }
        }
    }
    return white_score - black_score;
}

bool has_zero(int a[], int n)
{
    // return true any element of a has a value of 0
    for (int i = 0; i < n; i++)
    { // opening brace added
        if (a[i] == 0)
            return true;
    }
    return false;
}

double median(double x, double y, double z)
{
    // compute the median of three values and return it
    double median_value;
    if ((x <= y && y <= z) || (z <= y && y <= x))
        median_value = y;
    else if ((y <= x && x <= z) || (z <= x && x <= y))
        median_value = x;
    else
        median_value = z;
    return median_value;
}

int fact(int n)
{
    // compute the factorial of n using recursion
    if (n < 0)
        return -1; // invalid input
    else if (n == 0 || n == 1)
        return 1; // base case
    else
        return n * fact(n - 1); // recursive case
}

int fact2(int n)
{
    // compute the factorial of n using iteration
    if (n < 0)
        return -1; // invalid input
    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int gcd2(int m, int n)
{
    // compute the greatest common divisor of m and n using recursion
    if (n == 0)
        return m;
    else
        return gcd2(n, m % n);
}

void pb(int n) // takes an integer and prints its binary representation
{
    if (n != 0)
    {
        pb(n / 2);            // recursive call with n divided by 2
        putchar('0' + n % 2); // print the least significant bit (0 or 1, since '0' + 0 = '0' and '0' + 1 = '1')
    }
}

int main(void)
{
    // question 1
    // see triangle_area function above
    // question 2
    // see function 'check' above
    // question 3
    // see function 'gcd' above
    // question 4
    // see function 'day_of_year' above
    // question 5
    // see function 'num_digits' above
    // question 6
    // see function 'digit' above
    // question 7
    // options a,b,c,d and e are correct
    // question 8
    // options a and b are correct. in prototypes, parameter names are optional
    // question 9
    // the function will print i=1 and j=2, because the swap function only swaps copies of the values
    // question 10
    // see functions largest, average and num_positive above
    // question 11
    // see function compute_GPA above
    // question 12
    // see the function 'inner_product' above
    // question 13
    // see the function 'evaluate_position' above
    // question 14
    // see the function 'has_zero' above
    // question 15
    // see the function 'median' above
    // question 16
    // see the 'fact' function above
    // question 17
    // see the 'fact2' function above
    // question 18
    // see the 'gcd2' function above
    // question 19
    // see the 'pb' function above
    int n = 6;
    pb(n);
    return 0;
}