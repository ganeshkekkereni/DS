/* printing pairs 
output:
(1,3)
(1,4)
(1,5)
- -
(3,4)
(3,5)
- -
(5,6)
(5,7)
- -
(6,7)

*/

#include <iostream>

using namespace std;

void printing_pairs(int arr[], int n){
    for(int i=0; i<n; i++){
        int x = arr[i];
        for(int j = i+1; j<n; j++){
            int y = arr[j];
            cout<<" ( "<<x<<" , "<<y<<" ) "<<endl;
        }
        cout<<endl;
    }
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(int);
    printing_pairs(arr, n);

    return 0;
}