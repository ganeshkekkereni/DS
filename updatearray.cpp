#include <iostream>
using namespace std;

void updatearr(int arr[], int n){
         arr[0] = {120};
         for(int i = 0; i<n; i++){
             cout<<arr[i]<<endl;
         }
    cout<<endl;
}

int main(){
    int arr[3] = {1, 2, 3};
    int n = sizeof(arr)/sizeof(int);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    cout<<"upadated array"<<endl;
    updatearr(arr, 3);
    cout<<endl;
    return 0;
}