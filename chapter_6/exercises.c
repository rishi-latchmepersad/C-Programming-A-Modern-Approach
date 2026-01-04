#include <stdio.h>

int main()
{
    // // question 1
    // int i = 1;
    // while (i <= 128)
    // {
    //     printf("%d \n", i);
    //     i *= 2;
    // }
    // // question 2
    // int i = 9384;
    // do
    // {
    //     printf("%d \n", i);
    //     i /= 10;
    // } while (i > 0);
    // // question 3
    // int i, j;
    // for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
    //     printf("%d \n", i);
    // question 4
    // c is different
    // question 5
    // c is different, since it runs one more time
    // question 6
    // for (int i = 1; i <= 128; i *= 2)
    //     printf("%d \n", i);
    // // question 7
    // for (int i = 9384; i > 0; i /= 10)
    //     printf("%d \n", i);
    // // question 8
    // for (int i = 10; i >= 1; i /= 2)
    //     printf("%d ", i++);
    // // this produces an infinite loop because i++ increases i by 1 after each iteration,
    // // so i will never be less than 1
    // // question 9
    // int i = 10;
    // while (i >= 1)
    // {
    //     printf("%d ", i++);
    //     i /= 2;
    // }
    // // question 10
    // int i = 0;
    // while (i < 10)
    // {
    //     printf("%d \n", i);
    //     i++;
    //     continue;
    //     printf("This will not be printed\n");
    // }
    // // replacing continue with goto
    // i = 0;
    // while (i < 10)
    // {
    //     printf("%d \n", i);
    //     i++;
    //     goto end_continue;
    //     printf("This will not be printed\n");
    // end_continue:;
    // }
    // // question 11
    // int sum = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     if (i % 2)
    //         // if i is odd, skip to next iteration
    //         continue;
    //     // if i is even, add it to sum
    //     sum += i;
    // }
    // printf("%d \n", sum);
    // // question 12
    // int n = 97;
    // int num_loops = 0;
    // for (int d = 2; d < n; d++)
    // {
    //     if (n % d == 0)
    //     {
    //         printf("%d is not a prime number\n", n);
    //         break;
    //     }
    //     num_loops++;
    // }
    // printf("Number of loops with initial version: %d\n", num_loops);
    // // more efficient way
    // num_loops = 0;
    // for (int d = 2; d * d <= n; d++)
    // {
    //     if (n % d == 0)
    //     {
    //         printf("%d is not a prime number\n", n);
    //         break;
    //     }
    //     num_loops++;
    // }
    // printf("Number of loops with improved version: %d\n", num_loops);
    // // question 13
    // int m = 100;
    // for (int n = 0; m > 0; n++, m /= 2)
    // // question 14
    // int n = 4;
    // if (n % 2 == 0)
    //     printf("%d is even\n", n);
    return 0;
}