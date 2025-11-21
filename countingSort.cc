/*
 * Fsort.cc
 *
 *  Created on: Nov 18, 2025
 *      Author: gavin-orapallo
 */

#include "myheaders.h"
//countingsort function
void countingSort(long data[], const long n) {
	long i;
	    long smallest = data[0];               // smallest to allow negative numbers
	    long largest = data[0];                //set largest to first data member
	    long *tmp = new long[n];               //create temporary array of size n
	   for (i = 1; i < n; i++) {              //loop to find largest value
	        if (largest < data[i])
	            largest = data[i];
	        if (smallest > data[i])            // also track smallest
	            smallest = data[i];
	    }
	   long range = largest-smallest+1;

	   if (range > 5000000){
		   delete[] tmp;
		   return;
	   }

	   long offset = smallest;                // shift everything by -smallest
	    unsigned long *count = new unsigned long[range]; //create dynamic array
	   for (i = 0; i < range; i++)   //loop to set all values equal to 0 in count array
	        count[i] = 0;
	   for (i = 0; i < n; i++)                //loop to count how many times each value appears
	        count[data[i] - offset]++;
	   for (i = 1; i < range; i++)   //loop to make count be a cumulative count
	        count[i] = count[i-1] + count[i];
	   for (i = n-1;; i--) {           //loop to create proper order of numbers
	        tmp[count[data[i] - offset]-1] = data[i];
	        count[data[i] - offset]--;

	        if  (i==0) break;
	    }
	   for (i = 0; i < n; i++){                //copy the sorted array into the original one
	        data[i] = tmp[i];
	}

delete[] count;
delete[] tmp;
}



