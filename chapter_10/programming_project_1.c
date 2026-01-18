#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>

#define STACK_SIZE (100)

// external variables
char contents[STACK_SIZE];
int top = 0;

// function declarations

// function definitions
void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void stack_overflow(void)
{
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}

void push(int item)
{
    if (is_full())
    {
        stack_overflow();
    }
    contents[top++] = item;
}

void stack_underflow(void)
{
    printf("Stack underflow\n");
    exit(EXIT_FAILURE);
}
int pop(void)
{
    if (is_empty())
    {
        stack_underflow();
    }
    return contents[--top];
}

int main(void)
{
    // // question 1
    // printf("Enter parentheses and/or braces: ");
    // char ch;
    // bool balanced = true;
    // while ((ch = getchar()) != '\n' && balanced)
    // {
    //     // push opening symbols onto stack
    //     if (ch == '(' || ch == '{')
    //     {
    //         push(ch);
    //     }
    //     // check for a closing bracket
    //     else if (ch == ')')
    //     {
    //         // check if stack is empty or top of stack is not matching opening bracket
    //         if (is_empty() || pop() != '(')
    //         {
    //             balanced = false;
    //         }
    //     }
    //     // check for a closing brace
    //     else if (ch == '}')
    //     {
    //         // check if stack is empty or top of stack is not matching opening brace
    //         if (is_empty() || pop() != '{')
    //         {
    //             balanced = false;
    //         }
    //     }
    // }
    // if (balanced && is_empty())
    // {
    //     printf("Parentheses and/or braces are nested properly.\n");
    // }
    // else
    // {
    //     printf("Parentheses and/or braces are not nested properly.\n");
    // }
    // question 2

    return 0;
}