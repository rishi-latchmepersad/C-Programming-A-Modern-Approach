#include <stdio.h>

int main()
{
    // // question 1
    // // part a
    // int i = 2, j = 3;
    // int k = i * j == 6;
    // printf("%d\n", k);
    // // part b
    // i = 5, j = 10, k = 1;
    // printf("%d\n", k > i < j);
    // // part c
    // i = 3, j = 2, k = 1;
    // printf("%d\n", i < j == j < k);
    // // part d
    // i = 3, j = 4, k = 5;
    // printf("%d\n", i % j + i < k);
    // // question 2
    // // part a
    // int i = 10, j = 5;
    // int k;
    // printf("%d\n", !i < j);
    // // part b
    // i = 2, j = 1;
    // printf("%d\n", !!i + !j);
    // // part c
    // i = 5, j = 0, k = -5;
    // printf("%d\n", i && j || k);
    // // part d
    // i = 1, j = 2, k = 3;
    // printf("%d\n", i < j || k);
    // // question 3
    // // part a
    // int i = 3, j = 4, k = 5;
    // printf("%d \n", i < j || ++j < k);
    // printf("%d %d %d\n", i, j, k);
    // // part b
    // i = 7, j = 8, k = 9;
    // printf("%d \n", i - 7 && j++ < k);
    // printf("%d %d %d\n", i, j, k);
    // // part c
    // i = 7, j = 8, k = 9;
    // printf("%d \n", (i = j) || (j = k));
    // printf("%d %d %d\n", i, j, k);
    // // part d
    // i = 1, j = 1, k = 1;
    // printf("%d \n", ++i || ++j && ++k);
    // printf("%d %d %d\n", i, j, k);
    // // question 4
    // int i = 6, j = 5;
    // printf("%d \n", (i > j) - (i < j));
    // // question 5
    // int n = 0;
    // if (n >= 1 <= 10)
    //     printf("n is between 1 and 10\n");
    // // it's legal but not correct
    // // question 6
    // int n = -8;
    // if (n == 1 - 10)
    //     printf("n is between 1 and 10\n");
    // // also legal but not correct. only true when n equals -9
    // // question 7
    // int i = -17;
    // printf("%d\n", i >= 0 ? i : -i);
    // // question 8
    // int age = 12;
    // _Bool teenager = (age >= 13 && age <= 19) ? 1 : 0;
    // printf("teenager: %d\n", teenager);
    // question 9
    // these two if statement blocks are not equivalent because one side has >=, and the other has only <.
    // Edge cases like score = 60, 70 etc. will give different results.
    // // question 10
    // int i = 1;
    // switch (i % 3)
    // {
    // case 0:
    //     printf("zero\n");
    // case 1:
    //     printf("one\n");
    // case 2:
    //     printf("two\n");
    // }
    // question 11
    int area_code = 229;
    switch (area_code)
    {
    case 229:
        printf("Albany\n");
        break;
    case 404:
    case 470:
    case 678:
    case 770:
        printf("Atlanta\n");
        break;

    case 478:
        printf("Macon\n");
        break;

    case 706:
    case 762:
        printf("Columbus\n");
        break;

    case 912:
        printf("Savannah\n");
        break;
    default:
        printf("Area code not recognized.\n");
        break;
    }
    return 0;
}