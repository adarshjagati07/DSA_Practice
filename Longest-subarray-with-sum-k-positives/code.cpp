#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {

    int left = 0, right = 0;
    long long sum = a[0];
    int maxlen = 0;
    int n = a.size();

    while(right < n){
        while(left <= right && sum > k){
            sum = sum - a[left];
            left++;
        }

        if(sum == k){
            maxlen = max(maxlen , right-left+1);
        }

        right++;
        if(right < n){
            sum = sum + a[right];
        }
    }

    return maxlen;

}