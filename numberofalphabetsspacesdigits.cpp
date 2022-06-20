#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch;
    ch = cin.get();
    int digits = 0;
    int alpha = 0;
    int spaces = 0;
    while(ch != '#'){
        if(ch>='0' and ch<='9'){
            digits++;
        }
        else if((ch>='a' and ch<='z')or(ch>='A' and ch<='Z')){
            alpha++;
        }
        else if(ch==' ' and ch=='\n'){
            spaces++;
            
        }
       ch = cin.get();
    }
    cout<<"The total alphbets is "<<alpha<<endl;
    cout<<"The total digits is "<<digits<<endl;
    cout<<"The total spaces is "<<spaces<<endl;
    
    return 0;
}