/* bubble sort -> take larger element to the end by repeatedly swapping the adjacent element
   ex:
      when heating water in a beaker forms bubbles and goes top to water and explode
    summary:  1st time         2nd time
      j= 0        n-2 n-1      j= 0       n-3
      5    4  3    2   1       4    3  2   1
      4    5  3    2   1       3    4  2   1       - - - - upto soon - - - - - - - we get sorted array.
      4    3  5    2   1       3    2  1   4
      4    3  2    5   1
      4    3  2    1   5

*/

// C++ program for implementation
// of Bubble sort
#include <bits/stdc++.h>
using namespace std;

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already
		// in place
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code
int main()
{
	int arr[] = { 5, 1, 4, 2, 8};
	int N = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	return 0;
}
// This code is contributed by rathbhupendra
