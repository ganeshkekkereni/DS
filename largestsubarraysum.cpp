/* largest subarray sum is problem is used to return the largest sum number in  subarray array 
   based on brute force approach and its time complexity is o(n^3) 
   arr = 1, 2, 3, 4, 5  -> here largest subarray is 4, 5 and sum of those numbers is 9
*/


#include <iostream>
using namespace std;

int largest_subarray_sum(int arr[], int n)
{
     int largest_sum = 0;
     for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int subarray_sum = 0;
            for(int k=i; k<=j; k++){
                subarray_sum += arr[i];
            }
        largest_sum = max(largest_sum, subarray_sum);
        }
     }
    return largest_sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    cout<<largest_subarray_sum(arr, n)<<endl;
    return 0;
}