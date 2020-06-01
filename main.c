/**
 * Copyright (C) 2020 Dusan Mitrovic <dusan@dusanmitrovic.xyz>
 * Licensed under the terms of the GNU GPL v3 only
 *
 * Program entry point
 */
#include "helpers.h"
#include "config.h"
#include "sorting.h"

int main(int argc, char *argv[])
{
    int choice, error = 0;

    /* Allocate the memory for an array of integers */
    int *array = (int*) malloc(array_size * sizeof(int));

    print_user_options();
    scanf("%d", &choice);

    initialize_array(array, array_size); 

    switch(choice)
    {
        case BUBBLE_SORT:
            bubble_sort(array, array_size);
            print_array(array, array_size);
            break;
        case QUICK_SORT:
            quicksort(array, 0, array_size - 1);
            print_array(array, array_size);
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
