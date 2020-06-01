/**
 * Copyright (C) 2020 Dusan Mitrovic <dusan@dusanmitrovic.xyz>
 * Licensed under the terms of the GNU GPL v3 only
 *
 * Argument header file
 */
#include <argp.h>

/* Program version */
const char *argp_program_version = "Sorter v1.0.0";

/* Bug report email address */
const char *argp_program_bug_address = "dusan@dusanmitrovic.xyz";

/* Argument description */
static char args_doc[] = "";

/* Program description */
static char doc[] = "A simple program used to demonstrate the difference in efficiency of various sorting algorithms.";

/* Command line argument options */
static struct argp_option options[] = 
{
    {"array-size", 'a', "array_size", 0, "Size of the array to be sorted."},
    {"max-number", 'm', "max_number", 0, "Maximum random number to be generated."},
    {0}
};

/* Command line arguments */
struct arguments
{
    int array_size; /* Argument for -a */
    int max_number; /* Argument for -m */
};
