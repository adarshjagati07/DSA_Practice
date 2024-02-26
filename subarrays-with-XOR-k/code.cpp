#include<bits/stdc++.h>
using namespace std;

int subarraysWithSumK(vector < int > a, int b) {
    int numsLen = a.size();
    map<int,int> mpp;
    int xr = 0;
    int count = 0;
    
    mpp[xr]++; // initially store {0,1}

    for(int i = 0; i < numsLen; i++){
        xr = xr ^ a[i];
        int x = xr ^ b;
        count += mpp[x];

        mpp[xr]++;
    }
    return count;
}