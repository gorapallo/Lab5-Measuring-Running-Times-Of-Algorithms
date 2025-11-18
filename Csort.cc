/*
 * Csort.cc
 *
 *  Created on: Nov 18, 2025
 *      Author: gavin-orapallo
 */


#include "myheaders.h"

void selectionSort(long arr[], long n) //Selection Sort
{
    for (long i = 0; i < n - 1; i++) // Go through all elements
    {
        long minIndex = i;

        for (long j = i + 1; j < n; j++) // Find minimum in array
        {
            if (arr[j] < arr[minIndex]) // Update minimum index if element is smaller
                minIndex = j;
        }

        long temp = arr[minIndex]; //Swap new minimum with current
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

