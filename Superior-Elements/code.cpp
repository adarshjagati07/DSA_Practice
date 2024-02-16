#include<bits/stdc++.h>
using namespace std;

vector<int> superiorElements(vector<int>&a) {
    int numsLen = a.size();
    vector<int> result;

    int maxi = INT_MIN;
    for(int i = numsLen-1; i >= 0; i--){
        if(a[i] > maxi){
            result.push_back(a[i]);
            maxi = max(maxi, a[i]);
        }
    }
    return result;
}