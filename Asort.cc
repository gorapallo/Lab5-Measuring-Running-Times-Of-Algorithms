#include "myheaders.h"


void insertionSort(long data[], long n){
	for (long i = 1; i<n; ++i){ //loops through the array starting at second element
		long temp = data[i]; //stores current element in temp
		long j = i; //set j to the current position
		while (j>0 && temp < data[j - 1]){ //when not at start and temp is smaller than the previous element
			data[j] = data[j-1]; //element shifts over 1
			--j; //j moves to the left
		}
		data[j] = temp; //temp is put in position
	}
}
