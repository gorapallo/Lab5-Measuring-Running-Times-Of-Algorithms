#include "myheaders.h"


void insertionSort(long data[], long n){
	for (long i = 1; i<n; ++i){
		long temp = data[i];
		long j = i;
		while (j>0 && temp < data[j - 1]){
			data[j] = data[j-1];
			--j;
		}
		data[j] = temp;
	}
}
