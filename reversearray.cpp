/* reverse array algorithim is used to reverse the given array */



#include <iostream>

using namespace std;
void reverse_array(int arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
    }

}

int main()
{
    int arr[] = {2, 3, 5, 1, 4};
    int n = sizeof(arr)/sizeof(int);
    reverse_array(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" , ";
    }
    return 0;
}
