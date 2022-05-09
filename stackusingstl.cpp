#include <iostream>
using namespace std;
#include <stack>

int main()
{
    stack<int> stack;
    stack.push(21);
    stack.push(30);
    stack.push(34);
    stack.push(78);
    stack.pop();
    stack.pop();

    while(!stack.empty()){
        cout<<" "<<stack.top()<<endl;
        stack.pop();

    }

    return 0;
}