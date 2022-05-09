#include <iostream>
using namespace std;

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}

int main(){
    int arr[5] = {1, 3, 4, 5, 6};
    cout<<"index at 2 "<<arr[3]<<endl;
    int n = sizeof(arr)/sizeof(int);
    printarray(arr, n);
  return 0;
}