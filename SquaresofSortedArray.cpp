#include <bits/stdc++.h>
#include <vector> 
std::vector < int > sqsorted(std::vector < int > & arr) {
    for(int i=0; i<arr.size(); i++)
    {
        arr[i] = arr[i]*arr[i];
    }
    sort(arr.begin(), arr.end());
    return arr;
}
