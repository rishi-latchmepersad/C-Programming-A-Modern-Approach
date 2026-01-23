#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>

#define MAX_STACK_SIZE (100)

// external variables
char stack[MAX_STACK_SIZE];
int top = 0;

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
    return top == MAX_STACK_SIZE;
}

void push(char item)
{
    if (is_full())
    {
        printf("Expression is too complex.\n");
        exit(1);
    }
    stack[top++] = item;
}

int pop(void)
{
    if (is_empty())
    {
        printf("Not enough operands.\n");
        exit(1);
    }
    return stack[--top];
}

float evaluate_rpn(char expression[])
{
    // evaluate the RPN expression and return the result
    for (int i = 0; i < strlen(expression); i++)
    {
        if (isdigit(expression[i]))
        {
            // if this is an operand (digit), push it onto the stack
            push(expression[i] - '0');
        }
        else if (expression[i] == '+')
        {
            // if this is an operator, pop the top two values off the stack and perform the operation
            float b = pop();
            float a = pop();
            push(a + b);
        }
        else if (expression[i] == '-')
        {
            float b = pop();
            float a = pop();
            push(a - b);
        }
        else if (expression[i] == '*')
        {
            float b = pop();
            float a = pop();
            push(a * b);
        }
        else if (expression[i] == '/')
        {
            float b = pop();
            float a = pop();
            push(a / b);
        }
    }
    if (top == 1)
    {
        // if the stack has only one value left, return it
        return pop();
    }
    else
    {
        // if the stack has more than one value left, print an error message and return 0
        printf("Invalid RPN expression\n");
        return 0;
    }
}

int main()
{
    // build a Reverse Polish Notation calculator
    printf("Enter an RPN expression: ");
    char expression[100];
    scanf("%[^\n]s", expression);

    printf("Value of expression: %.1f\n", evaluate_rpn(expression));
    return 0;
}