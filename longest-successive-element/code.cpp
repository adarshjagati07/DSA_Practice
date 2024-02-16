#include<bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int>&a) {
    int numsLen = a.size();
    int count = 1;
    int maxCount = INT_MIN;

    sort(a.begin(), a.end());

    for(int i = 0; i < numsLen-1; i++){
      if (a[i] == a[i + 1]) {
          continue;
      }
      if(a[i]+1 == a[i+1]){
        count++;
       }else{
         maxCount = max(maxCount,count);
         count = 1;
       }
    }
    maxCount = max(maxCount,count);
    return maxCount;
}