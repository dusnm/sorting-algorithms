/**
 * Copyright (C) 2020 Dusan Mitrovic <dusan@dusanmitrovic.xyz>
 * Licensed under the terms of the GNU GPL v3 only
 *
 * Implementation of popular sorting algorithms
 */
#include "helpers.h"

/**
 * Bubble sort
 * Complexity
 *
 * Best: O(n)
 * Average: O(n^2)
 * Worst: O(n^2)
 */
void bubble_sort(int array[], int size)
{
    int swapping_occured = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1]) 
            {
                swap(&array[j], &array[j + 1]);
                swapping_occured = 1;
            }
        }

        if (0 == swapping_occured) break;
    }
}

/**
 * Quicksort
 * Complexity
 *
 * Best: O(n log n)
 * Average: O(n log n)
 * Worst: O(n^2)
 */
int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int i = low - 1;
    int temp;

    for (int j = low; j <= high; j++)
    {
        if (array[j] < pivot) 
        {
            swap(&array[++i], &array[j]);
        }
    }

    swap(&array[i + 1], &array[high]);

    return i + 1;
}

void quicksort(int array[], int low, int high)
{ 
   if (low < high) 
   {
        int partition_index = partition(array, low, high);

        quicksort(array, low, partition_index - 1);
        quicksort(array, partition_index + 1, high);
   }
}
