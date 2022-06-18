/* Binary searching algorithm is an efficient searching algorithim for sorted array 
   used to find the element in an given array.
*/


#include <iostream>

using namespace std;

int binary_search(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = s+e/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 12, 14, 16, 18};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int index = binary_search(arr, n, key);
    if(index != -1){
        cout<<"element is present in an given array"<<endl;
    }
    else{
        cout<<"element is not present in an given array"<<endl;
    }
    return 0;
}
