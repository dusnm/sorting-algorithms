/**
 * Copyright (C) 2020 Dusan Mitrovic <dusan@dusanmitrovic.xyz>
 * Licensed under the terms of the GNU GPL v3 only
 *
 * Sorting header file
 */
#ifndef SORTING_H
#define SORTING_H

#define BUBBLE_SORT 1
#define QUICK_SORT 2

void bubble_sort(int array[], int size);

void quicksort(int array[], int low, int high);

#endif
