#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;
    *sum = 0.0f;
    for (i = 0; i < n; i++)
    {
        *sum += a[i];
    }
    *avg = *sum / n;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    // split the total seconds into hours, minutes, and seconds
    // total_sec = hr * 3600 + min * 60 + sec
    // hr = total_seconds / 3600, since there are 3600 seconds in an hour
    *hr = total_sec / 3600;
    // min = (total_sec - hr * 3600) / 60, since there are 60 seconds in a minute, and we
    // subtract hr * 3600 from total_sec to get the remaining seconds that need to be represented
    *min = (total_sec - *hr * 3600) / 60;
    // sec = total_sec - hr * 3600 - min * 60, since there are 60 seconds in a minute
    *sec = total_sec - *hr * 3600 - *min * 60;
    // we return nothing since we use pointers to store the parameters
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    // initialize largest and second_largest to be the first value in the array
    *largest = *second_largest = a[0];
    // then iterate through the array
    for (int i = 1; i < n; i++)
    {
        // if this element is greater than largest, set second_largest to largest, and largest to this element
        if (a[i] > *largest)
        {
            *second_largest = *largest;
            *largest = a[i];
        }
        // else it may still be larger than second_largest,
        // if so, set second_largest to this element
        else if (a[i] > *second_largest)
        {
            *second_largest = a[i];
        }
    }
}

void split_date(int day_of_year, int year, int *month, int *day)
{
    // split the day of the year into month and day
    // first check if we have a leap year
    bool leap_year = false;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        // this is a leap year, so February has 29 days
        leap_year = true;
    }
    // then set month and day based on the day of the year
    // for each month, check if the day of the year is less than or equal to the number of days in that month
    if (day_of_year <= 31)
    {
        *month = 1;
        *day = day_of_year;
    }
    else if (day_of_year <= 59 + (leap_year ? 1 : 0))
    {
        *month = 2;
        *day = day_of_year - 31;
    }
    else if (day_of_year <= 90 + (leap_year ? 1 : 0))
    {
        *month = 3;
        *day = day_of_year - 59 - (leap_year ? 1 : 0);
    }
    else if (day_of_year <= 120 + (leap_year ? 1 : 0))
    {
        *month = 4;
        *day = day_of_year - 90 - (leap_year ? 1 : 0);
    }
    else if (day_of_year <= 151 + (leap_year ? 1 : 0))
    {
        *month = 5;
        *day = day_of_year - 120 - (leap_year ? 1 : 0);
    }
    else if (day_of_year <= 181 + (leap_year ? 1 : 0))
    {
        *month = 6;
        *day = day_of_year - 151 - (leap_year ? 1 : 0);
    }
    else if (day_of_year <= 212 + (leap_year ? 1 : 0))
    {
        *month = 7;
        *day = day_of_year - 181 - (leap_year ? 1 : 0);
    }
    else if (day_of_year <= 243 + (leap_year ? 1 : 0))
    {
        *month = 8;
        *day = day_of_year - 212 - (leap_year ? 1 : 0);
    }
    else if (day_of_year <= 273 + (leap_year ? 1 : 0))
    {
        *month = 9;
        *day = day_of_year - 243 - (leap_year ? 1 : 0);
    }
    else if (day_of_year <= 304 + (leap_year ? 1 : 0))
    {
        *month = 10;
        *day = day_of_year - 273 - (leap_year ? 1 : 0);
    }
    else if (day_of_year <= 334 + (leap_year ? 1 : 0))
    {
        *month = 11;
        *day = day_of_year - 304 - (leap_year ? 1 : 0);
    }
    else
    {
        *month = 12;
        *day = day_of_year - 334 - (leap_year ? 1 : 0);
    }
    // we return nothing since we use pointers to store the parameters
}

int *find_largest(int a[], int n)
{
    // find the largest element in the array and return a pointer to it
    int *largest = &a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > *largest)
        {
            largest = &a[i];
        }
    }
    return largest;
}

int main(void)
{
    // question 1
    // int i = 0;
    // int *p = &i;
    // aliases for i are *p, *&i
    // question 2
    // int i = 0;
    // int *p, *q;
    // valid statements are p = &*q, p = q,*p = *q
    // question 3
    // answer in avg_sum function above
    // // question 4
    // int i = 0, j = 1;
    // swap(&i, &j);
    // printf("%d %d", i, j);
    // // question 5
    // int total_seconds_since_midnight = 12000;
    // int hr, min, sec;
    // split_time(total_seconds_since_midnight, &hr, &min, &sec);
    // printf("%d:%d:%d", hr, min, sec);
    // // question 6
    // int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int largest, second_largest;
    // find_two_largest(a, 10, &largest, &second_largest);
    // printf("%d %d", largest, second_largest);
    // // question 7
    // int day_of_year = 100;
    // int year = 1994;
    // int month, day;
    // split_date(day_of_year, year, &month, &day);
    // printf("%d %d", month, day);
    // // question 8
    // int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int *largest = find_largest(a, 10);
    // printf("%d", *largest);
    return 0;
}