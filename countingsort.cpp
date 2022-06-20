 
/*
Counting sort is a sorting technique based on keys between a specific range.
It works by counting the number of objects having distinct key values (kind of hashing). 
Then do some arithmetic to calculate the position of each object in the output sequence. 
step 1:
  arr = 5, 8, 3, 1, 1, 6
step 2: create and index(freq)array with the size of largest number in arr(8)
  index: 0 1 2 3 4 5 6 7 8
         0 2 0 1 0 1 1 0 1
step 3: add adjacent elements in index array
  index: 0 1 2 3 4 5 6 7 8
         0 2 2 3 3 4 5 5 6 ->here after inserting into output array i will be decrease[1-2, 2 will decrease then 1-1]
step 4: output
  index: 1 2 3 4 5 6
         1 1 3 5 6 8 -> sorted array
*/
  
#include <iostream>
using namespace std;
#include <vector>

void counting_sort(int arr[], int n){
    int largest = -1;  //largest element
    for(int i=0;i<n;i++){
        largest = max(largest, arr[i]);
    }
    vector<int> freq(largest+1, 0);   //create a count array/vector
    //udate the freq array
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    //put back the elements from freq intto original array
    int j = 0;
    for(int i=0; i<=largest; i++){
        while(freq[i]>0){
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
    return;
}

int main()
{
    int arr[] = {5, 8, 3, 1, 1, 6};
    int n = sizeof(arr)/sizeof(int);
    counting_sort(arr, n);
    for(auto x:arr){
        cout<<x<<" , ";
    }
 return 0;
}