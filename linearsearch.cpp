// linear search is a searching algorithim used find the element in an given array, returns the index of
// searching element 


#include <iostream>

using namespace std;

int linear_search(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {5, 2, 6, 4, 1};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int index = linear_search(arr, n, key);
    if(index != -1){
        cout<<"element "<<key<<" present at "<<index<<" in given array."<<endl;
    }
    else{
        cout<<"element "<<key<<" not present in given array. "<<endl;
    }
    return 0;
}