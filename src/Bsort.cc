#include "myheaders.h"


void heapify(long data[], long n, long i){
	long largest = i;
	long left = 2*i+1;
	long right = 2*i+2;

	if (left < n && data[left] > data[largest])
		largest=left;
	if (right < n && data[right] > data[largeest])
		largest = right;

	if (largest != i) {
		swap(data[i], data[largest]);
		heapify(data, n, largest);
	}
}

void heapSort(long data[], long n){
	for (long i = n/2 - 1; i>=0; --i){
		heapify(data, n, i);
	}

	for (long i = n - 1; i>0; --i){
		swap(data[0], data[i]);
		heapify(data, i, 0);
	}
}
