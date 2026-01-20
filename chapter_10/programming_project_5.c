// header files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>

// macro definitions
#define NUM_RANKS (13)
#define NUM_SUITS (4)
#define NUM_CARDS (5)

// external variables

bool ace_low, royal_flush, straight, flush, four, three;
int pairs; // can be 0,1 or 2

// function declarations
void read_cards(int[NUM_CARDS][2]);
void analyze_hand(int[NUM_CARDS][2]);
void print_result(void);
static void sort_small_int_array_ascending(int[], int);

// function definitions

/**********************
 * main: Calls read_cards, analyze_hand, and print_result
 *       repeatedly
 **********************/
int main(void)
{
    // question 2
    while (1)
    {
        // set up a 5 x 2 array to represent the hand
        // each element is a rank and a suit
        // ie the top row is a rank
        // and the second row is a suit
        int hand[NUM_CARDS][2] = {0};
        read_cards(hand);
        analyze_hand(hand);
        print_result();
    }
    return 0;
}

/******************************************************
 * read_cards: Reads the cards into external variables;
 *             checks for bad cards and duplicate cards
 *******************************************************/
void read_cards(int hand[NUM_CARDS][2])
{
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    while (cards_read < NUM_CARDS)
    {

        bad_card = false;
        printf("Enter a card: ");
        rank_ch = getchar();
        switch (rank_ch)
        {
        case '0':
            exit(EXIT_SUCCESS);
        case '2':
            rank = 0;
            break;
        case '3':
            rank = 1;
            break;
        case '4':
            rank = 2;
            break;
        case '5':
            rank = 3;
            break;
        case '6':
            rank = 4;
            break;
        case '7':
            rank = 5;
            break;
        case '8':
            rank = 6;
            break;
        case '9':
            rank = 7;
            break;
        case 't':
        case 'T':
            rank = 8;
            break;
        case 'j':
        case 'J':
            rank = 9;
            break;
        case 'q':
        case 'Q':
            rank = 10;
            break;
        case 'k':
        case 'K':
            rank = 11;
            break;
        case 'a':
        case 'A':
            rank = 12;
            break;
        default:
            bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch)
        {
        case 'c':
        case 'C':
            suit = 0;
            break;
        case 'd':
        case 'D':
            suit = 1;
            break;
        case 'h':
        case 'H':
            suit = 2;
            break;
        case 's':
        case 'S':
            suit = 3;
            break;
        default:
            bad_card = true;
        }

        while ((ch = getchar()) != '\n')
        {
            if (ch != ' ')
            {
                bad_card = true;
            }
        }
        if (bad_card)
        {
            printf("Bad card; ignored.\n");
            continue;
        }
        /* Duplicate check: compare against previously stored cards */
        bool is_duplicate = false;
        for (int i = 0; i < cards_read; i++)
        {
            if (hand[i][0] == rank && hand[i][1] == suit)
            {
                is_duplicate = true;
                break;
            }
        }

        if (is_duplicate)
        {
            printf("Duplicate card; ignored.\n");
            continue;
        }

        if (!bad_card && !is_duplicate)
        {
            hand[cards_read][0] = rank;
            hand[cards_read][1] = suit;
            cards_read++;
        }
    }
}

/******************************************************
 * analyze_hand: Determines whether the hand contains a
 *               straight, flush, four of a kind, three of
 *               a kind, and/or two pairs, and stores the
 *               results in external variables straight,
 *               flush, four, three, and pairs
 *******************************************************/
