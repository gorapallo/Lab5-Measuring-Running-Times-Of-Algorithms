/*
 * Dsort.cc
 *
 *  Created on: Nov 18, 2025
 *      Author: gavin-orapallo
 */

#include "myheaders.h"

long partition(long arr[], long low, long high){ // Partition function for quick sort
    long pivot = arr[high];
    long i = (low - 1);

    for (long j = low; j < high; j++){ // go through all elements
        if (arr[j] < pivot){
            i++;
            long temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    long temp = arr[i +1]; // swap pivot element
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return (i + 1); // return pivot index
}

void quickSort(long arr[], long low, long high){ //Quick Sort
    if (low < high){
        long pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

void quickSort(long arr[], long n){
    quickSort(arr, 0, n - 1);
}



