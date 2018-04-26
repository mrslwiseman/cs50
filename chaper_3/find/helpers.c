/**
 * helpers.c
 *
 * CS50 AP
 * Find
 *
 * Helper functions.
 */

#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    // loop over values
    // if current value == value
    // return true
    if (n <= 0)
    {
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (value == values[i])
        {
            return 0;
        }
    }
    return 1;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
// TODO: implement an O(n^2) sorting algorithm
    for (int i = 0; i < n; i++)
    {
        int min = values[i];
        for (int j = i; j < n; j++)
        {
            if (values[j] < values[min])
            {
                min = j; // min is index location of smallest
            }
        }
        int temp = values[i];
        values[i] = values[min];
        values[min] = temp;
    }

    return;
}

