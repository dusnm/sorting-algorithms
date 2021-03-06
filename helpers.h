/**
 * Copyright (C) 2020 Dusan Mitrovic <dusan@dusanmitrovic.xyz>
 * Licensed under the terms of the GNU GPL v3 only
 *
 * Helpers Header file
 */
#ifndef HELPERS_H
#define HELPERS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

int random_integer(int minimum, int maximum);

void swap(int *first_value, int* second_value);

void initialize_array(int array[], int size, int max_number);

void print_array(int array[], int size);

void print_user_options();

#endif
