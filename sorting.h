/**
 * Copyright (C) 2020 Dusan Mitrovic <dusan@dusanmitrovic.xyz>
 * Licensed under the terms of the GNU GPL v3 only
 *
 * Sorting header file
 */
#ifndef BUBBLE_SORT
    #define BUBBLE_SORT 1
#endif

#ifndef QUICK_SORT
    #define QUICK_SORT 2
#endif

void bubble_sort(int array[], int size);

void quicksort(int array[], int low, int high);
