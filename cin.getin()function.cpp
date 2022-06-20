/*
  output:
         ganesh
         ganesh
         ganesh#
         ganesh length is 7
*/

#include <iostream>
using namespace std;

int main()
{
    char sentence[1000];
    cin.getline(sentence, 1000);
    cout<<sentence<<endl;
    char temp;
    int len = 0;
    while(temp!='#'){
        len++;
        cout<<temp;
        //update the value of temp
        temp = cin.get();
    }
    cout<<" length is "<<len<<endl;
   
    return 0;
    
}