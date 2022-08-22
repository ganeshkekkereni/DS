#include <iostream>
using namespace std;
#include <vector>

void max_min_element(vector<int> const &num, int &max, int &min)
{ 
     max = num[0], min = num[0];
    for(int i=1; i<num.size(); i++){
        if(num[i]>max){
            max = num[i];
        }
        else if(num[i]<min){
            min = num[i];
        }
    }
}

int main()
{
    vector<int> num = {1, 3, 30, 2, 5};
    int max;
    int min;
    max_min_element(num, max, min);
    cout<<"maximum element of array "<<max<<endl;
    cout<<"minimum element of array "<<min<<endl;
    return 0;
}
