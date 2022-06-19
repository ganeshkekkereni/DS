#include <iostream>
using namespace std;

int largest_prefix_subarray_sum(int arr[], int n)
{   
    int largest_sum = 0;
    int prefix[100]   = {0};
    prefix[0] = arr[0];
    for(int i=0; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int subarray_sum = i>0?prefix[j]-prefix[i-1]:prefix[j];
              largest_sum = max(largest_sum, subarray_sum);
        }
    }
    return largest_sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    cout<<largest_prefix_subarray_sum(arr, n)<<endl;
    return 0;
}