void analyze_hand(int hand[NUM_CARDS][2])
{
    // ensure that the external variables are reset
    // so that the next hand can be analyzed
    int num_consec = 0;
    int rank, suit;
    ace_low = royal_flush = straight = flush = four = three = false;
    pairs = 0;

    /* Copy the existing ranks into a new array and sort them */
    // this will be used to check for a straight, royal flush etc.
    int ranks[NUM_CARDS];
    for (int i = 0; i < NUM_CARDS; i++)
    {
        ranks[i] = hand[i][0];
    }
    sort_small_int_array_ascending(ranks, NUM_CARDS);

    // iterate over each suit
    // remember we store the rank in the 0th row, and the suit in the 1st row
    // check for a flush (all the same suit)
    flush = true;
    for (int i = 1; i < NUM_CARDS; i++)
    {
        if (hand[i][1] != hand[0][1])
        {
            // if the suit at this index is not the same as the first card, it is not a flush
            flush = false;
            break;
        }
    }

    // check for a royal flush (ace,king,queen,jack,ten of the same suit)
    if (flush)
    {
        // we need a flush to check for a royal flush
        royal_flush = true;
        const int expected_royal_ranks[NUM_CARDS] = {8, 9, 10, 11, 12};

        for (int i = 0; i < NUM_CARDS; i++)
        {
            if (ranks[i] != expected_royal_ranks[i])
            {
                royal_flush = false;
                break;
            }
        }
    }

    /* Check if we have a straight (5 consecutive ranks) */
    straight = true;
    for (int i = 1; i < NUM_CARDS; i++)
    {
        // for each iteration, the card at this index must be one more than the previous
        if (ranks[i] != ranks[i - 1] + 1)
        {
            // if it is not one more than the previous, it is not a straight
            straight = false;
            break;
        }
    }

    /* If not a normal straight, check for ace-low straight (ace, 2, 3, 4, 5) */
    if (!straight)
    {
        // set up an array to check for an ace-low straight after sorting
        const int expected_ace_low_ranks[NUM_CARDS] = {0, 1, 2, 3, 12};
        ace_low = true;

        for (int i = 0; i < NUM_CARDS; i++)
        {
            if (ranks[i] != expected_ace_low_ranks[i])
            {
                ace_low = false;
                break;
            }
        }

        if (ace_low)
        {
            straight = true;
        }
    }

    /* Count duplicates */
    bool visited[NUM_CARDS] = {false};

    for (int i = 0; i < NUM_CARDS; i++)
    {
        if (visited[i])
        {
            // if the card has already been counted as part of a group of ranks, we need to skip it
            continue;
        }

        int same_rank_count = 1;
        for (int j = i + 1; j < NUM_CARDS; j++)
        {
            if (hand[j][0] == hand[i][0])
            {
                // if the card at this index has the same rank as the current card, we need to count it
                same_rank_count++;
                // and mark it as visited, so we don't count it again
                visited[j] = true;
            }
        }

        // check if we have four of a kind, three of a kind, or two pairs
        if (same_rank_count == 4)
        {
            four = true;
        }
        else if (same_rank_count == 3)
        {
            three = true;
        }
        else if (same_rank_count == 2)
        {
            pairs++;
        }
    }
}
/*********************************************
 * print_result: Prints the classification of the hand, based on the
 *               values of straight, flush, four, three, and pairs
 *********************************************/
void print_result(void)
{
    if (royal_flush)
    {
        printf("Royal flush\n");
        return;
    }
    else if (straight && flush)
    {
        printf("Straight flush\n");
    }
    else if (four)
    {
        printf("Four of a kind\n");
    }
    else if (three && pairs == 1)
    {
        printf("Full house\n");
    }
    else if (flush)
    {
        printf("Flush\n");
    }
    else if (straight)
    {
        printf("Straight\n");
    }
    else if (three)
    {
        printf("Three of a kind\n");
    }
    else if (pairs == 2)
    {
        printf("Two pairs\n");
    }
    else if (pairs == 1)
    {
        printf("One pair\n");
    }
    else
    {
        printf("High card\n");
    }
    printf("\n");
}

/******************************************************
 * sort_small_int_array_ascending:
 *  Purpose: Sort small integer array in ascending order.
 ******************************************************/
static void sort_small_int_array_ascending(int values[], int count)
{
    for (int i = 0; i < count - 1; i++)
    {
        int smallest_index = i;
        for (int j = i + 1; j < count; j++)
        {
            if (values[j] < values[smallest_index])
            {
                smallest_index = j;
            }
        }

        if (smallest_index != i)
        {
            int temp = values[i];
            values[i] = values[smallest_index];
            values[smallest_index] = temp;
        }
    }
}