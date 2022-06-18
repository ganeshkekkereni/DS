/* printing subarray of given array elements 

output: 
1
1,2
1,2,3
- - - 
2
2,3
2,3,4
- - - - 

*/

#include <iostream>

using namespace std;

void print_subarray(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            for(int k = i; k<=j; k++){
                cout<<arr[k]<<" , ";
            }
            cout<<endl;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(int);
    print_subarray(arr, n);
    return 0;
}