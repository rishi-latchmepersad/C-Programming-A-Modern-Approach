#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>

int main()
{
    // question 1
    // for the f function, the variable and parameter names visible in the scope are:
    // a, b and c
    // for the g function, they are
    // a and d
    // for the block in which e is declared, they are a, d and e
    // and for the main function, they are a and f
    // question 2
    // for the f function, the variable and parameter names visible in the scope are:
    // the b redefined in f, c and d
    // for the g function, they are:
    // b, a and the c redefined in g
    // for the block in which a and d are declared, they are:
    // b, redefined c, redefined a, and d
    // and for the main function, they are:
    // b, redefined c, and d
    // question 3
    // even if a program only has one function main declared, we can create infinitely many scopes and declare as
    // many i variables as we want, as long as they are declared in different scopes.
    return 0;
}