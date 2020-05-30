/**
 * Copyright (C) 2020 Dusan Mitrovic <dusan@dusanmitrovic.xyz>
 * Licensed under the terms of the GNU GPL v3 only
 *
 * Implementation of popular sorting algorithms
 */

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
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapping_occured = 1;
            }
        }

        if (0 == swapping_occured) break;
    }
}
