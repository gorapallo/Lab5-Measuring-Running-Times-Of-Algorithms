#include "myheaders.h"


void heapify(long data[], long n, long i){
	long largest = i; //largest is set
	long left = 2*i+1; //calculates left child index
	long right = 2*i+2; //calculates right child index

	if (left < n && data[left] > data[largest]) //if child > root
		largest=left; //sets largest to left
	if (right < n && data[right] > data[largest])//if child> root
		largest = right;//sets largest to right

	if (largest != i) { //if largest is not root
		swap(data[i], data[largest]); //swap root with largest
		heapify(data, n, largest); //heapify the subtree
	}
}

void heapSort(long data[], long n){
	for (long i = n/2 - 1; i>=0; --i){ //builds heap from bottom up
		heapify(data, n, i); //heapify the nodes
	}

	for (long i = n - 1; i>0; --i){ //extract elements from  the heap
		swap(data[0], data[i]); //move root to the end
		heapify(data, i, 0); //heapify the reduced heap
	}
}
