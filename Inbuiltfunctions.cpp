/* Inbuilt sort and comparators
   1) Sort
   2) Comparator
   3) Reverse
   4) greater<int>() -> sort(arr, arr+n, greater<int>());
*/




#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    return a<b;
}


int main()
{
    int arr[] = {10, 8, 6, 5, 4, 3, 2, 11, 16, 8};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Inbuilt sort function"<<endl;
    sort(arr, arr+n);
    for(int x: arr){
        cout<<x<<" , ";
    }
    cout<<endl;
    cout<<"Inbuilt reverse function"<<endl;
    reverse(arr, arr+n);
    for(int x: arr){
        cout<<x<<" , ";
    }
    cout<<endl;
    cout<<"Inbuilt comparator function"<<endl;
    sort(arr, arr+n, compare);
    for(int x: arr){
        cout<<x<<" , ";
    }
    
    return 0;
}