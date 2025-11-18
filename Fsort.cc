/*
 * Fsort.cc
 *
 *  Created on: Nov 18, 2025
 *      Author: gavin-orapallo
 */

#include "myheaders.h"
//countingsort function
void countingsort(long data[], const long n) {
	long i;
	long largest = data[0]; //set largest to first data member
	long *tmp = new long[n]; //create temporary array of size n
	for (i = 1; i < n; i++) //loop to find largest value
			if (largest < data[i])
						largest = data[i];
	unsigned long *count = new unsigned long[largest+1]; //create dynamic array of 1 + largest to be able to count 0 too
	for (i = 0; i <= largest; i++) //loop to set all values equal to 0 in count array
		count[i] = 0;
	for (i = 0; i < n; i++) //loop to count how many times each value appears
		count[data[i]]++;
	for (i = 1; i <= largest; i++) //loop to make count be a cumulative count
		count[i] = count[i-1] + count[i];
	for (i = n-1; i >= 0; i--) { //loop to create proper order of numbers
		tmp[count[data[i]]-1] = data[i];
		count[data[i]]--;
	}
	for (i = 0; i < n; i++) //copy the sorted array into the original one
		data[i] = tmp[i];
}




