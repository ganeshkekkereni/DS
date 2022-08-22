#include<bits/stdc++.h>
using namespace std;
#include <queue>

int main()
{
    int k;
    cin>>k;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    priority_queue<int, vector<int>, greater<int>> p;
    for(int i=0;i<n;i++){
        p.push(arr[i]);
    }
    int ans, i=1;
    while(!p.empty())
    {
        if(i==k)
        {
            ans = p.top();
            break;
        }
        i++;
        p.pop();
    }
    cout<<ans<<endl;
   return 0;
}