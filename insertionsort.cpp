/* key idea -> Insertion sort is similar to playing cards in our hands 
   Insert the card in its correct position in a sorted part
   it has unsorted array and sorted array.
*/


#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i=1; i<n-1; i++){
        int curr = arr[i];
        int prev = i-1;
    // loop to find the right index where the correct element should be inserted.
    while(prev>=0 and arr[prev]>curr){
        arr[prev+1]=arr[prev];
        prev = prev-1;
    }
    arr[prev+1] = curr;
  }  
}

int main()
{
    int arr[] = {2, 5, 3, 1, 7};
    int n = sizeof(arr)/sizeof(int);
    insertion_sort(arr, n);
    for(auto x:arr){
        cout<<x<<" , ";
    }
}