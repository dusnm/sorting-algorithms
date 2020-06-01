/**
 * Copyright (C) 2020 Dusan Mitrovic <dusan@dusanmitrovic.xyz>
 * Licensed under the terms of the GNU GPL v3 only
 *
 * Program entry point
 */
#include "helpers.h"
#include "config.h"
#include "sorting.h"
#include "arg.h"

/* Function to parse command line options */
static error_t parse_opt(int key, char *arg, struct argp_state *state)
{
    struct arguments *arguments = state->input;

    switch (key)
    {
        case 's':
            arguments->array_size = atoi(arg);
            break;
        case 'm':
            arguments->max_number = atoi(arg);
            break;
        default:
            return ARGP_ERR_UNKNOWN;
    }

    return 0;
}

static struct argp argp = {options, parse_opt, args_doc, doc};

int main(int argc, char *argv[])
{
    /* Structure to store the values of command line arguments */
    struct arguments arguments;

    /* Set default values for command line arguments */
    arguments.array_size = array_size;
    arguments.max_number = max_random_number;

    /* Parse command line arguments */
    argp_parse(&argp, argc, argv, 0, 0, &arguments);

    int choice, error = 0;

    /* Allocate the memory for an array of integers */
    int *array = (int*) malloc(array_size * sizeof(int));

    print_user_options();
    scanf("%d", &choice);

    initialize_array(array, arguments.array_size, arguments.max_number);

    switch(choice)
    {
        case BUBBLE_SORT:
            bubble_sort(array, arguments.array_size);
            print_array(array, arguments.array_size);
            break;
        case QUICK_SORT:
            quicksort(array, 0, arguments.array_size - 1);
            print_array(array, arguments.array_size);
            break;
        default:
            fprintf(stderr, "No algorithm chosen. Terminating.\n");
            error = 1;
            break;
    }

    /* Free the allocated memory to avoid a memory leak */
    free(array);
    
    return 1 == error ? EXIT_FAILURE : EXIT_SUCCESS;
}
