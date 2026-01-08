#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

int main(void)
{
    // // question 1a
    // int a = 077; // octal literal
    // printf("Decimal of 077 is %d\n", a);
    // // question 1b
    // int b = 0x77; // hex literal
    // printf("Decimal of 0x77 is %d\n", b);
    // // question 1c
    // int c = 0xABC; // hex literal
    // printf("Decimal of 0xABC is %d\n", c);
    // // question 2
    // // part a
    // int a = 010E2; // legal int octal constant
    // // part b
    // float b = 32.1E+5; // legal float constant
    // // part c
    // // int c = 0790; // illegal int octal constant
    // // part d
    // // int d = 100_000 // illegal int constant
    // // part e
    // float e = 3.978e-2; // legal float constant
    // // question 3
    // // part a
    // short unsigned int a = 1;
    // // part b
    // // short float b = 1.0f; // invalid
    // // part c
    // long double c = 1.0f;
    // // part d
    // unsigned long d = 1000UL;
    // // question 4
    // char c = 'a';
    // int i = 1;
    // i += c;        // valid
    // c = 2 * c - 1; // valid
    // putchar(c);    // valid
    // printf(c);     // invalid
    // // question 5
    // // the number 65 (int) in binary is
    // 'A' == 65 ? printf("'A' is 65\n") : printf("A is not 65\n");
    // 0b1000001 == 65 ? printf("0b1000001 is 65\n") : printf("A is not 65\n");
    // 0101 == 65 ? printf("0101 is 65\n") : printf("A is not 65\n");
    // 0x41 == 65 ? printf("0x41 is 65\n") : printf("A is not 65\n");
    // question 6
    // best match type for each (C standard assumes 16 bit machine, unsigned):
    // days in a month: char (can hold from -127 to +127)
    // days in a year: short (can hold from -32767 to +32767)
    // minutes in a day: short (can hold from -32767 to +32767)
    // seconds in a day: long (can hold from -2147483647 to +2147483647. int is not guaranteed to be 32 bits wide, so long is the best choice)
    // question 7
    // character escape to octal escape
    // \b -> \010
    // \n -> \012
    // \r -> \015
    // \t -> \011
    // question 8
    // character escape to hex escape
    // \b -> \x08
    // \n -> \x0a
    // \r -> \x0d
    // \t -> \x09
    // // question 9
    // int i = 1, j = 1;
    // // this will be an int: i / j + 'a');
    // // question 10
    // int i = 1;
    // long j = 1;
    // unsigned k = 1;
    // // i+(int) j*k is an unsigned int, because the (int) casts only j to an int
    // // question 11
    // int i = 1;
    // float f = 1.0f;
    // double d = 1.0;
    // // i * f / d is a double
    // // question 12
    // int i = 1;
    // float f = 1.0f;
    // double d;
    // d = i + f;
    // // i gets converted to a float, then i is added to the float f, then the sum is converted to a double
    // question 13
    // char c = '\1';
    // short s = 2;
    // int i = -3;
    // long m = 5L;
    // float f = 6.5f;
    // double d = 7.5;
    // printf("c * i = %d, and is an int\n", c * i);
    // printf("s+m = %ld, and is a long\n", s + m);
    // printf("f/c = %f, and is a float\n", f / c);
    // printf("d/s = %f, and is a double\n", d / s);
    // printf("f -d = %f, and is a double\n", f - d);
    // printf("(int)f = %d, and is an int\n", (int)f);
    // // question 14
    // float f = -1.1f;
    // float frac_part = f - (int)f;
    // printf("The fractional part of %f is %f\n", f, frac_part);
    // // floats are an approximation, so it might not always be perfectly correct
    // // question 15
    // typedef int8_t Int8;
    // typedef int16_t Int16;
    // typedef int32_t Int32;
    return 0;
}