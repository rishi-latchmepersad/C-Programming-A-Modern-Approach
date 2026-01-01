#include <stdio.h>

int main()
{
    // // question 1 part a
    // int i = 5, j = 3;
    // printf("%d %d", i / j, i % j);
    // return 0;
    // // question 1 part b
    // int i=2,j=3;
    // printf("%d",(i+10)%j);
    // return 0;
    // // question 1 part c
    // int i = 7, j = 8, k = 9;
    // printf("%d", (i + 10) % k / j);
    // return 0;
    // // question 1 part d
    // int i = 1, j = 2, k = 3;
    // printf("%d", (i + 5) % (j + 2) / k);
    // return 0;
    // // question 2
    // // yes they will always have the same value/result
    // // in C99, they are always truncated towards zero
    // int i =6,j=3;
    // int result_1 = (-i)/j;
    // int result_2 = -(i/j);
    // printf("result_1: %d\n", result_1);
    // printf("result_2: %d\n", result_2);
    // return 0;
    // // question 3
    // // these can't be run easily with c89/c90, because it doesn't accept inline comments
    // // however in c89, truncation is implementation-specific, so the second and third expressions may be -1 or -2 depending on the implementation
    // int i = 8, j = 5;
    // printf("%d\n", i / j);
    // i = -8;
    // printf("%d\n", i / j);
    // i = 8, j = -5;
    // printf("%d\n", i / j);
    // i = -8, j = -5;
    // printf("%d\n", i / j);
    // return 0;
    // // question 4
    // // for c99, the outputs will be:
    // // 1
    // // -1
    // // -1
    // // 1
    // // because truncation is always towards zero in c99
    // // question 5
    // // again, these can't be run easily with c89/c90, because it doesn't accept inline comments
    // // however in c89, truncation can be floored to - infinity or towards 0, so the second and third expressions may be +/-3 or +/-2 depending on the implementation
    // int i = 8, j = 5;
    // printf("%d\n", i % j);
    // // always +3
    // i = -8;
    // printf("%d\n", i % j);
    // // if we take truncation towards 0, then -8 / 5 = -1, meaning that -1*5 = -5, so -8-(-5) = -3
    // // if we take floored truncation, then -8 / 5 = -2, meaning that -2*5 = -10, so -8-(-10) = 2
    // i = 8, j = -5;
    // printf("%d\n", i % j);
    // // if we take truncation towards 0, then 8 / -5 = -1, meaning that -1*-5 = 5, so 8-5 = 3
    // // if we take floored truncation, then 8 / -5 = -2, meaning that -2*-5 = 10, so 8-10 = -2
    // i = -8, j = -5;
    // printf("%d\n", i % j);
    // // always -3
    // return 0;
    // // question 6
    // // for c99, the outputs will be:
    // // 3
    // // -3
    // // 3
    // // -3
    // // because truncation is always towards zero in c99
    // // question 7
    // // this alternative technique for UPC works except in the case where the check digit needs to be 0
    // // question 8
    // // yes this is a valid alternative way to compute the UPC
    // // question 9
    // // part a
    // int k;
    // int i = 7, j = 8;
    // i *= j + 1;
    // printf("%d %d \n", i, j);
    // // part b
    // i = j = k = 1;
    // i += j += k;
    // printf("%d %d %d \n", i, j, k);
    // // part c
    // i = 1, j = 2, k = 3;
    // i -= j -= k;
    // printf("%d %d %d \n", i, j, k);
    // // part d
    // i = 2, j = 1, k = 0;
    // i *= j *= k;
    // printf("%d %d %d \n", i, j, k);
    // // question 10
    // // part a
    // int i = 6;
    // int j = i += i;
    // printf("%d %d \n", i, j);
    // // part b
    // i = 5;
    // j = (i -= 2) + 1;
    // printf("%d %d \n", i, j);
    // // part c
    // i = 7;
    // j = 6 + (i = 2.5);
    // printf("%d %d \n", i, j);
    // // part d
    // i = 2, j = 8;
    // j = (i = 6) + (j = 3);
    // printf("%d %d \n", i, j);
    // // question 11
    // // part a
    // int i = 1;
    // printf("%d \n", i++ - 1);
    // printf("%d \n", i);
    // // part b
    // i = 10;
    // int j = 5;
    // printf("%d \n", i++ - ++j);
    // printf("%d %d \n", i, j);
    // // part c
    // i = 7, j = 8;
    // printf("%d \n", i++ - --j);
    // printf("%d %d \n", i, j);
    // // part d
    // i = 3, j = 4;
    // int k = 5;
    // printf("%d \n", i++ - j++ + --k);
    // printf("%d %d %d \n", i, j, k);
    // // question 12
    // // part a
    // int i = 5;
    // int j = ++i * 3 - 2;
    // printf("%d %d \n", i, j);
    // // part b
    // i = 5, j = 3 - 2 * i++;
    // printf("%d %d \n", i, j);
    // // part c
    // i = 7;
    // j = 3 * i-- + 2;
    // printf("%d %d \n", i, j);
    // // part d
    // i = 7, j = 3 + --i * 2;
    // printf("%d %d \n", i, j);
    // question 13
    // i+=1 is equivalent to ++i, because both increment i by 1 before its value is used in the expression
    // question 14
    // (a * b) - (c * d) + e
    // ((a / b) % c) / d
    // ((- a) - b + c) - (+ d)
    // ((a * (- b)) / c ) - d
    // question 15
    // part a
    int i = 1, j = 2;
    printf("%d\n", i += j);
    i = 1, j = 2;
    // part b
    printf("%d\n", i--);
    i = 1, j = 2;
    // part c
    printf("%d\n", i * j / i);
    i = 1, j = 2;
    // part d
    printf("%d\n", i % ++j);
    return 0;
}