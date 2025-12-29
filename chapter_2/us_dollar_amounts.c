#include <stdio.h>

int main()
{
    printf("Enter a dollar amount: ");
    int dollars;
    scanf("%d", &dollars);
    printf("$20 bills: %d\n", dollars / 20);
    // use the modulus operator to get the remainder
    dollars %= 20;
    printf("$10 bills: %d\n", dollars / 10);
    // repeat for the next denomination
    dollars %= 10;
    printf("$5 bills: %d\n", dollars / 5);
    dollars %= 5;
    printf("$1 bills: %d\n", dollars);
}