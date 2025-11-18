// DO NOT forget to add the prototypes for your ASort, BSort, and other functions below!


#include <string>
#include <unistd.h>
#define MAXSIZE	 2100000

using namespace std;

void	printmenu();
void	printarray(long data[], long size);
int		readfile(string infilename, long data[]);
int		writefile(long data[], long size, string outfilename);
void	swap(long& x, long& y);
void 	insertionSort(long data[], long n);
void 	heapSort(long data[], long n);
void 	heapify(long data[], long n, long i);
void 	selectionSort(long arr[], long n);
void 	quickSort(long arr[], long low, long high);
