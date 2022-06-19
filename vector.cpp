/* vector are sequence containers representing arrays that can change in size.
   just like array, vectors use contiguous storage locations for their elements.
   which means that their elements can also be accessed directly in o(1)time.
   But unlike arrays, their size can change dynamically, with their storage being handled automatically
   by the containers.
   vectors can be used to create dynamic 1D and 2D arrays.
   Unlike arrays, vector are passed by value to a function you may can still pass them by refference if need arises.
*/

#include <iostream>
using namespace std;
#include <vector>

int main()
{
    std::vector<int> arr;
    cout<<arr.size()<<endl;
    arr = {1, 2, 4};
    cout<<arr.size()<<endl;
    std::vector<char> c = {'a', 'b', 'c', 'd'};
    cout<<c.capacity()<<endl;
    for(int i=0; i<c.size(); i++){
        cout<<c[i]<<" , ";
    }
    cout<<endl;
    c.push_back('e');
    cout<<c.capacity()<<endl;
    for(int i=0; i<c.size(); i++){
        cout<<c[i]<<" , ";
    }
    cout<<endl;
    cout<<c.size()<<endl;
 return 0;
}