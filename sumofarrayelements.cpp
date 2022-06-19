/* sum of array elements is to adding elements in given array 
  summary: arr = 1, 2, 3 -> 1+2+3 = 6
*/



#include <iostream>

using namespace std;

int sum_of_array(int arr[], int n){
    int maximum = 0;
    for(int i=0; i<n; i++){
       maximum += arr[i];
    }
   return maximum; 
}

int main()
{
    int arr[]={1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    cout<<sum_of_array(arr, n);

    return 0;
}
