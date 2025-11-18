/*
 * Esort.cc
 *
 *  Created on: Nov 18, 2025
 *      Author: gavin-orapallo
 */

#include "myheaders.h"
//swap function
//template<typename T>
//void swap(T& a, T& b)
//{
//   long temp = a;
//   a = b;
//   b = temp; // swap a and b(data[j] and data[j-1])
//}
//bubblesort function

void bubbleSort(long data[], long n)
{
   for (int i = 0; i < n-1; i++) //cycle through each value to compare with next but not last
       for (int j = n-1; j > i; --j) //start from end of array(bottom of vertical column) and go up
           if (data[j] < data[j-1])
               swap(data[j], data[j-1]); //swap the values in the array if the value of the smaller index is greater than the larger one
}



