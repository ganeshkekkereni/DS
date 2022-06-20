/* char a[100];
   char a[100] = {'a', 'b', 'c', 'd'}; //wrong
   char a[100] = {'a', 'b', 'c', 'd', '\0'}; //right
   char a[100] = "abc";
   
*/



#include <iostream>
#include <cstring>

#include <string>
using namespace std;

int main()
{
    char a[] = "adcdefghiklmnopqrstuvwxyz";
    cout<<a<<endl;
     cout<<strlen(a)<<endl;  // number of visible characters.
    cout<<sizeof(a)<<endl; // 26 because of NuLL character
    char b[100];
    cin>>b;      //input: hello world
    cout<<b<<endl; // output: hello
    return 0;
}