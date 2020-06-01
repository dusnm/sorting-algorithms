/**
 * Copyright (C) 2020 Dusan Mitrovic <dusan@dusanmitrovic.xyz>
 * Licensed under the terms of the GNU GPL v3 only
 *
 * A set of helper functions used througout the program
 */
#include "helpers.h"
#include "config.h"

/* Returns a random integer between minimum (inclusive) and maximum (exclusive) */
int random_integer(int minimum, int maximum)
{
    static int seeded = 0;

    /* Seed the random number generator only once */
    if (0 == seeded) 
    {
        srand(time(NULL));
        seeded = 1;
    }

    return rand() % (maximum - minimum + 1) + minimum;
}

/* Swaps the values of two integers in memory */
void swap(int* first_value, int* second_value)
{
    int temp = *first_value;
    *first_value = *second_value;
    *second_value = temp;
}

/* Initialize the array with random integers */
void initialize_array(int array[], int size)
{
    for (int i = 0; i < size; array[i++] = random_integer(1, max_random_number));
}

/* Print the values of the array to stdout */
void print_array(int array[], int size)
{
    for (int i = 0; i < size; printf("%d\n", array[i++]));
}

/* Print the prompt for the user */
void print_user_options()
{
    static const char *user_options[] = {
        "Please pick a sorting algorithm:",
        "1) Bubble sort",
        "2) Quick sort"
    };

    /* Calculate the length of the user options array */
    int user_options_length = (int) (sizeof(user_options) / sizeof(user_options[0]));

    for (int i = 0; i < user_options_length; printf("%s\n", user_options[i++]));
}
