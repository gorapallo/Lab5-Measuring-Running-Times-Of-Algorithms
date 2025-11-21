#include "myheaders.h"


void heapify(long data[], long n, long i){
	long largest = i; //largest is set to i
	long left = 2*i+1; //left child index
	long right = 2*i+2; //right child index

	//check to see if the left child is bigger than the current largest
	if (left < n && data[left] > data[largest])
		largest=left; //sets largest to left child
	//check to see if the right child is bigger than the current largest
	if (right < n && data[right] > data[largest])
		largest = right;//sets largest to right child
	//check to see if the biggest is not the original i
	if (largest != i) { //if largest is not root
		swap(data[i], data[largest]); //swap the values
		heapify(data, n, largest);
	}
}

void heapSort(long data[], long n){
	for (long i = n/2 - 1; i>=0; --i){ //builds heap from bottom up
		heapify(data, n, i);
	}
	//take the biggest element and put it at the end
	for (long i = n - 1; i>0; --i){
		swap(data[0], data[i]); //move root to i
		heapify(data, i, 0);
	}
}
//array is sorted
